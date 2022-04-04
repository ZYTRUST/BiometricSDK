//
//  BIOSDK.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 28/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <BiometricSDK/IBIOMatcherHandler.h>
#import <BiometricSDK/BIOMatcherHandlerOptions.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Factory methods for BIO (face, finger, iris) capture and matcher handlers
 */
@interface BIOSDK (Matcher)

/**
 *  Method that creates and return BIOMatcherHandler object. This method is asynchronous.
 *
 *  @param options           Settings that will be applied to BIOMatcherHandler
 *  @param completionHandler Block of code that will be executed when method end works. It will return id<BIOMatcherHandler> i case of success otherwise NSError
 */
+ (void)createMatcherHandlerWithOptions:(BIOMatcherHandlerOptions  *)options withCompletionHandler:(void(^)(id<BIOMatcherHandler> _Nullable matcherHandler, NSError * _Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
