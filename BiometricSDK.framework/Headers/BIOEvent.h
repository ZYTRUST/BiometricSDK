//
//  BIOEvent.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 26/07/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIODiagnosticEvent.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOEvent : NSObject <BIODiagnosticEvent>

- (instancetype)initWithType:(BIOEventType)type;

@end

NS_ASSUME_NONNULL_END
