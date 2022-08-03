//
//  BIOOverlay.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 11/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 *  Enum provides flags to configure overlay of biometrics during capturing
 */
typedef NS_ENUM(NSUInteger,BIOOverlay){
    /**
     *  Flag that turns overlay off
     */
    BIOOverlayOFF = 0,
    
    /**
     *  Flag that turns overlay on
     */
    BIOOverlayON = 1,
};

NSString * NSStringFromBIOOverlay(BIOOverlay overlay);

NS_ASSUME_NONNULL_END
