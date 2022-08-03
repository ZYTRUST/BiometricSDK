//
//  BIOServerCertificates.h
//  BiometricSDK
//
//  Created by KWIATKOWSKI Kamil on 13/07/2021.
//  Copyright © 2021 MORPHO. All rights reserved.
//

@interface BIOServerCertificates : NSObject

/**
 * Property used to store salt from Web Bio Server.
 */
@property NSString *serverRandom;

/**
 * Property used to store certificates from Web Bio Server.
 */
@property NSArray<NSString *> *certificates;

/**
 * Server certificates initializer.
 * @param serverRandom Server random.
 * @param certificates Server certificates.
 *
 * @return Instance of ServerCertificates.
 */
- (instancetype)initWithServerRandom:(NSString *)serverRandom certificates:(NSArray<NSString*> *)certificates;

@end
