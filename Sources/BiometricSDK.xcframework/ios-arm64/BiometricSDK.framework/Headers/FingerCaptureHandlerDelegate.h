//
//  FingerCaptureHandlerDelegate.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 16/03/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOAuthenticationResult.h>
#import <BiometricSDK/BIOReplayProtocol.h>
#import <BiometricSDK/BIOLivenessResult.h>
#import <BiometricSDK/BIOFingerCaptureInfo.h>
#import <BiometricSDK/BIOTrackingInfo.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FingerCaptureHandlerDelegate <BIOReplayProtocol>

@optional

- (void)captureTracking:(NSArray<BIOTrackingInfo*> * _Nullable)trackingInfo withError:(NSError * _Nullable)error;

- (void)capturedFingers:(NSArray<BIOImage *> * _Nullable)images withError:(NSError * _Nullable)error __deprecated_msg("Use `capturedFingers:withLivenessResult:withError:` instead");

- (void)capturedFingers:(NSArray<BIOImage *> * _Nullable)images withLivenessResult:(BIOLivenessResult * _Nullable)livenessResult
              withError:(NSError * _Nullable)error __deprecated_msg("Use `capturedFingers:withCaptureInfo:withError:` instead");

- (void)capturedFingers:(NSArray<BIOImage *> * _Nullable)images withCaptureInfo:(BIOFingerCaptureInfo * _Nullable)captureInfo withError:(NSError * _Nullable)error;

- (void)capturedHand:(BIOImage * _Nullable)image withError:(NSError * _Nullable)error;

- (void)fastAuthenticationFinished:(BIOAuthenticationResult * _Nullable)authenticationResult withError:(NSError * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
