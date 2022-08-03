//
//  BIODiagnosticEvent.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 19/07/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOEventType.h>
#import <BiometricSDK/BIOEventParameters.h>
#import <BiometricSDK/BIOEventResult.h>
#import <BiometricSDK/BIOMetadata.h>
#import <BiometricSDK/BIODeviceStatus.h>
#import "BIONSDictionaryAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@protocol BIODiagnosticEvent <BIONSDictionaryAdapter>

@property (nonatomic, assign) BIOEventType type;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, assign) long duration;
@property (nonatomic, strong) BIOEventParameters *eventParameters;
@property (nonatomic, strong) BIOEventResult *eventResult;
@property (nonatomic, strong) BIOMetadata *metadata;
@property (nonatomic, strong) BIODeviceStatus *deviceStatus;
@property (nonatomic, strong, nullable) NSString *mode;

- (instancetype _Nullable)initWithDictionary:(NSDictionary *)dict withError:(NSError * _Nullable __autoreleasing * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
