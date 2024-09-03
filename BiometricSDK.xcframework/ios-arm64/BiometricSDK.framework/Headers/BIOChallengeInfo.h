//
//  BIOChallengeInfo.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 03/02/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOChallengeInfo : NSObject

@property (nonatomic, readonly) NSInteger currentChallengeNumber;
@property (nonatomic, readonly) NSInteger totalChallenges;

- (instancetype)initWithCurrentChallengeNumber:(NSInteger)currentChallengeNumber forTotal:(NSInteger)totalChallenges;

@end

NS_ASSUME_NONNULL_END
