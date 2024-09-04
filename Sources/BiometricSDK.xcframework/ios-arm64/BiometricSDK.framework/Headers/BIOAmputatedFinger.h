//
//  BIOAmputetedFinger.h
//  BiometricSDK
//
//  Created by KWIATKOWSKI Kamil on 29/07/2021.
//  Copyright © 2021 MORPHO. All rights reserved.
//
#import <Foundation/Foundation.h>

typedef NS_OPTIONS (NSUInteger, BIOAmputatedFinger) {
    BIOAmputatedFingerNone = 0,
    BIOAmputatedFingerIndex = 1 << 0,
    BIOAmputatedFingerMiddle = 1 << 1,
    BIOAmputatedFingerRing = 1 << 2,
    BIOAmputatedFingerLittle = 1 << 3
};

