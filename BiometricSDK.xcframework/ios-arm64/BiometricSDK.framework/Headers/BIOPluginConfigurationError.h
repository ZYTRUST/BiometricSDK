//
//  BIOPluginConfigurationError.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 12/03/2020.
//  Copyright © 2020 MORPHO. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const BIOPluginConfigurationErrorDomain;

typedef NS_ERROR_ENUM(BIOPluginConfigurationErrorDomain, BIOPluginConfigurationError) {
    BIOPluginConfigurationErrorNoRequiredPlugin = 1000,
    BIOPluginConfigurationErrorTooManyPluginsLoadedOfTheSameCategory = 1001
};

NSString * NSStringFromBIOPluginConfigurationError(BIOPluginConfigurationError error);

NS_ASSUME_NONNULL_END
