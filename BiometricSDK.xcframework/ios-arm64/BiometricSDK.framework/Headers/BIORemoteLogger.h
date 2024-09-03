//
//  BIORemoteLogger.h
//  BiometricSDK
//
//  Created by Leszek Szary on 02.11.2018.
//  Copyright © 2018 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIORemoteLoggerConfiguration : NSObject

- (instancetype)initWithUrl:(NSURL * _Nonnull)url apiKey:(NSString * _Nullable)apiKey;

+ (BIORemoteLoggerConfiguration *)defaultEU;
+ (BIORemoteLoggerConfiguration *)defaultUS;

@end

@interface BIORemoteLogger : NSObject
@property (nonatomic, assign) BOOL loggerDisabled;
@property (nonatomic, assign) BOOL wifiOnly;

- (void)setConfiguration:(BIORemoteLoggerConfiguration *)configuration;

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
