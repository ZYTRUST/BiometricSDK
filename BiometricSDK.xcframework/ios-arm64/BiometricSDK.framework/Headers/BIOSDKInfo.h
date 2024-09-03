//
//  BIOSDKInfo.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 18/07/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object that contains infromation about BiometricSDK
 */
@interface BIOSDKInfo : NSObject

/**
 *  String with BiometricSDK version number
 */
@property (nonatomic, readonly) NSString  *version;

/**
 *  String with BiometricSDK build number
 */
@property (nonatomic, readonly) NSString  *build;

@end

NS_ASSUME_NONNULL_END
