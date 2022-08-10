//
//  BIOFixedTargetCr2dMode.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 25/06/2018.
//  Copyright © 2018 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOCr2dMode.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * CR2D mode where target has defined position. The position values x and y are normalized to be independent from the screen dimensions.
 * Both are values between -1.0 through 0.0 to 1.0.
 *  [-1.0, -1.0] - top, left corner of the screen
 *  [ 0.0,  0.0] - center of the screen
 *  [ 1.0,  1.0] - bottom, right corner of the screen
 */
@interface BIOFixedTargetCr2dMode : BIOCr2dMode

@property (readonly, nonatomic, assign) CGPoint targetPosition;

-(instancetype)initWithTargetPosition:(CGPoint)targetPositio;

@end

NS_ASSUME_NONNULL_END
