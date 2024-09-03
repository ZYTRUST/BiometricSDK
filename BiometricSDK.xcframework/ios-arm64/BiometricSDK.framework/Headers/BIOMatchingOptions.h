//
//  BIOMatchingOptions.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 05/05/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOModality.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Object used to configure BIOMatherHandler
 */
@interface BIOMatchingOptions : NSObject


/**
 *  Designated initalizer that set modality of
 *
 *  @param modality Determinate what kind of biometrics will be processing.
 *
 *  @return Instance of BIOMatchingOptions with modality already set
 */
- (instancetype)initWithModality:(BIOModality)modality;

/**
 *  Property that determine which biometrics will be analyse 
 */
@property (nonatomic, assign) BIOModality modality;

@end

NS_ASSUME_NONNULL_END
