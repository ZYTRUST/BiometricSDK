//
//  BIOTemplate.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 15/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <BiometricSDK/BIOBiometrics.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  @author Morpho
 *
 *  @brief Object contains biometric information and pointer to owner of this template
 */
@interface BIOTemplate : BIOBiometrics

/**
 *  @author Morpho
 *
 *  @brief biometric binary data
 */
@property (nonatomic, strong) NSData *buffer;

/**
 *  @author Morpho
 *
 *  @brief UUID of template - used in comparision and in Database.
 */
@property (nonatomic, strong, nullable) NSString *uuid;

/**
 *  @author Morpho
 *
 *  @brief Owner UUID
 */
@property (nonatomic, strong, nullable) NSString *uuidUser;

@end

NS_ASSUME_NONNULL_END
