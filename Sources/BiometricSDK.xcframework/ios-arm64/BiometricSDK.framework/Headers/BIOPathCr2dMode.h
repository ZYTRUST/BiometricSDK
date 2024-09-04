//
//  BIOPathCr2dMode.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 25/06/2018.
//  Copyright © 2018 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOCr2dMode.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * CR2D mode where there is more then one target.
 * The number of the targets is defined be targetsNumber parameter.
 */
@interface BIOPathCr2dMode : BIOCr2dMode

@property (readonly, nonatomic, assign) NSUInteger targetsNumber;

-(instancetype)initWithTargetsNumber:(NSUInteger)targetsNumber;

@end

NS_ASSUME_NONNULL_END
