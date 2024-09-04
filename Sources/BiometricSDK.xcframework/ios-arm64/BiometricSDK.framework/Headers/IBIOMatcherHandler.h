//
//  BIOMatcherHandler.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 27/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOTemplate.h>
#import <BiometricSDK/BIOAuthenticationResult.h>
#import <BiometricSDK/BIOIdentificationResult.h>
#import <BiometricSDK/BIOImage.h>
#import <BiometricSDK/BIOIdentificationOptions.h>
#import <BiometricSDK/BIODetectBiometricOptions.h>
#import <BiometricSDK/BIOEye.h>
#import <BiometricSDK/BIOMatcherHandlerOptions.h>
#import <BiometricSDK/BIOAuthenticationOptions.h>
#import <BiometricSDK/BIOBiometricCandidate.h>
#import <BiometricSDK/BIOBiometricReference.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Protocol of object that handling identification on verification. All methods are asynchronous.
 */
@protocol BIOMatcherHandler <NSObject>

/**
 *  Method that take template and try to find eyes position.
 *
 *  @param bioTemplate       Template to scan. NOTE: method does not check if there is any face in template
 *  @param completionHandler Completion handler that returns array of eyes. Retruns Error if any occure otherwise nil
 */
- (void)getEyesFromTemplate:(BIOTemplate *)bioTemplate
      withCompletionHandler:(void(^)(NSArray<BIOEye *> * _Nullable eyes, NSError * _Nullable error))completionHandler;

/**
 *  Method that authenticates biometrics in given candidates and references template. NOTE: For face it takes only first element from each array
 *
 *  @param options            Object that pass options to matcher handler.
 *  @param candidateTemplates Array of objects that are candidates for verification process. NOTE: If this array is empty or nil method does nothing
 *  @param referenceTemplates Array of refernece object to verification process. NOTE: If this array is empty or nil method does nothing
 *  @param completionHandler  Complition handler returns result of verification or/and error if any occurred.
 */
- (void)authenticateWithOptions:(BIOAuthenticationOptions *)options
         withBiometricCandidate:(BIOBiometricCandidate *)biometricCandidate
         withBiometricReference:(BIOBiometricReference *)biometricReference
           andCompletionHandler:(void (^)(BIOAuthenticationResult * _Nullable result, NSError * _Nullable error))completionHandler;


/**
 *  Method that identify biometrics in given candidates and references template. NOTE: For face it takes only first element from referenceTemplates array
 *
 *  @param options            Object that pass options to matcher handler.
 *  @param candidateTemplates Candidate array of templates used to identifiaction. NOTE: For face it take only first element.
 *  @param referenceTemplates Array of reference template to compare with candidates
 *  @param completionHandler  Completion handler that return array of templates that was identified or/and error if any occurred
 */
- (void)identifyWithOptions:(BIOIdentificationOptions *)options
     withBiometricCandidate:(BIOBiometricCandidate *)biometricCandidate
    withBiometricReferences:(NSArray<BIOBiometricReference *> *)biometricReferences
       andCompletionHandler:(void (^)(BIOIdentificationResult * _Nullable result, NSError * _Nullable error))completionHandler;


/**
 *  Method that detect biometric in given BIOImage
 *
 *  @param options           Options that tells matcher handler what type of biometric it should search for
 *  @param image             Image to scan
 *  @param completionHandler Completion handler that will return array of founded biuometric templates or/and error if any occured.
 */
- (void)detectBiometricWithOptions:(BIODetectBiometricOptions *)options
                      withBIOImage:(BIOImage *)image
             withCompletionHandler:(void (^)(NSArray<BIOTemplate *> * _Nullable templates, NSError * _Nullable error))completionHandler;


- (void)destroy;

@end

NS_ASSUME_NONNULL_END
