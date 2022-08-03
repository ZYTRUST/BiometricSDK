//
//  RemoteFaceCaptureHandlerDelegate.h
//  BiometricSDK
//
//  Created by Leszek Szary on 30/04/2021.
//  Copyright © 2021 MORPHO. All rights reserved.
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
#import <BiometricSDK/BIOPassiveVideoProtocol.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Delegation object of capture handler needs to implement this protocol.
 * It will inform delegate object about capture process, messages for user, and tracking information.
 * All methods in this protocol are optional.
 */
@protocol RemoteFaceCaptureHandlerDelegate <BIOReplayProtocol, BIOVideoRecordingProtocol, BIOPassiveVideoProtocol>

@optional

/**
 * Method that is triggered when capture is finished and face metadata is available.
 *
 * @param metadata Object with metadata that can be used for liveness verification on the server.
 */
- (void)captureFinishedWithMetadata:(BIOFaceMetadata *)metadata __attribute__((__deprecated__("As of release 4.29.0, no longer for use. Will be removed in 4.31.0. Use 'captureFinishedWithEncryptedMetadata' instead")));

/**
 * Method that is triggered when capture is finished and face metadata is available.
 *
 * @param metadata Object with encrypted metadata that can be used for liveness verification on the server.
 */
- (void)captureFinishedWithEncryptedMetadata:(BIOEncryptedData *)encryptedMetadata;

/**
 * Method that is triggered when information about the capture is available.
 *
 * @param info Parameter that describe action from user that needs to be done to finish capturing.
 * @param challengeInfo information about the challenges (current challenge number and total number of challenges).
 * @param error error if something was wrong otherwise nil.
 */
- (void)receiveBioCaptureInfo:(BIOCapturingInfo)info withChallengeInfo:(BIOChallengeInfo * _Nullable)challengeInfo withError:(NSError * _Nullable)error __attribute__((__deprecated__("As of release 4.28.0, no longer for use. Will be removed in 4.31.0.")));

/**
 * Method that is triggered when information about the capture is available.
 *
 * @param info Parameter that describe action from user that needs to be done to finish capturing.
 * @param error error if something was wrong otherwise nil.
 */
- (void)receiveBioCaptureInfo:(BIOCapturingInfo)info withError:(NSError * _Nullable)error;

/**
 * Method that is triggered when information about current position of CR2D challenge is avaialble.
 *
 * @param info Parameter that describe when challenge targets are, and if they are visible.
 * @param error error if something was wrong otherwise nil.
 */
- (void)receiveCr2DChallengeInfo:(BIOCr2DChallengeInfo * _Nullable)challengeInfo withError:(NSError * _Nullable)error;

/**
 * Method that is triggered when information about a target in CR2D challenge is available.
 *
 * @param target challenge target info.
 * @param index target number, starts with 0.
 * @param numberOfTargets total number of targets for a challenge.
 * @param error error if something was wrong otherwise nil.
 */
- (void)receiveCr2DTargetInfo:(BIOCr2DTargetInfo * _Nullable)target atIndex:(NSUInteger)index outOf:(NSUInteger)numberOfTargets withError:(NSError * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
