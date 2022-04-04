//
//  BIOEventStatus.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 01/08/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#ifndef BIOEventStatus_h
#define BIOEventStatus_h

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BIOEventStatus) {
    BIOEventStatusSuccess,
    BIOEventStatusFailure
};

NSString * NSStringFromBIOEventStatus(BIOEventStatus status);
BIOEventStatus BIOEventStatusFromNSString(NSString *str, NSError * _Nullable __autoreleasing * _Nullable error);

NS_ASSUME_NONNULL_END

#endif /* BIOEventStatus_h */
