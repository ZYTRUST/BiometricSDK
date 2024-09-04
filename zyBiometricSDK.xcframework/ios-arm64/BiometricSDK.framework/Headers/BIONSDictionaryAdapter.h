//
//  BIONSDictionaryAdapter.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 28/07/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#ifndef BIONSDictionaryAdapter_h
#define BIONSDictionaryAdapter_h

NS_ASSUME_NONNULL_BEGIN

@protocol BIONSDictionaryAdapter <NSObject>

- (NSDictionary * _Nullable)getDictionaryValueWithError:(NSError * _Nullable __autoreleasing * _Nullable)error;

@end

NS_ASSUME_NONNULL_END

#endif /* BIONSDictionaryAdapter_h */
