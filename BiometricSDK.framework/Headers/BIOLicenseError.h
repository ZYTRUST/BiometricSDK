//
//  BIOLicenseError.h
//  BiometricSDK
//
//  Created by Leszek Szary on 30/03/2020.
//  Copyright © 2019 MORPHO. All rights reserved.
//
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const BIOLicenseErrorDomain;

/**
 *  Enum that contains error codes that can ofure during capture
 */
typedef NS_ERROR_ENUM(BIOLicenseErrorDomain, BIOLicenseError) {
    BIOLicenseErrorWrongActivationOptions = -100,
    BIOLicenseErrorAlreadyMigrated = -101,
    BIOLicenseErrorWrongMigrationOptions = -102,
    BIOLicenseErrorInvalid = -103,
    BIOLicenseErrorCertificateValidationFailure = -104,
    BIOLicenseErrorExpired = -105,
};


NSString * NSStringFromBIOLicenseError(BIOLicenseError error);

NS_ASSUME_NONNULL_END
