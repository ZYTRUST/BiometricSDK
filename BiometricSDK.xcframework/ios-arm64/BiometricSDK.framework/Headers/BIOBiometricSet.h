//
//  BIOBiometricSet.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 10/04/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOTemplate.h>
#import <BiometricSDK/BIOModality.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOBiometricSet : NSObject

@property (nonatomic, readonly, nonnull) NSArray<BIOTemplate *> *templates;

- (NSError * _Nullable)addTemplate:(BIOTemplate *)bioTemplate;
- (NSError * _Nullable)addTemplates:(NSArray<BIOTemplate *> *)templates;

@end

NS_ASSUME_NONNULL_END
