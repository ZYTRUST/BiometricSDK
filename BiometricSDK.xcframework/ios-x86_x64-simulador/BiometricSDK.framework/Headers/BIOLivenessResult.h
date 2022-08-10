//
//  BIOLivenessResult.h
//  BiometricSDK
//
//  Created by Leszek on 24/07/2019.
//  Copyright © 2019 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOLivenessResultStatus.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Liveness result with score.
 */
@interface BIOLivenessResult : NSObject

/**
 * Liveness check status.
 */
@property (nonatomic, assign) BIOLivenessResultStatus status;

/**
 * Liveness check score.
 */
@property (nonatomic, assign) double score __deprecated_msg("As of release 4.31.0. Will be removed in 4.34.0");;

@end

NS_ASSUME_NONNULL_END
