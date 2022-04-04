//
//  BIOCr2DTargetInfo.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 29/06/2018.
//  Copyright © 2018 MORPHO. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/*
 *   Class contains CR2D info about one of targets.
 *   All coordinates and metrics are relative to the camera preview resolution.
 */
@interface BIOCr2DTargetInfo : NSObject

/**
 *   Target number, starts with 0
 */
@property (nonatomic, readonly) NSUInteger number;

/**
 *   Property tells if target should be displayed or not
 */
@property (nonatomic, readonly) BOOL visible;

/**
 *   Property tells if target is valid one for the try.
 */
@property (nonatomic, readonly) BOOL current;

/**
 *   Property stores x,y coordinates of the center of the target (where heading point should be moved to)
 */
@property (nonatomic, readonly) CGPoint position;

/**
 *   Property stores radius in pixels
 */
@property (nonatomic, readonly) CGFloat radius;

/**
 *   Property tells how long it requires the heading point to be in the target area to pass the try.
 *   The value is float type between 0 and 1. Where values means:
 *     - 0     - the heading point is NOT in the target area
 *     - 0..1  - when it's getting bigger, the heading point is in the target area and should be kept still,
 *               when it's getting smaller, the heading point is outside of the target area
 *     - 1     - the try is passed
 */
@property (nonatomic, readonly) CGFloat completeness;

-(instancetype)initWithNumber:(NSUInteger)number andVisibility:(BOOL)visible andIsCurrent:(BOOL)current andPosition:(CGPoint)position andRadius:(CGFloat)radius andCompleteness:(CGFloat)completeness;

@end

NS_ASSUME_NONNULL_END
