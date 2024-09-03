//
//  BIOAuthenticationOptions.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 06/02/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOMatchingOptions.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object use to configure BIOMatcherHandler during authentication process
 */
@interface BIOAuthenticationOptions : BIOMatchingOptions

/**
 *  The authentication threshold to be considered valid (default value: 3500)
 */
@property (nonatomic, assign) int threshold;

@end

NS_ASSUME_NONNULL_END
