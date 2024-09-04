//
//  BIOFingerCaptureInfo.h
//  BiometricSDK
//
//  Created by KWIATKOWSKI Kamil on 06/11/2019.
//  Copyright © 2019 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOLivenessResult.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOFingerCaptureInfo : NSObject

/**
 * Property contains finger liveness check result.
 * It's only available when `FingerCaptureOptions.livenessType` is set.
 */
@property (nonatomic, nullable) BIOLivenessResult *liveness;

@property (nonatomic) NSUInteger score __deprecated_msg("Changed name to qualityScore");

/**
 * Property is available only when `FingerCaptureOptions.maxNumberOfCaptures` is set to 2 or higher value
 * Expected value is higher then `FingerCaptureOptions.threshold`
 */
@property (nonatomic, nullable) NSNumber *qualityScore;

@end

NS_ASSUME_NONNULL_END
