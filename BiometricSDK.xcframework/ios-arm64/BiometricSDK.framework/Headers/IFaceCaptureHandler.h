//
//  IFaceCaptureHandler.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 01/03/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//


#import <BiometricSDK/FaceCaptureHandlerDelegate.h>
#import <BiometricSDK/FaceCaptureOptions.h>
#import <BiometricSDK/BIOCaptureHandlerError.h>
#import <BiometricSDK/IBIOGenericCaptureHandler.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  @brief A BCBioCaptureHandler is class that prowides all mechanism to handle capturing bio informations Face/Iris/Fingerprints.
 *
 * After init object first you should set preview and delegate properties, and run captureWithOptions:withCompletionHandler: to setup capturing.
 *
 * All operations are calle in separated thread.
 *
 * Next start preview and capture. Methods start and stop capture or preview must be run in main thread.
 *
 */
@protocol FaceCaptureHandler <BIOGenericCaptureHandler>

/**
 *  Delegation object that will receive information from BCBioCaptureHandler about state of capturing.
 *  It must implement BCBioCaptureHandlerDelegate protocol.
 */
@property (nonatomic, weak, nullable) id<FaceCaptureHandlerDelegate> delegate;


/**
 * Returns the number of capture attempts left based on the `maxCapturesBeforeDelay` provided on the options
 */
@property (nonatomic, readonly) NSInteger captureAttemptsLeft;

/**
 * Returns the number of seconds to unlock the capture or 0 if capture is not locked.
 */
@property (nonatomic, readonly) NSInteger timeToUnlock;

/**
 Sets seed parameter.
 
 @param challengeSeed Challenge seed.
 @return nil if seed set successfully or NSError if problem occured.
 */
- (NSError * _Nullable)setChallengeSeed:(int32_t)challengeSeed;;

@end

NS_ASSUME_NONNULL_END
