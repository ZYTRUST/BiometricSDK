//
//  BIOSDK.h
//  BiometricSDK
//
//  Created by Marek Swiecznik on 27/06/2019.
//  Copyright © 2019 MORPHO. All rights reserved.
//

//
#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOSDKInfo.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * @class: BIOSDK
 *
 * @brief This class is the entrypoint to create handlers thats operate on Biometrics
 *
 * @description Depending on SDK version (BIO, DOC, BIO+DOC), this class can provide factories for:
 *
 *              - FaceCaptureHandler: capture face\n
 *
 *              - FingerCaptureHandler: capture fingers\n
 *
 *              - DocumentCaptureHandler: capture information form MRZ on document and can take a photo of document\n
 *
 *              - BIOMatcherHandler: object used to identify or verify person\n
 *
 *              It also returns basic information about BiometricSDK for e.g. version number.
 *
 */
@interface BIOSDK : NSObject

/**
 *  Returns an object that contain information about current version of BiometricSDK e.g. version number
 *
 *  @return Object that contains informations about SDK
 */
+ (BIOSDKInfo *)getInfo;

@end

NS_ASSUME_NONNULL_END
