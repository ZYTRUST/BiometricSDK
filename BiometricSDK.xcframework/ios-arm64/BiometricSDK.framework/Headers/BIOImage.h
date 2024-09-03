//
//  BIOImage.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 11/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOBiometrics.h>
#import <BiometricSDK/BIOColorSpace.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * BIOImage contains all information about capturet image
 */
@interface BIOImage : BIOBiometrics

/**
 * Contains binary data of image
 */
@property (nonatomic, strong) NSData *buffer;

/**
 * Size in bytes to go from one line to the next
 */
@property (nonatomic, assign) int stride;

/**
 * Width of the image
 */
@property (nonatomic, assign) uint32_t width;

/**
 * Height of the image
 */
@property (nonatomic, assign) uint32_t height;

/**
 * Image ColorSpace
 */
@property (nonatomic, assign) BIOColorSpace colorSpace;

/**
 * Resolution in DPI. Set to +0.0F when unknown
 */
@property (nonatomic, assign) float resolution;


@property (nonatomic, assign, getter=isAlive) BOOL alive __deprecated_msg("Changed to livenessStatus");
/**
 * Quality of image
 */
@property (nonatomic, assign) int imageQuality;

/**
 * Creates new copy of the image instance
 */
-(instancetype)initWithBIOImage:(BIOImage *)image;

@end

NS_ASSUME_NONNULL_END
