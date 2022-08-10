//
//  BIOLicenseOptions.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 28/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object used activation license proces, during comunication with server
 */
@interface BIOLicenseOptions : NSObject

/**
 *  String with address to license server
 */
@property (nonatomic, strong) NSString *serverURL;

/**
 *  Data used by server to activate BiometricSDK, NOTE: this block of data is provided by client.
 *  LKMSv1 - if LKMSv1 is not used, leave nil
 */
@property (nonatomic, strong, nullable) NSData *activationData __deprecated_msg("LKMSv1 property. Use LKMSv3 instead");

/**
 *  String with API key of the LKMSv3 licensing profile.
 *  LKMSv3 - if LKMSv3 is not used, leave nil
 */
@property (nonatomic, strong, nullable) NSString *apiKey;

/**
 *  String with profile ID of the LKMSv3 licensing profile.
 *  LKMSv3 - if LKMSv3 is not used, leave nil
 */
@property (nonatomic, strong, nullable) NSString *profileId;

@end

NS_ASSUME_NONNULL_END
