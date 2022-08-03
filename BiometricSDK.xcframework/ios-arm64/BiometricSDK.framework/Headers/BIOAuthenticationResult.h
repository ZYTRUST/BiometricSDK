//
//  BIOAuthenticationResult.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 28/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object that is uesd to return socre of authentication
 */
@interface BIOAuthenticationResult : NSObject

/**
 *  Score of authentication process.
 */
@property (nonatomic) long score;

/**
 *  True if the score is bigger than the threshold defined in BIOAuthenticationOptions.
 */
@property (nonatomic) BOOL matchesSuccessfully;

@end

NS_ASSUME_NONNULL_END
