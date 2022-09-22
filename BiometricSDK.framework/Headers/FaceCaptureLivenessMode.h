//
//  FaceCaptureLivenessMode.h
//  BiometricSDK
//
//  Created by Marek Swiecznik on 26/06/2019.
//  Copyright © 2019 MORPHO. All rights reserved.
//

/**
 * Determine in which level of liveness FaceCaptureHandler will work
 */
typedef NS_ENUM(NSUInteger, FaceCaptureLivenessMode) {
    /**
     * Sets FaceCaptureHandler to perform high liveness challenge (CR2D, join the points with head)
     */
    FaceCaptureLivenessModeHigh,
    /**
     * Sets FaceCaptureHandler to perform medium liveness challenge (SLAM, head movement in any direction)
     */
    FaceCaptureLivenessModeMedium __attribute__((deprecated("Mode deprecated, will be removed in 4.35.0"))),
    /**
     * Sets FaceCaptureHandler to perform passive liveness check.
     */
    FaceCaptureLivenessModePassive,
    /**
     * Sets FaceCaptureHandler to perform passive video liveness check.
     */
    FaceCaptureLivenessModePassiveVideo,
    /**
     * Sets FaceCaptureHandler to not perform any liveness check (only track face and get image)
     */
    FaceCaptureLivenessModeNoLiveness,
};

NSString * _Nonnull NSStringFromFaceCaptureLivenessMode(FaceCaptureLivenessMode livenessMode);
