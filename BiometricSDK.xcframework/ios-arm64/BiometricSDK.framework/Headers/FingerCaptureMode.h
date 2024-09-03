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
