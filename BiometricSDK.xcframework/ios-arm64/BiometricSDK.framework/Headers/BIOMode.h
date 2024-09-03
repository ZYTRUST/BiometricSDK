//
//  BIOMode.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 23/05/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOCamera.h>
#import <BiometricSDK/BIOTorch.h>
#import <BiometricSDK/BIOOverlay.h>
#import <BiometricSDK/BIOLogLevel.h>
#import <BiometricSDK/BIOColorSpace.h>
#import <BiometricSDK/BIOOrientation.h>
#import <BiometricSDK/BIOCaptureLogSettings.h>
#import <BiometricSDK/BIOPreviewColorspace.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Object that contains basic settings for Handler
 */
@interface BIOMode : BIOCaptureLogSettings

- (instancetype)initWithCamera:(BIOCamera)camera
                    witchTorch:(BIOTorch)torch
                   withOverlay:(BIOOverlay)overlay
                   withTimeout:(NSTimeInterval)timeout;

/**
 *  Option that determine which of camera will be used front or rear
 */
@property (nonatomic, assign) BIOCamera camera;

/**
 *  Option that determine if camera flash light will be on or off
 *  NOTE: Flash light works only when rear camera is selected.
 */
@property (nonatomic, assign) BIOTorch torch;

/**
 *  Option that control if overlay is tourn off or on.
 */
@property (nonatomic, assign) BIOOverlay overlay;

/**
 *  Set timeotu awfter wchih capturing will stop and throw timeout error.
 */
@property (nonatomic, assign) NSTimeInterval captureTimeout;

/**
 *  Set level of logs printed on console during dubiging.
 */
@property (nonatomic, assign) BIOLogLevel logLevel;

/**
 * Determine in which orentation information will be captured
 */
@property (nonatomic, assign) BIOOrientation orientation;

/**
 *  @author Morpho
 *
 *  @brief Property that sets colorspace
 */
@property (nonatomic, assign) BIOPreviewColorspace previewColorspace;

/**
 * Load capture options configuration from given file
 */
+ (NSDictionary* _Nullable)JSONFromFile:(NSString*)configurationFileName withError: (NSError * _Nullable __autoreleasing *)error;

@end

NS_ASSUME_NONNULL_END
