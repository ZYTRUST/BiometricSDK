//
//  BIOFaceImage.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 20/09/2018.
//  Copyright © 2018 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOImage.h>
#import <BiometricSDK/BIOLivenessHintInfo.h>
#import <BiometricSDK/BIOFaceLivenessStatus.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOFaceImage : BIOImage

/**
 * Variable defines liveness hint info. It can be used to determine if the SDK has been able to check a liveness properly.
 * The hint tells what should be improved.
 */
@property (nonatomic) BIOLivenessHintInfo livenessHintInfo;

/**
 * Additional face metadata.
 */
@property (nonatomic, strong, nullable) NSData *faceMetadata;

/**
 * Face liveness status
 */
@property (nonatomic) BIOFaceLivenessStatus livenessStatus;


-(instancetype)initWithBIOFaceImage:(BIOFaceImage *)image;

@end

NS_ASSUME_NONNULL_END
