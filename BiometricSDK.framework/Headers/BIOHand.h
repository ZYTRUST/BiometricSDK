//
//  BIOHand.h
//  BiometricSDK
//
//  Created by KWIATKOWSKI Kamil on 20/08/2021.
//  Copyright © 2021 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Specifies which hand is being scanned.
 */
typedef NS_ENUM(NSUInteger, BIOHand) {
    BIOHandRight,
    BIOHandLeft
};

NS_ASSUME_NONNULL_END
