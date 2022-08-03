//
//  BIOLicense.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 28/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object that contians information about License: ID, binary data and activated features.
 */
@interface BIOLicense : NSObject

@property (nonatomic, strong, readonly) NSString *licenseID;
@property (nonatomic, strong, readonly, nullable) NSData *licenseData;
@property (nonatomic, strong, readonly, nullable) NSDate *expirationDate;
@property (nonatomic, strong, readonly) NSArray<NSString *> *features;
@property (nonatomic, strong, readonly) NSString *version;
@property (nonatomic, strong, readonly) NSString *profileId;
@property (nonatomic, readonly, getter=isValid) BOOL valid;

/// Checks if license is valid and returns nil if license is valid or error if it is invalid.
- (nullable NSError *)validate;

@end

NS_ASSUME_NONNULL_END
