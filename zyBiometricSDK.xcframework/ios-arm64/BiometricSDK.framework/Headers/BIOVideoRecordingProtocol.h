//
//  BIOVideoRecordingProtocol.h
//  BiometricSDK
//
//  Created by IDEMIA on 12/20/21.
//  Copyright © 2021 IDEMIA. All rights reserved.
//

#import <BiometricSDK/BIOVideoRecording.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BIOVideoRecordingProtocol <NSObject>

@optional
/// Delegate method that returns object which can be used to generate path to a video file with recorded capture.
/// @param videoRecording Object used for generating video file.
- (void)videoRecordingReadyForGeneration:(BIOVideoRecording *)videoRecording;

@end

NS_ASSUME_NONNULL_END
