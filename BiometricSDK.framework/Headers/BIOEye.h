//
//  BIOEye.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 29/06/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <BiometricSDK/BIOBiometrics.h>

/**
 *  Enums define position of eye left/right
 */
typedef NS_ENUM(NSInteger, BIOEyePosition) {
    /**
     *  Inform that eye is on right side of face.
     */
    BIOEyePositionRight,
    /**
     *  Inform that eye is on left side of face.
     */
    BIOEyePositionLeft,
};


NS_ASSUME_NONNULL_BEGIN

/**
 *  Object that contain information about position of eye.
 */
@interface BIOEye : BIOBiometrics

/**
 *  CGPoint position of eye on image.
 */
@property (nonatomic) CGPoint coordinates;

/**
 *  Property gives information of position eye on right or left side of face.
 */
@property (nonatomic) BIOEyePosition eyePosition;

@end

NS_ASSUME_NONNULL_END
