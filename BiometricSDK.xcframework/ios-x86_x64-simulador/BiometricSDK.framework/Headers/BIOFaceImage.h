//
//  BIOFaceImage.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 20/09/2018.
//  Copyright © 2018 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOImage.h>
#import <BiometricSDK/BIOFaceLivenessStatus.h>
#import <BiometricSDK/BIOFaceMetadata.h>
#import <BiometricSDK/BIOFaceTrackingInformation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOFaceImage : BIOImage

/**
 * Additional face metadata.
 */
@property (nonatomic, strong, nullable) BIOFaceMetadata *faceMetadata;

/**
 * Face liveness status
 */
@property (nonatomic) BIOFaceLivenessStatus livenessStatus;

/**
 * Face tracking information
 */
@property (nonatomic, strong, nullable) BIOFaceTrackingInformation *faceTrackingInfo;

-(instancetype)initWithBIOFaceImage:(BIOFaceImage *)image;

@end

NS_ASSUME_NONNULL_END
