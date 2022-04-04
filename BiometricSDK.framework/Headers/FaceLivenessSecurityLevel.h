//
//  FaceLivenessSecurityLevel.h
//  BiometricSDK
//
//  Created by Leszek Szary on 09/10/2019.
//  Copyright © 2019 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Determine in which security level FaceCaptureHandler will work
 */
typedef NS_ENUM(NSUInteger, FaceLivenessSecurityLevel) {
    FaceLivenessSecurityLevelLow __attribute__((deprecated("Deprecated, do not use"))),
    FaceLivenessSecurityLevelMedium __attribute__((deprecated("Deprecated, do not use"))),
    FaceLivenessSecurityLevelHigh, // Recommended for FaceCaptureLivenessModeHigh
    FaceLivenessSecurityLevelVeryHigh, // Recommended for FaceCaptureLivenessModeMedium
    FaceLivenessSecurityLevelVeryHigh2, // Recommended if higher security is needed
    FaceLivenessSecurityLevelVeryHigh3, // Recommended for FaceCaptureLivenessModePassive,
    FaceLivenessSecurityLevelVeryHigh4 __attribute__((deprecated("Deprecated, do not use"))),
    FaceLivenessSecurityLevelVeryHigh5 __attribute__((deprecated("Deprecated, do not use"))),
    FaceLivenessSecurityLevelVeryHigh6 __attribute__((deprecated("Deprecated, do not use"))),
    FaceLivenessSecurityLevelVeryHigh7 __attribute__((deprecated("Deprecated, do not use"))),
    FaceLivenessSecurityLevelVeryHigh8 __attribute__((deprecated("Deprecated, do not use")))
};

NSString * _Nonnull NSStringFromFaceLivenessSecurityLevel(FaceLivenessSecurityLevel securityLevel);
