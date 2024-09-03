//
//  BIOConfigurationParseError.h
//  BiometricSDK
//
//  Created by ADAMCZYK Maciej on 16/02/2021.
//  Copyright © 2021 MORPHO. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const BIOConfigurationParseErrorDomain;

typedef NS_ERROR_ENUM(BIOConfigurationParseErrorDomain,BIOConfigurationParseError) {
    BIOConfigurationParseErrorUnknown,
    BIOConfigurationParseErrorInvalid,
    BIOConfigurationParseErrorInvalidFormat,
    BIOConfigurationParseErrorFileNotFound,
    BIOConfigurationParseErrorNoSignature,
    BIOConfigurationParseErrorInvalidSignature
};

NSString * NSStringErrorNameFromBIOConfigurationParseError(BIOConfigurationParseError error);

NS_ASSUME_NONNULL_END
