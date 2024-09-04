//
//  BIOVideoRecording.h
//  BiometricSDK
//
//  Created by IDEMIA on 12/20/21.
//  Copyright © 2021 IDEMIA. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@interface BIOVideoRecording : NSObject

/// Generates a video file with recorded capture.
/// @param progressHandler Video generation progress handler which returns values in range [0, 100].
/// @param completionHandler Completion handler which returns path to generated video file or error if generation was not successful.
- (void)generateVideoWithProgressHandler:(void (^)(NSInteger))progressHandler completionHandler:(void (^)(NSURL * _Nullable, NSError * _Nullable))completionHandler;

@end

NS_ASSUME_NONNULL_END
