//
//  BIOReplayProtocol.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 20/01/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BIOReplayProtocol <NSObject>

@optional
- (void)replayDidFinishRecording;

/**
 *  @author Morpho
 *
 *  @brief methd invoked when capture was finished
 */
- (void)captureFinishedWithError:(NSError * _Nullable)error;

@end
