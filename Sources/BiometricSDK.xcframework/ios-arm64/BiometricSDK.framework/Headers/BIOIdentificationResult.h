//
//  BIOIdentificationResult.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 28/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOMatchingCandidate.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object used to return result of indentifiaction process
 */
@interface BIOIdentificationResult : NSObject

/**
 *  NSArray that contains candidates 
 */
@property (nonatomic, strong) NSArray<BIOMatchingCandidate*> *candidates;

@end

NS_ASSUME_NONNULL_END
