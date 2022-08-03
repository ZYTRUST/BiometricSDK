//
//  BIODiagnosticManager.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 19/07/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIODiagnosticEvent.h>
#import <BiometricSDK/BIODiagnosticData.h>
#import <BiometricSDK/BIODiagnosticManagerDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIODiagnosticManager : NSObject

+ (int)version;
+ (instancetype _Nonnull)shared;

@property (nonatomic, weak, nullable) id<BIODiagnosticManagerDelegate> delegate;
@property (nonatomic, readonly) NSArray<id<BIODiagnosticEvent>> *events;

- (void)addEvent:(id<BIODiagnosticEvent>)event;
- (void)removeAllEvents;

- (BIODiagnosticData *)retrieveDiagnosticData;

@end

NS_ASSUME_NONNULL_END
