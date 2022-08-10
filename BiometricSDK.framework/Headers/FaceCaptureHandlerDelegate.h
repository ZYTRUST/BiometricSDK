//
//  BIOFaceCaptureHandlerDelegate.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 06/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <BiometricSDK/BIOFaceImage.h>
#import <BiometricSDK/BIOTrackingInfo.h>
#import <BiometricSDK/BIOCapturingError.h>
#import <BiometricSDK/BIOCapturingInfo.h>
#import <BiometricSDK/BIOReplayProtocol.h>
#import <BiometricSDK/BIOChallengeInfo.h>
#import <BiometricSDK/BIOCr2DChallengeInfo.h>
#import <BiometricSDK/BIOCr2DTargetInfo.h>
#import <BiometricSDK/BIOVideoRecordingProtocol.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Delegation object of BIOFaceCaptureHandler needs to implement BIOFaceCaptureHandlerDelegate protocol.
 * It will inform delegate object about capture process, message for user, and bio information tracking information.
 * All methods in this protocol are optional.
 */
@protocol FaceCaptureHandlerDelegate <BIOReplayProtocol, BIOVideoRecordingProtocol>

@optional

/**
 * Method that is triggered when BIOFaceCaptureHandler find biometric data face and finish handle with data.
 *
 * @warning Capturing will stop before calling this method.
 *
 * @param images array of images that FaceCaptureHandler find in image from camera.
 * @param biometrics object that describe what biometrics data was captured e.g. left iris.
 * @param error error that inform if something was wrong with captured image.
 */
- (void)captureFinishedWithImages:(NSArray<BIOFaceImage *> * _Nullable)images withBiometrics:(BIOBiometrics * _Nullable)biometrics withError:(NSError * _Nullable)error;


/**
 * Method that is triggered when BIOFaceCaptureHandler receive any info for user for user e.g. to back to camera field.
 *
 * @param info Parameter that describe action from user that needs to be done to finish capturing.
 * @param challengeInfo information about the challenges (current challenge number and total number of challenges).
 * @param error error if something was wrong otherwise nil.
 */
- (void)receiveBioCaptureInfo:(BIOCapturingInfo)info withChallengeInfo:(BIOChallengeInfo * _Nullable)challengeInfo withError:(NSError * _Nullable)error __attribute__((__deprecated__("As of release 4.28.0, no longer for use. Will be removed in 4.31.0.")));

/**
 * Method that is triggered when BIOFaceCaptureHandler receive any info for user for user e.g. to back to camera field.
 *
 * @param info Parameter that describe action from user that needs to be done to finish capturing.
 * @param error error if something was wrong otherwise nil.
 */
- (void)receiveBioCaptureInfo:(BIOCapturingInfo)info withError:(NSError * _Nullable)error;

/**
 * Method that notifies when the face is detected on the preview and returns face tracking information like:
 * - preview size (reference size)
 * - eyes' position
 * - the face's position and size
 *
 * @param faceTrackingInfo face tracking information
 */
- (void)receiveFaceTrackingInfo:(BIOFaceTrackingInformation *)faceTrackingInfo;

/**
 * Method that is triggered when BIOFaceCaptureHandler receive any info about current position of CR2D challenge.
 *
 * @param info Parameter that describe when challenge target and current are, and if they are at all visible.
 * @param error error if something was wrong otherwise nil.
 */
- (void)receiveCr2DChallengeInfo:(BIOCr2DChallengeInfo * _Nullable)challengeInfo withError:(NSError * _Nullable)error;

/**
 * Method that is triggered when BIOFaceCaptureHandler receive any info update about a target for CR2D challenge.
 *
 * @param target challenge target info.
 * @param index target number, starts with 0.
 * @param numberOfTargets total number of targets for a challenge.
 * @param error error if something was wrong otherwise nil.
 */
- (void)receiveCr2DTargetInfo:(BIOCr2DTargetInfo * _Nullable)target atIndex:(NSUInteger)index outOf:(NSUInteger)numberOfTargets withError:(NSError * _Nullable)error;

/**
 * Method that notifies when the capture is locked and for how many secnods
 *
 * @param seconds number of seconds remaining until capture is unlocked
 */
- (void)captureIsLockedFor:(NSInteger)seconds __attribute__((__unavailable__("As of release 4.28.0, no longer for use")));

@end

NS_ASSUME_NONNULL_END
