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

@end

NS_ASSUME_NONNULL_END
