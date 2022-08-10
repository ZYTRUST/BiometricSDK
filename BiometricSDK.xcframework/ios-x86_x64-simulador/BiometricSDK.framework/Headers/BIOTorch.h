//
//  BIOTorch.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 06/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 * Flashlight settings type
 */
typedef int BIOTorch;

/**
 * Flag that turrn flashlight off
 */
extern const BIOTorch BIOTorchOFF;

/**
 * Flag that turrn flashlight on
 */
extern const BIOTorch BIOTorchON;


NSString * NSStringFromBIOTorch(BIOTorch torch);

NS_ASSUME_NONNULL_END
