//
//  BIOBiometricReference.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 10/04/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOBiometricSet.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOBiometricReference : BIOBiometricSet

@property (nonatomic, strong, readonly) NSString *userUUID;

- (instancetype)initWithUserUUID:(NSString *)userUUID;

@end

NS_ASSUME_NONNULL_END
