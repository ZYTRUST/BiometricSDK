//
//  BIOLivenessResultStatus.h
//  BiometricSDK
//
//  Created by Leszek on 29/07/2019.
//  Copyright © 2019 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Liveness result status.
 */
typedef NSInteger BIOLivenessResultStatus;

/**
 * Liveness passed successfully status.
 */
extern const BIOLivenessResultStatus BIOLivenessResultStatusLive;

/**
 * Liveness check result unspecified.
 */
extern const BIOLivenessResultStatus BIOLivenessResultStatusNoDecision;

/**
 * Liveness check failed.
 */
extern const BIOLivenessResultStatus BIOLivenessResultStatusFake;

NSString * NSStringFromBIOLivenessResultStatus(BIOLivenessResultStatus livenessResultStatus);

NS_ASSUME_NONNULL_END

