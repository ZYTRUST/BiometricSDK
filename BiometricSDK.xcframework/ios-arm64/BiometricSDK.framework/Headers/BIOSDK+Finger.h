//
//  BIOSDK.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 28/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <BiometricSDK/IFingerCaptureHandler.h>
#import <BiometricSDK/FingerCaptureOptions.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Factory methods for BIO (face, finger, iris) capture and matcher handlers
 */
@interface BIOSDK (Finger)

/**
 *  Method that creates and return FingerCaptureHandler object. This method is asynchronous.
 *
 *  @param options           Settings that will be applaied to FingerCaptureHandler
 *  @param completionHandler Block of code that will be excecuted when method end works. It will return id<FingerCaptureHandler> in case of success otherwise NSError
 */
+ (void)createFingerCaptureHandlerWithOptions:(FingerCaptureOptions *)options withCompletionHandler:(void (^)(id<FingerCaptureHandler> _Nullable captureHandler, NSError * _Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
