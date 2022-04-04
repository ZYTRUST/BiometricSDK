//
//  BIOCapturingError.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 06/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const BIOCapturingErrorDomain;

/**
 *  Enum that contains error codes that can ofure during capture
 */
typedef NS_ENUM(NSInteger, BIOCapturingError) {
    /**
     * There was unknown problem ocurr
     */
    BIOCapturingErrorUnknown,
//    /**
//     * Set when resolution of picture is to small
//     */
//    BIOCapturingErrorLowResolution,
//    /**
//     * Not enough e.g. head movement to determine liveness
//     */
//    BIOCapturingErrorNotEnoughMovement,
//    /**
//     * Move that was used to determine liveness was to fast
//     */
//    BIOCapturingErrorTooFast,
    /**
     * Timeout reached
     */
    BIOCapturingErrorCaptureTimeout,
    /**
     * Captured image with not alive person, posible of atack
     */
    BIOCapturingErrorNotAlive,
    /**
     * Captured biometrics comes from wrong location for e.g. during looking for face finge prints were scanned
     */
    BIOCapturingErrorWrongBiometricLocation,
    /**
     * Could not receive BIOImage buffer
     */
    BIOCapturingErrorImageBuffer,
    /**
     * Bad capture of fingers
     */
    BIOCapturingErrorBadCaptureFingers,
    /**
     * Bad capture of hand
     */
    BIOCapturingErrorBadCaptureHand,
    /**
     * Capture is locked
     */
    BIOCapturingErrorCaptureLocked
};


NSString * NSStringFromBIOCapturingError(BIOCapturingError error);
NSString * NSStringErrorNameFromBIOCapturingError(BIOCapturingError error);

NS_ASSUME_NONNULL_END
