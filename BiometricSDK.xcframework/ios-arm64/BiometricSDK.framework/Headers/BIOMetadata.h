//
//  BIOMetadata.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 01/08/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BIONSDictionaryAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@interface BIOMetadata : NSObject <BIONSDictionaryAdapter>

- (void)setValue:(id _Nullable)object forKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
