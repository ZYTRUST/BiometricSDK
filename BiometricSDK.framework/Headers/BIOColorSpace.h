//
//  BIOColorSpace.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 11/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//
#import <CoreGraphics/CoreGraphics.h>

/**
 * Type of colorpaces of BIOImage
 */
typedef NSUInteger BIOColorSpace;


/**
 *  @author Morpho
 *
 *  @brief Grayscale 8bpp image
 */
extern const BIOColorSpace BIOColorSpaceY8;

/**
 *  @author Morpho
 *
 *  @brief Grayscale 16bpp image (Little Endian).
 */
extern const BIOColorSpace BIOColorSpaceY16LE;

/**
 *  @author Morpho
 *
 *  @brief Color 24bpp BGR image (BMP like memory layout).
 */
extern const BIOColorSpace BIOColorSpaceBGR24;

/** 
 *  @author Morpho
 *
 *  @brief Color 24bpp RGB image
 */
extern const BIOColorSpace BIOColorSpaceRGB24;

/**
 * Method that convery BIOColorSpace to CGColorSpaceRef that device understand
 *
 * @param colorSpace BiometrSDK ColorScpace
 *
 * @return CGColorSpaceRef equialent to given BIOColorSpace
 */
CGColorSpaceRef CGColorSpaceCreateFromBIOColorSpace(BIOColorSpace colorSpace);
