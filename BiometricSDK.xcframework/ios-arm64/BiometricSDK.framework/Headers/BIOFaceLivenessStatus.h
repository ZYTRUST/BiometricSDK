//
//  BIOFaceLivenessStatus.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 21/01/2020.
//  Copyright © 2020 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*
*  @brief The enum describes liveness status of BIOFaceImage.
*/
typedef NSInteger BIOFaceLivenessStatus NS_TYPED_ENUM;

/*
* @brief The SDK determined the liveness changellange to have been failed. The face image is probably photocopy or mask.
*/
extern const BIOFaceLivenessStatus BIOFaceLivenessStatusFake;

/*
* @brief The SDK determined the liveness changellange to have been passed. The face image is probably of an alive person.
*/
extern const BIOFaceLivenessStatus BIOFaceLivenessStatusLive;

/*
* @brief The SDK cannot determine if the face image is of live person or a mask/photocopy. The image should be processed by the server to be sure.
*/
extern const BIOFaceLivenessStatus BIOFaceLivenessStatusNoDecision;

/*
* @brief Capture was performed using NoLiveness mode.
*/
extern const BIOFaceLivenessStatus BIOFaceLivenessStatusUnknown;

NSString * NSStringFromBIOFaceLivenessStatus(BIOFaceLivenessStatus status);

NS_ASSUME_NONNULL_END
