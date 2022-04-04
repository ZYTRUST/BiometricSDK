//
//  BIOImage+BIOResize.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 23/12/2016.
//  Copyright © 2016 MORPHO. All rights reserved.
//

#import <BiometricSDK/BiometricSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOImage (BIOResize)

// Deprecations on this class were done on 4.5.0

- (NSData*)compressImageWithQuality:(uint32_t)quality __deprecated_msg("Use `dataByCompressingImageWithQuality:` instead");
- (NSData*)compressImageToSizeInKilobytes:(CGFloat)sizeInKilobytes __deprecated_msg("Use `dataByCompressingImageToSizeInKilobytes:` instead");
- (BIOImage *)compressImageToWSQRatio:(CGFloat)ratio withScannerBlack:(Byte)scannerBlack andScannerWhite:(Byte)scannerWhite __deprecated_msg("Use `imageByCompressingImageToWSQRatio:withScannerBlack:andScannerWhite:` instead");
- (BIOImage *)compressImageToJPEG2000InKilobytes:(CGFloat)maximumSizeInKilobytes __deprecated_msg("Use `imageByCompressingImageToJPEG2000InKilobytes:` instead");

/**
 *  @author: Morpho
 *
 *  Method to compress to a `NSData*` with determined quality.
 *
 *  @param  quality quality of the compression (min: 1, max: 100)
 *
 *  @return NSData* with the final compression applied
 */
- (NSData *)dataByCompressingImageWithQuality:(uint32_t)quality;

/**
 *  @author: Morpho
 *
 *  Method to compress to a `BIOImage*` with determined quality.
 *
 *  @param  quality quality of the compression (min: 1, max: 100)
 *
 *  @return BIOImage* with the final compression applied
 */
- (BIOImage *)imageByCompressingImageWithQuality:(uint32_t)quality;

/**
 *  @author: Morpho
 *
 *  Method to compress to a `NSData*` with determined final size in kilobytes.
 *
 *  @param sizeInKilobytes final size in kilobytes
 *
 *  @return NSData* with the final compression applied
 */
- (NSData *)dataByCompressingImageToSizeInKilobytes:(CGFloat)sizeInKilobytes;

/**
 *  @author: Morpho
 *
 *  Method to compress to a `BIOImage*` with determined final size in kilobytes.
 *
 *  @param  sizeInKilobytes final size in kilobytes
 *
 *  @return BIOImage* with the final compression applied
 */
- (BIOImage *)imageByCompressingImageToSizeInKilobytes:(CGFloat)sizeInKilobytes;

/**
 *  @author: Morpho
 *
 *  Method to compress to a `NSData*` with a determined WSQ ratio.
 *
 *  @param  ratio   WSQ ratio for the compression (min: 1.6, max: 8000, recommended value in between 12 and 15)
 *  @param scannerBlack Black calibration value (if unknown, use 0)
 *  @param scannerWhite White calibration value (if unknown, use 255)
 *
 *  @return BIOImage* with the final compression applied
 */
- (NSData *)dataByCompressingImageToWSQRatio:(CGFloat)ratio withScannerBlack:(Byte)scannerBlack andScannerWhite:(Byte)scannerWhite;

/**
 *  @author: Morpho
 *
 *  Method to compress to a `BIOImage*` with a determined WSQ ratio.
 *
 *  @param  ratio   WSQ ratio for the compression (min: 1.6, max: 8000, recommended value in between 12 and 15)
 *  @param scannerBlack Black calibration value (if unknown, use 0)
 *  @param scannerWhite White calibration value (if unknown, use 255)
 *
 *  @return BIOImage* with the final compression applied
 */
- (BIOImage *)imageByCompressingImageToWSQRatio:(CGFloat)ratio withScannerBlack:(Byte)scannerBlack andScannerWhite:(Byte)scannerWhite;

/**
 *  @author: Morpho
 *
 *  Method to compress a `NSData*` in JPEG2000 format with determined maximum size in kilobytes.
 *
 *  @param  maximumSizeInKilobytes Maximum size in kilobytes (min: 1)
 *
 *  @return NSData* with the final compression applied
 */
- (NSData *)dataByCompressingImageToJPEG2000InKilobytes:(CGFloat)maximumSizeInKilobytes;

/**
 *  @author: Morpho
 *
 *  Method to compress a `BIOImage*` in JPEG2000 format with determined maximum size in kilobytes.
 *
 *  @param  maximumSizeInKilobytes Maximum size in kilobytes (min: 1)
 *
 *  @return BIOImage* with the final compression applied
 */
- (BIOImage *)imageByCompressingImageToJPEG2000InKilobytes:(CGFloat)maximumSizeInKilobytes;

@end

NS_ASSUME_NONNULL_END
