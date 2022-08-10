//
//  FingerprintCaptureMode.m
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 15/03/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, FingerCaptureMode) {
    /**
     *   Sets FingerCaptureHandler to detect fingers
     */
    FingerCaptureModeFourFingers __attribute__((__deprecated__("As of release 4.30.0, replaced by 'FingerCaptureModeFingers'. Will be removed in 4.31.0"))),

    /**
     *   Sets FingerCaptureHandler to detect a thumb
     */
    FingerCaptureModeOneFinger __attribute__((__deprecated__("As of release 4.30.0, replaced by 'FingerCaptureModeThumb'. Will be removed in 4.31.0"))),
    /**
     *   Sets FingerCaptureHandler to detect fingers
     */
    FingerCaptureModeFingers,
    
    /**
     *   Sets FingerCaptureHandler to detect a thumb
     */
    FingerCaptureModeThumb,

    /**
     *   Sets FingerCaptureHandler to detect fingers and authenticate them
     */
    FingerCaptureModeAuthentication
    
};

NSString * NSStringFromFingerCaptureMode(FingerCaptureMode fingerCaptureMode);

NS_ASSUME_NONNULL_END
