//
//  BIODeviceStatus.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 01/08/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>
#import "BIONSDictionaryAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@interface BIODeviceStatus : NSObject <BIONSDictionaryAdapter>

@property (nonatomic) CMQuaternion orientation;

@end

NS_ASSUME_NONNULL_END
