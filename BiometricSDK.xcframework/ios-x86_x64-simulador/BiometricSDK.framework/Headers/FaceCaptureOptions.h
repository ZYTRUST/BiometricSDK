//
//  BIOFaceCaptureOptions.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 15/03/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOMode.h>
#import <BiometricSDK/FaceCaptureLivenessMode.h>
#import <BiometricSDK/FaceLivenessSecurityLevel.h>
#import <BiometricSDK/BIOCr2dMode.h>
#import <BiometricSDK/BIOVideoRecordingOptions.h>

NS_ASSUME_NONNULL_BEGIN

@interface FaceCaptureOptions : BIOMode

- (instancetype)init NS_UNAVAILABLE;

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
 *  Creates FaceCaptureOptions instance based on configration from ConfigurationFile.json.
 *  @return Instance of object or nil if configuration file is incorrect.
 */
+ (instancetype _Nullable)createFromConfigurationFileWithError: (NSError**)error;

/**
 *  Creates FaceCaptureOptions instance based on configration from configuaration file with a given name.
 *  @param fileName Name of the selected configuration file.
 *  @return Instance of object or nil if configuration file is incorrect.
 */
+ (instancetype)createFromConfigurationFileWithName:(NSString *)fileName error:(NSError**)error;

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
 
 @brief Property that defines the maximum number of captures before locking the capture for a certain delay. (Default: 5). It can be set to -1 to disable locking based on repeated failed captures.
 */
@property (nonatomic, assign) NSInteger maxCapturesBeforeDelay;

/**
 @author    Morpho
 
 @brief Property that defines capture delays (in seconds) for each lock which occur after number of captures configured with maxCapturesBeforeDelay property. First lock after maxCapturesBeforeDelay will take as long as the number of seconds defined in the first element from timeCaptureDelayArray. Second lock after maxCapturesBeforeDelay will take as long as the number of seconds defined in the second element from timeCaptureDelayArray and so on. For all capture attempts after the array length, last element of the array is used. All values are in seconds. Default values: [1*60, 5*60, 15*60, 60*60]).
 */
@property (nonatomic, strong) NSArray<NSNumber *>* timeCaptureDelayArray;

/**
 * @author Morpho
 *
 * @brief Video recording options.
 */
@property (nonatomic, strong) BIOVideoRecordingOptions *videoRecordingOptions;

/**
 @author    Morpho
 
 @brief Property that defines the capture delay in milliseconds for each lock without multiplier.
 The calculation of the delay is calculated after. (Default: 1000)
 
 `timeDelay = numberOfLocks^2 * timeCaptureDelay * timeCaptureDelayMultiplier`
 */
@property (nonatomic, assign) double timeCaptureDelay __attribute__((__unavailable__("As of release 4.28.0, no longer for use. Replaced by 'timeCaptureDelayArray'")));

/**
 @author    Morpho
 
 @brief Property that defines the capture delay multiplier for each lock without multiplier.
 The calculation of the delay is calculated after. (Default: 4)
 
 `timeDelay = numberOfLocks^2 * timeCaptureDelay * timeCaptureDelayMultiplier`
 */
@property (nonatomic, assign) double timeCaptureDelayMultipler __attribute__((__unavailable__("As of release 4.28.0, no longer for use")));

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
