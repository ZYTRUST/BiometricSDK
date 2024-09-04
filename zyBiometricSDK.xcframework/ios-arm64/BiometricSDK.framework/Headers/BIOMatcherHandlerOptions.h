//
//  BIOMatherHandlerOptions.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 19/07/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOLogLevel.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  @author Morpho
 *
 *  Object used to configure matcher
 */
@interface BIOMatcherHandlerOptions : NSObject


/**
 *  @author Morpho
 *
 *  @brief Flag used to configur log level
 */
@property (nonatomic, assign) BIOLogLevel logLevel;

@end

NS_ASSUME_NONNULL_END
