//
//  BIOFaceMetadata.h
//  BiometricSDK
//
//  Created by Leszek Szary on 19/05/2020.
//  Copyright © 2020 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOEncryptedData.h>

NS_ASSUME_NONNULL_BEGIN

/// Class represents face metadata from face capture
@interface BIOFaceMetadata : NSObject

/// Metadata
@property (nonatomic, strong) NSData *data;

/// Face metadata initializer
/// @param data Metadata
- (instancetype)initWithData:(NSData *)data;

/// Produces object with encrypted metadata
/// @param random Parameter from server needed for encryption (base64 encoded)
/// @param certificates Certificates from server needed for encryption (base64 encoded)
/// @return Instance of BIOEncryptedData with encrypted metadata
- (nullable BIOEncryptedData *)encryptWithRandom:(NSString *)random certificates:(NSArray<NSString *> *)certificates;

@end

NS_ASSUME_NONNULL_END
