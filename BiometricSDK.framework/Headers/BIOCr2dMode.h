//
//  BIOCr2dMode.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 29/05/2018.
//  Copyright © 2018 MORPHO. All rights reserved.
//

@class BIORandomCr2dMode;
@class BIOFixedTargetCr2dMode;
@class BIOPathCr2dMode;
@class BIOTrainingCr2dMode;

NS_ASSUME_NONNULL_BEGIN

/**
 * CR2D mode base class. All CR2D modes inherits from it. It should NOT be used independently.
 */
@interface BIOCr2dMode: NSObject

/**
 * CR2D mode where target is fully random
 */
+(BIORandomCr2dMode *)random;

/**
 * CR2D mode where target has defined position. The position values x and y are normalized to be independent from the screen dimensions.
 * Both are values between -1.0 through 0.0 to 1.0.
 *  [-1.0, -1.0] - top, left corner of the screen
 *  [ 0.0,  0.0] - center of the screen
 *  [ 1.0,  1.0] - bottom, right corner of the screen
 */
+(BIOFixedTargetCr2dMode *)fixedTargetWithPosition:(CGPoint)targetPosition;

/**
 * CR2D mode where there is more then one target.
 * The number of the targets is defined be targetsNumber parameter.
 */
+(BIOPathCr2dMode *)pathWithNumberOfTargets:(NSUInteger)targets;

/**
 * CR2D mode where starting point and target have defined positions. The positions values x and y are normalized to be independent from the screen dimensions.
 * Both are values between -1.0 through 0.0 to 1.0.
 *  [-1.0, -1.0] - top, left corner of the screen
 *  [ 0.0,  0.0] - center of the screen
 *  [ 1.0,  1.0] - bottom, right corner of the screen
 */
+(BIOTrainingCr2dMode *)trainingWithStartingPosition:(CGPoint)startingPosition andTargetWithPosition:(CGPoint)targetPosition;

@end

NS_ASSUME_NONNULL_END
