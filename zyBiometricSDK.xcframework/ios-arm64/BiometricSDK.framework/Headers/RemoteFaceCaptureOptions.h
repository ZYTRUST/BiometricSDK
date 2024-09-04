//
//  RemoteFaceCaptureOptions.h
//  BiometricSDK
//
//  Created by Leszek Szary on 30/04/2021.
//  Copyright © 2021 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOMode.h>
#import <BiometricSDK/FaceCaptureLivenessMode.h>
#import <BiometricSDK/FaceLivenessSecurityLevel.h>
#import <BiometricSDK/BIOCr2dMode.h>
#import <BiometricSDK/BIOVideoRecordingOptions.h>
#import <BiometricSDK/BIOServerCertificates.h>

NS_ASSUME_NONNULL_BEGIN

@interface RemoteFaceCaptureOptions : BIOMode

- (instancetype)init NS_UNAVAILABLE;

/**
 *  Initializer that creates options for face liveness
 *  This Initializer allows to set liveness mode.
 *
 *  @param liveness liveness level in which RemoteFaceCaptureHandler will work
 *
 *  @return Instance of RemoteFaceCaptureOptions
 */
- (instancetype _Nonnull)initWithLivenessMode:(FaceCaptureLivenessMode)livenessMode;

/**
 *  Initializer that creates options for face liveness
 *  This Initializer allows to set options: liveness mode and server certificates.
 *
 *  @param liveness liveness level in which RemoteFaceCaptureHandler will work
 *  @param certificates certificates from Web Bio Server
 *
 *  @return Instance of RemoteFaceCaptureOptions
 */
- (instancetype _Nonnull)initWithLivenessMode:(FaceCaptureLivenessMode)livenessMode serverCertificates:(BIOServerCertificates *)certificates;

/**
 * Initializer that allows to set other options.
 *
 * @param liveness liveness level in which RemoteFaceCaptureHandler will work
 * @param certificates certificates from Web Bio Server
 * @param camera sets camera front or rear
 * @param torch turn camera flashlight on or off
 * @param overlay turn show or hide overlay of biometrics on preview
 * @param timeout timeout for capturing in seconds
 *
 * @return Instance of RemoteFaceCaptureOptions
 */
- (instancetype _Nonnull)initWithLivenessMode:(FaceCaptureLivenessMode)livenessMode
                           serverCertificates:(BIOServerCertificates *)certificates
                                   withCamera:(BIOCamera)camera
                                   witchTorch:(BIOTorch)torch
                                  withOverlay:(BIOOverlay)overlay
                                  withTimeout:(NSTimeInterval)timeout;

/**
 *  Determines in what liveness mode capture works.
 */
@property (nonatomic, assign) FaceCaptureLivenessMode livenessMode;

/**
 *  Determines in what security level capture works.
 */
@property (nonatomic, assign) FaceLivenessSecurityLevel securityLevel;

/**
 *  Property that sets the time interval delay between challenges
 */
@property (nonatomic, assign) NSTimeInterval challengeIntervalDelay;

/**
 *  Video recording options.
 */
@property (nonatomic, strong) BIOVideoRecordingOptions *videoRecordingOptions;

/**
 *  Property that defines the CR2D mode. The default is BIORandomCr2dMode.
 */
@property (nonatomic, strong, nullable) BIOCr2dMode *cr2dMode;

/**
 *  Property that defines the challenge seed which can be set before start.
 */
@property (nonatomic, strong, nullable) NSNumber *challengeSeed;

/**
 *  Property that stores certificates from Web Bio Server.
 */
@property (nonatomic, strong, readonly) BIOServerCertificates *certificates;

@end

NS_ASSUME_NONNULL_END
