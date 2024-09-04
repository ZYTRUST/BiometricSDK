//
//  IFingerprintCaptureHandler.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 08/03/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <BiometricSDK/FingerCaptureHandlerDelegate.h>
#import <BiometricSDK/FingerCaptureOptions.h>
#import <BiometricSDK/BIOCaptureHandlerError.h>
#import <BiometricSDK/IBIOGenericCaptureHandler.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FingerCaptureHandler <BIOGenericCaptureHandler>

@property (nonatomic, weak, nullable) id<FingerCaptureHandlerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
