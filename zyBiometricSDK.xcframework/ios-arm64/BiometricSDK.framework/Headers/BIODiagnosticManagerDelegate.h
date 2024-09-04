//
//  BIODiagnosticManagerDelegate.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 28/07/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#ifndef BIODiagnosticManagerDelegate_h
#define BIODiagnosticManagerDelegate_h

#import <BiometricSDK/BIOEvent.h>

NS_ASSUME_NONNULL_BEGIN

@class BIODiagnosticManager;


@protocol BIODiagnosticManagerDelegate <NSObject>

- (void)diagnosticManager:(BIODiagnosticManager *)diagnosticManager receivedEvent:(BIOEvent *)event;

@end

NS_ASSUME_NONNULL_END

#endif /* BIODiagnosticManagerDelegate_h */
