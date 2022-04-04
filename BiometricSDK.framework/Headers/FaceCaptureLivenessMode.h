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
    FaceCaptureLivenessModeMedium,
    /**
     * Sets FaceCaptureHandler to perform passive liveness challenge.
     */
    FaceCaptureLivenessModePassive,
    /**
     * Sets FaceCaptureHandler to not perform any liveness check (only track face and get image)
     */
    FaceCaptureLivenessModeNoLiveness,
};

NSString * _Nonnull NSStringFromFaceCaptureLivenessMode(FaceCaptureLivenessMode livenessMode);
