//
//  BIOImage+ImageGetters.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 22/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <BiometricSDK/BIOImage.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOImage (ImageGetters)

/**
 *  Method convert UIImage to BIOImage
 *
 *  @param image UIImage to convert to BIOImage. NOTE: Method does not check if on image is readable face.
 *
 *  @return BIOImage crated from given UIImage
 */

+ (BIOImage *)BIOImageFromUIImage:(UIImage *)image;

/**
 *  Method to convert a BIOImage to another BIOImage with different color space
 *
 *  @param colorSpace   color space wanted for the new BIOImage
 *
 *  @return BIOImage with the color space provided
 */
- (BIOImage *)BIOImageWithColorSpace:(BIOColorSpace)colorSpace;

@end

NS_ASSUME_NONNULL_END
