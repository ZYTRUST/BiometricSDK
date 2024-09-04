//
//  BIOImage+FaceCropping.h
//  BiometricSDK
//
//  Created by IDEMIA on 09/03/2022.
//  Copyright © 2022 IDEMIA. All rights reserved.
//

#import <BiometricSDK/BIOImage.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOImage (Cropping)

/// Crops the image to the rect defined by `CGRect`
- (instancetype _Nullable)cropToRect:(CGRect)rect;

/// Crops the image to the region limited to points where point1 is top left and the next are in clockwise order
- (instancetype _Nullable)cropToRegionWithPoint1:(CGPoint)point1 point2:(CGPoint)point2 point3: (CGPoint)point3 point4:(CGPoint)point4;

/// Crops the image to the rect defined by `CGRect`
- (instancetype _Nullable)cropToRect:(CGRect)rect withMargin:(CGFloat)margin;;

/// Crops the image to the region limited to points where point1 is top left and the next are in clockwise order
- (instancetype _Nullable)cropToRegionWithPoint1:(CGPoint)point1 point2:(CGPoint)point2 point3: (CGPoint)point3 point4:(CGPoint)point4 withMargin:(CGFloat)margin;

@end

NS_ASSUME_NONNULL_END
