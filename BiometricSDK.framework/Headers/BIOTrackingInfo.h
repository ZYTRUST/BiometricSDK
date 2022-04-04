//
//  BCBioTraking.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 06/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <BiometricSDK/BIOBiometrics.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  A BCBioTraking is used to storage data about taken biometrics frame, location and modality
 */
@interface BIOTrackingInfo : BIOBiometrics

/**
 * Default initalizer that setups biometricLocation for BCBiometricLocationFaceFrontal and biometricModality BCBiometricModalityFace and frame to CGRectZero
 *
 * @return Instance of BCBioTraking with preseted properties
 */
- (instancetype)init;

/**
 *  Initializer that allow to set all parameters
 *
 *  @param biometricLocation location to set
 *  @param biometricModality modality to set
 *  @param frame frame of biometrics
 *  @param orientation orientation of biometrics
 *
 *  @return Instance of BCBioTraking with parameters set
 */
- (instancetype)initWithBiometricLocation:(BIOLocation)biometricLocation
                    withBiometricModality:(BIOModality)biometricModality
                                withFrame:(CGRect)frame
                          withOrientation:(CGFloat)orientation;

/**
 *  Class method that creates instance with parametres set
 *
 *  @param biometricLocation location to set
 *  @param biometricModality modality to set
 *  @param frame frame of biometrics
 *  @param orientation orientation of biometrics
 *
 *  @return Instance of BCBioTraking with parameters set
 */
+ (instancetype)bioTrakingWithBiometricLocation:(BIOLocation)biometricLocation
                          withBiometricModality:(BIOModality)biometricModality
                                      withFrame:(CGRect)frame
                                withOrientation:(CGFloat)orientation;

/**
 *   Property stores frame of taken biometrics
 */
@property (nonatomic) CGRect frame;

/**
 *   Property stores orientation of taken biometrics
 */
@property (nonatomic) CGFloat orientation;

@end

NS_ASSUME_NONNULL_END
