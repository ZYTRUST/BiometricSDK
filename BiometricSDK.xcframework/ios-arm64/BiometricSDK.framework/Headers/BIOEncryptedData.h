//
//  BIOEncryptedData.h
//  BiometricSDK
//
//  Created by Leszek Szary on 19/05/2020.
//  Copyright © 2020 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Class represents encrypted face metadata
@interface BIOEncryptedData : NSObject

/// Encrypted metadata
@property (nonatomic, strong) NSData *data;

/// Encrypted master secret
@property (nonatomic, strong) NSData *masterSecret;

/// Encrypted face metadata initializer
/// @param data Encrypted metadata
/// @param masterSecret Encrypted master secret
- (instancetype)initWithData:(NSData *)data masterSecret:(NSData *)masterSecret;

@end

NS_ASSUME_NONNULL_END
