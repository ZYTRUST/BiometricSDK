//
//  BCBiometrics.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 06/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//


#import <BiometricSDK/BIOLocation.h>
#import <BiometricSDK/BIOModality.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Class contains information about biometrics location e.g.: Left iris etc.
 */
@interface BIOBiometrics : NSObject

/**
 *  Default initalizer that setups biometricLocation for BCBiometricLocationFaceFrontal and biometricModality BCBiometricModalityFace
 * @return Instance of BCBiometrics with preseted properties
 */
- (instancetype)init;

/**
 *   Initializer that returns instance of BCBiometrics with Locatin and Modality given in parameters
 *
 *  @param biometricLocation location to set
 *  @param biometricModality modality to set
 *
 *  @return Instance of BCBiometrics with given paramiter set
 */
- (instancetype)initWithLocation:(BIOLocation)biometricLocation
                    withModality:(BIOModality)biometricModality;

/**
 *   Class method that returns instance of BCBiometrics with Locatin and Modality given in parameters
 *
 *  @param biometricLocation location to set
 *  @param biometricModality modality to set
 *
 *  @return Instance of BCBiometrics with given paramiter set
 */
+ (instancetype)biometricsWithLocation:(BIOLocation)biometricLocation
                          withModality:(BIOModality)biometricModality;

/**
 *   Location of biometrics scanned
 */
@property (nonatomic, assign) BIOLocation biometricLocation;

/**
 *   Modality of taken biometrics information
 */
@property (nonatomic, assign) BIOModality biometricModality;

@end

NS_ASSUME_NONNULL_END
