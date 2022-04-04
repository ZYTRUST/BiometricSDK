//
//  BIOFaceCaptureOptions.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 15/03/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOMode.h>
#import <BiometricSDK/FaceCaptureMode.h>
#import <BiometricSDK/FaceCaptureLivenessMode.h>
#import <BiometricSDK/FaceLivenessSecurityLevel.h>
#import <BiometricSDK/BIOCr2dMode.h>

NS_ASSUME_NONNULL_BEGIN

@interface FaceCaptureOptions : BIOMode

- (instancetype)init NS_UNAVAILABLE;

/**
 *  Initialzer that create options for FaceCaptureMode
 *  This Initialzer set options: BIOCameraFront, BIOTorchOFF, BIOOverlayOFF
 *
 *  @param mode mode in which FaceCaptureHandler will work
 *
 *  @return Instance of FaceCaptureOptions
 */
- (instancetype _Nonnull)initWithMode:(FaceCaptureMode)mode __deprecated_msg("Use initWithLivenessMode: instead");


/**
 *  Initialzer that create options for face liveness
 *  This Initialzer set options: BIOCameraFront, BIOTorchOFF, BIOOverlayOFF
 *
 *  @param liveness liveness level in which FaceCaptureHandler will work
 *
 *  @return Instance of FaceCaptureOptions
 */
- (instancetype _Nonnull)initWithLivenessMode:(FaceCaptureLivenessMode)livenessMode;

/**
 * Initializer that allows to set all options.
 *
 * @param mode mode in which FaceCaptureHandler will work
 * @param camera sets camera front or rear
 * @param torch turn camera flashlight on or off
 * @param overlay turn show or hide overlay of biometrics on preview
 * @param timeout timeout for capturing in seconds
 *
 * @return Instance of FaceCaptureOptions
 */
- (instancetype _Nonnull)initWithMode:(FaceCaptureMode)mode
                           withCamera:(BIOCamera)camera
                           witchTorch:(BIOTorch)torch
                          withOverlay:(BIOOverlay)overlay
                          withTimeout:(NSTimeInterval)timeout __deprecated_msg("Use initWithLivenessMode:WithCamera:withTorch:withOverlay:withTimeout: instead");

/**
 * Initializer that allows to set all options.
 *
 * @param liveness liveness level in which FaceCaptureHandler will work
 * @param camera sets camera front or rear
 * @param torch turn camera flashlight on or off
 * @param overlay turn show or hide overlay of biometrics on preview
 * @param timeout timeout for capturing in seconds
 *
 * @return Instance of FaceCaptureOptions
 */
- (instancetype _Nonnull)initWithLivenessMode:(FaceCaptureLivenessMode)livenessMode
                                   withCamera:(BIOCamera)camera
                                   witchTorch:(BIOTorch)torch
                                  withOverlay:(BIOOverlay)overlay
                                  withTimeout:(NSTimeInterval)timeout;

/**
 *  Determines in what mode BIOCapture works e.g.: Livens detection high, Iris detection etc.
 */
@property (nonatomic, assign) FaceCaptureMode bioCaptureMode __deprecated_msg("Use livenessMode instead");

/**
 *  Determines in what liveness mode capture works.
 */
@property (nonatomic, assign) FaceCaptureLivenessMode livenessMode;

/**
 *  Determines in what security level capture works.
 */
@property (nonatomic, assign) FaceLivenessSecurityLevel securityLevel;

/**
 *  @author Morpho
 *
 *  @brief Property that sets the time interval delay between challenges
 */
@property (nonatomic, assign) NSTimeInterval challengeIntervalDelay;


/**
 @author    Morpho
 
 @brief Property that defines the maximum number of captures before locking the capture for a certain delay. (Default: 10)
 */
@property (nonatomic, assign) NSInteger maxCapturesBeforeDelay;


/**
 @author    Morpho
 
 @brief Property that defines if illumination is enabled. (Default: `NO`)
 */
@property (nonatomic, assign) BOOL illuminationEnabled __deprecated_msg("Illumination feature has been deprecated.");


/**
 @author    Morpho
 
 @brief Property that defines the capture delay in milliseconds for each lock without multiplier.
 The calculation of the delay is calculated after. (Default: 1000)
 
 `timeDelay = numberOfLocks^2 * timeCaptureDelay * timeCaptureDelayMultiplier`
 */
@property (nonatomic, assign) double timeCaptureDelay;


/**
 @author    Morpho
 
 @brief Property that defines the capture delay multiplier for each lock without multiplier.
 The calculation of the delay is calculated after. (Default: 4)
 
 `timeDelay = numberOfLocks^2 * timeCaptureDelay * timeCaptureDelayMultiplier`
 */
@property (nonatomic, assign) double timeCaptureDelayMultipler;


/**
 @author    Idemia
 
 @brief Property that defines the CR2D mode. The default is BIORandomCr2dMode. 
 */
@property (nonatomic, strong, nullable) BIOCr2dMode *cr2dMode;


/**
 @author    Idemia
 
 @brief Property that defines the challenge seed which can be set before start.
 */
@property (nonatomic, strong, nullable) NSNumber *challengeSeed;

@end

NS_ASSUME_NONNULL_END
