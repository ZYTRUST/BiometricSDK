//
//  BIOMatchingCandidate.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 03/05/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  @author Morpho
 *
 *  @brief Object contain information about potential candiate of matching process
 */
@interface BIOMatchingCandidate : NSObject

/**
 *  @author Morpho
 *
 *  @brief UUID of user used for matching
 */
@property (nonatomic,strong) NSString *UUID;

/**
 *  @author Morpho
 *
 *  @brief Score of matching process range 
 */
@property (nonatomic) long score;

@end

NS_ASSUME_NONNULL_END
