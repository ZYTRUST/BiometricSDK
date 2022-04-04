//
//  BIOCaptureMode.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 04/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 *
 *  Determine in what mode FaceCaptureMode will work
 */
__deprecated_msg("Use FaceCaptureLivenessMode instead.")
typedef NS_ENUM(NSUInteger,FaceCaptureMode){
    /**
     *   Sets FaceCaptureHandler to very low challenge of liveness
     */
    FaceCaptureModeChallengeVeryLow __deprecated_msg("The mode is no longer under development. Use FaceCaptureLivenessModeHigh instead."),
    /**
     *   Sets FaceCaptureHandler to low challenge of liveness
     */
    FaceCaptureModeChallengeLow __deprecated_msg("The mode is no longer under development. Use FaceCaptureLivenessModeHigh instead."),
    /**
     *   Sets FaceCaptureHandler to medium challenge of liveness
     */
    FaceCaptureModeChallengeMedium __deprecated_msg("The mode is no longer under development. Use FaceCaptureLivenessModeHigh instead."),
    /**
     *   Sets FaceCaptureHandler to high challenge of liveness
     */
    FaceCaptureModeChallengeHigh __deprecated_msg("The mode is no longer under development. Use FaceCaptureLivenessModeHigh instead."),
    /**
     *   Sets FaceCaptureHandler to very high challenge of liveness
     */
    FaceCaptureModeChallengeVeryHigh __deprecated_msg("The mode is no longer under development. Use FaceCaptureLivenessModeHigh instead."),
    /**
     *   Sets FaceCaptureHandler to low CR2D challenge of liveness
     */
    FaceCaptureModeChallengeCr2dLow __deprecated_msg("Use FaceCaptureLivenessModeHigh instead."),
    /**
     *   Sets FaceCaptureHandler to medium CR2D challenge of liveness
     */
    FaceCaptureModeChallengeCr2dMedium __deprecated_msg("Use FaceCaptureLivenessModeHigh instead."),
    /**
     *   Sets FaceCaptureHandler to high CR2D challenge of liveness
     */
    FaceCaptureModeChallengeCr2dHigh __deprecated_msg("Use FaceCaptureLivenessModeHigh instead."),
    /**
     *   Sets FaceCaptureHandler to low level liveness detection
     */
    FaceCaptureModeLivenessLow __deprecated_msg("Use FaceCaptureLivenessModeMedium instead."),
    
    /**
     *   Sets FaceCaptureHandler to medium level liveness detection
     */
    FaceCaptureModeLivenessMedium __deprecated_msg("Use FaceCaptureLivenessModeMedium instead."),
    
    /**
     *   Sets FaceCaptureHandler to high level liveness detection
     */
    FaceCaptureModeLivenessHigh __deprecated_msg("Use FaceCaptureLivenessModeMedium instead."),
    
    /**
     *   Sets FaceCaptureHandler to high level passive liveness detection
     */
    FaceCaptureModePassiveLivenessLow __deprecated_msg("Use FaceCaptureLivenessModePassive instead."),
    
    /**
     *   Sets FaceCaptureHandler to high level passive liveness detection
     */
    FaceCaptureModePassiveLivenessMedium __deprecated_msg("Use FaceCaptureLivenessModePassive instead."),
    
    /**
     *   Sets FaceCaptureHandler to high level passive liveness detection
     */
    FaceCaptureModePassiveLivenessHigh __deprecated_msg("Use FaceCaptureLivenessModePassive instead."),
    
    /**
     *   Sets FaceCaptureHandler to track face and get image
     */
    FaceCaptureModeTrackDefault __deprecated_msg("Use FaceCaptureLivenessModeNoLiveness instead."),
} ;

NSString * NSStringFromFaceCaptureMode(FaceCaptureMode faceCaptureMode) __deprecated;

NS_ASSUME_NONNULL_END
