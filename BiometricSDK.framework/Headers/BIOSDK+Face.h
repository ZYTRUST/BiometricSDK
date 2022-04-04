//
//  BIOSDK.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 28/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <BiometricSDK/IFaceCaptureHandler.h>
#import <BiometricSDK/FaceCaptureOptions.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Factory methods for BIO (face, finger, iris) capture and matcher handlers
 */
@interface BIOSDK (Face)

/**
 *  Method that creates and return FaceCaptureHandler object. This method is asynchronous.
 *
 *  @param options           Settings that will be applaied to FaceCaptureHandler
 *  @param completionHandler Block of code that will be excecuted when method end works. It will return id<FaceCaptureHandler> in case of success otherwise NSError
 */
+ (void)createFaceCaptureHandlerWithOptions:(FaceCaptureOptions *)options withCompletionHandler:(void  (^)(id<FaceCaptureHandler> _Nullable captureHandler, NSError * _Nullable  error))completionHandler;

@end

NS_ASSUME_NONNULL_END
