//
//  UIImage+BIOImage.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 22/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BiometricSDK/BIOImage.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Extension to UIImage that that add functionality to convert BIOImage to UIImage
 */
@interface UIImage (BIOImage)

/**
 *  Method that convert given BIOImage to UIImage
 *
 *  @param bioImage bioimage that will be converted to UIImage
 *
 *  @return UIImage created from given BIOImage or nil if conversion was not possibile
 */
+ (UIImage * _Nullable)imageFromBIOImage:(BIOImage *)bioImage;

@end

NS_ASSUME_NONNULL_END
