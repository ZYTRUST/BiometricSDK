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
 * The modes have different APCER (Attack Presentation Classification Error Rate) values
 *
 * *APCER* - Proportion of presentations using the same PAI (Presentation Attack Instrument) species incorrectly classified as bona fide presentations in a specific scenario. That is the equivalent of False Acceptance. The lower the better.
 */
typedef NS_ENUM(NSUInteger, FaceLivenessSecurityLevel) {
    /// APCER ~6%
    FaceLivenessSecurityLevelLow,
    /// APCER ~3%
    FaceLivenessSecurityLevelMedium,
    /// APCER ~1%
    FaceLivenessSecurityLevelHigh,
    FaceLivenessSecurityLevelVeryHigh __attribute__((deprecated("As of release 4.32.0. Will be removed in 4.35.0"))),
    FaceLivenessSecurityLevelVeryHigh2 __attribute__((deprecated("As of release 4.32.0. Will be removed in 4.35.0"))),
    FaceLivenessSecurityLevelVeryHigh3 __attribute__((deprecated("As of release 4.32.0. Will be removed in 4.35.0"))),
    FaceLivenessSecurityLevelVeryHigh4 __attribute__((deprecated("As of release 4.32.0. Will be removed in 4.35.0"))),
    FaceLivenessSecurityLevelVeryHigh5 __attribute__((deprecated("As of release 4.32.0. Will be removed in 4.35.0"))),
    FaceLivenessSecurityLevelVeryHigh6 __attribute__((deprecated("As of release 4.32.0. Will be removed in 4.35.0"))),
    FaceLivenessSecurityLevelVeryHigh7 __attribute__((deprecated("As of release 4.32.0. Will be removed in 4.35.0"))),
    FaceLivenessSecurityLevelVeryHigh8 __attribute__((deprecated("As of release 4.32.0. Will be removed in 4.35.0")))
};

NSString * _Nonnull NSStringFromFaceLivenessSecurityLevel(FaceLivenessSecurityLevel securityLevel);
