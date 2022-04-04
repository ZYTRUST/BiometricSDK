//
//  BIOCamera.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 04/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 *   Camera setting type
 */
typedef int BIOCamera;
/**
 *   Flag that sets front camera for capturing and previewing
 */
extern const BIOCamera BIOCameraFront;
/**
 *   Flag that sets rear camera for capturing and previewing
 */
extern const BIOCamera BIOCameraRear;


NSString * NSStringFromBIOCamera(BIOCamera camera);

NS_ASSUME_NONNULL_END
