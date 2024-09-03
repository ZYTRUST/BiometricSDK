//
//  FingerCaptureLivenessType.h
//  BiometricSDK
//
//  Created by Leszek on 24/07/2019.
//  Copyright © 2019 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Specifies liveness level for finger capture.
 */
typedef NS_ENUM(NSUInteger, FingerCaptureLivenessType) {
    FingerCaptureLivenessTypeNoLiveness,
    FingerCaptureLivenessTypeVeryLow,
    FingerCaptureLivenessTypeLow,
    FingerCaptureLivenessTypeMedium,
};

NSString * NSStringFromFingerCaptureLivenessType(FingerCaptureLivenessType fingerCaptureLivenessType);

NS_ASSUME_NONNULL_END
