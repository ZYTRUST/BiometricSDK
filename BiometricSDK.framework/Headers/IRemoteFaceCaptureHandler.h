//
//  IRemoteFaceCaptureHandler.h
//  BiometricSDK
//
//  Created by Leszek Szary on 30/04/2021.
//  Copyright © 2021 MORPHO. All rights reserved.
//

#import <BiometricSDK/RemoteFaceCaptureHandlerDelegate.h>
#import <BiometricSDK/IBIOGenericCaptureHandler.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * RemoteFaceCaptureHandler used for performing liveness check with remote server.
 */
@protocol RemoteFaceCaptureHandler <BIOGenericCaptureHandler>

/**
 * Delegate object that will receive informations about capture process.
 */
@property (nonatomic, weak, nullable) id<RemoteFaceCaptureHandlerDelegate> delegate;

/**
 * Property that contains encrypted master secret key.
 */
@property (readonly, nonnull) NSData *masterSecretKey;

/**
 * Property that contains encrypted device id.
 */
@property (readonly, nonnull) NSData *deviceId;

/**
 * Sets seed parameter.
 * @param challengeSeed Challenge seed.
 * @return nil if seed set successfully or NSError if problem occured.
 */
- (NSError * _Nullable)setChallengeSeed:(int32_t)challengeSeed;

/**
 * Starts capture with device id signature.
 * @param deviceIdSignature signature to be verified.
 * @param completionHandler Block of code that will be executed when method end works. Returns nil in case of success, otherwise error.
 */
- (void)startCaptureWithDeviceIdSignature:(NSString *)deviceIdSignature completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;

@end

NS_ASSUME_NONNULL_END
