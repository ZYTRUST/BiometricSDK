//
//  BIOUser.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 06/05/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOBiometrics.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  @author Morpho
 *
 *  @brief Object hold inforation about of owner of templates
 */
@interface BIOUser: NSObject

/**
 *  @author Morpho
 *
 *  @brief Name of user.
 */
@property (nonatomic, strong, nullable) NSString *name;

/**
 *  @author Morpho
 *
 *  @brief UUID of user - this property is used to pair user with template
 */
@property (nonatomic, strong, nullable) NSString *uuid;

@end

NS_ASSUME_NONNULL_END
