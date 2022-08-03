//
//  BIOSDK.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 28/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <BiometricSDK/IRemoteFaceCaptureHandler.h>
#import <BiometricSDK/RemoteFaceCaptureOptions.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Factory methods for BIO (face, finger, iris) capture and matcher handlers
 */
@interface BIOSDK (RemoteFace)

/**
 *  Method that creates and returns RemoteFaceCaptureHandler object. This method is asynchronous.
 *
 *  @param options           Settings that will be applied to RemoteFaceCaptureHandler.
 *  @param completionHandler Block of code that will be excecuted when method ends. It will return id<RemoteFaceCaptureHandler> in case of success otherwise NSError.
 */
+ (void)createRemoteFaceCaptureHandlerWithOptions:(RemoteFaceCaptureOptions *)options withCompletionHandler:(void  (^)(id<RemoteFaceCaptureHandler> _Nullable captureHandler, NSError * _Nullable  error))completionHandler;

@end

NS_ASSUME_NONNULL_END
