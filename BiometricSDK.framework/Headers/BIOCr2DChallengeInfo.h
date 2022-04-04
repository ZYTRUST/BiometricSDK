//
//  BIOCr2DChallengeInfo.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 04/04/2018.
//  Copyright © 2018 MORPHO. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/*
 *   Class contains CR2D challenge info.
 *   All coordinates and metrics are relative to the camera preview resolution.
 */
@interface BIOCr2DChallengeInfo : NSObject

/**
 *   Property stores tells if heading point should be displayed or not
 */
@property (nonatomic, readonly) BOOL headingPointVisible;

/**
 *   Property stores x,y coordinates of the heading point (the point where a user is looking at)
 */
@property (nonatomic, readonly) CGPoint headingPoint;

-(instancetype)initWithHeadingPointVisibility:(BOOL)headingPointVisible andHeadingPoint:(CGPoint)headingPoint;

@end

NS_ASSUME_NONNULL_END
