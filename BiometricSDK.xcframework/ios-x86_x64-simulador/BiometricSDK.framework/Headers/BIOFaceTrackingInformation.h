//
//  BIOFaceTrackingInformation.h
//  BiometricSDK
//
//  Created by IDEMIA on 09/03/2022.
//  Copyright © 2022 IDEMIA. All rights reserved.
//

#import <BiometricSDK/BIOEye.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOFaceTrackingInformation : NSObject

/**
 *  @brief Face's position and size.
 */
@property (nonatomic) CGRect faceBox;

/**
 *  @brief Left eye.
 */
@property (nonatomic, nullable) BIOEye *leftEye;

/**
 *  @brief Right eye.
 */
@property (nonatomic, nullable) BIOEye *rightEye;

/**
 *  @brief size that the points are related to.
 */
@property (nonatomic) CGSize relativeSize;

@end

NS_ASSUME_NONNULL_END
