//
//  BIOLicenseManager.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 11/05/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <BiometricSDK/BIOLicense.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  @author Morpho
 *
 *  @brief Object that handle operations related to license handling.
 */
@interface BIOLicenseManager : NSObject

/**
 *  @author Morpho
 *
 *  @brief Property that gets the information about current license, nil in case there is no license
 */
@property (nonatomic, strong, readonly, nullable) BIOLicense* license;

@end

NS_ASSUME_NONNULL_END
