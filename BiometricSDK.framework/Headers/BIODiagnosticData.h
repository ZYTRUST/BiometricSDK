//
//  BIODiagnosticData.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 28/07/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIODiagnosticEvent.h>
#import <BiometricSDK/BIOEnvironment.h>
#import <BiometricSDK/BIOSmartBioSDKInfo.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIODiagnosticData : NSObject <BIONSDictionaryAdapter>

@property (nonatomic, copy) NSArray<id<BIODiagnosticEvent>> *events;
@property (nonatomic, readonly) BIOEnvironment *environment;
@property (nonatomic, readonly) BIOSmartBioSDKInfo *smartBioSDKInfo;

@end

NS_ASSUME_NONNULL_END
