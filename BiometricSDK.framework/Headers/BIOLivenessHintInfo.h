//
//  BIOLivenessHintInfo.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 20/09/2018.
//  Copyright © 2018 MORPHO. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 * Enums defines Liveness hint info. It can be used to determine if the SDK has been able to check a liveness properly.
 * The hint tells what should be improved.
 */
typedef NS_ENUM(NSUInteger,BIOLivenessHintInfo) {
    BIOLivenessHintInfoOK                   = 0,
    BIOLivenessHintInfoMovedDuringFlash     = 1,
    BIOLivenessHintInfoTooBright            = 2
};

NSString * NSStringFromBIOLivenessHintInfo(BIOLivenessHintInfo hintInfo);

NS_ASSUME_NONNULL_END
