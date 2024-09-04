//
//  BIOLicenseManager+LKMS.h
//  BiometricSDK
//
//  Created by Konrad Szewczyk on 20/07/2018.
//  Copyright © 2018 MORPHO. All rights reserved.
//

#import <BiometricSDK/IBIOLicenseManager.h>
#import <BiometricSDK/BIOLicenseOptions.h>
#import <BiometricSDK/BIOLicenseError.h>

NS_ASSUME_NONNULL_BEGIN

@interface BIOLicenseManager (LKMS)

/**
 *  @author Morpho
 *
 *  @brief  Property that enables/disables logging from license updates
 */
@property (nonatomic, getter=isLogEnabled) BOOL logEnabled;

/**
 *  @author Morpho
 *
 *  @brief Method remove current license
 *
 *  @return nil if license is completly remove oherwise NSError
 */
- (NSError * _Nullable)removeLicense;

/**
 *  @author Morpho
 *
 *  @brief Method that activate BiometricSDK and retrive license
 *
 *  @param options           Object contains information about comunication with server and server
 *  @param completionHandler Block of code that will be run when comunication with license server ends. Return license in case of success, otherwise error.
 */
- (void)activateWithOptions:(BIOLicenseOptions *)options
      withCompletionHandler:(void(^ _Nullable)(BIOLicense * _Nullable License, NSError * _Nullable error))completionHandler;

/**
 *  @author Morpho
 *
 *  @brief Method that loads BiometricSDK actiavted license from NSData
 *
 *  @param data           Object contains activated license data, ie. content of a *.state file.
 *
 *  @return nil if loaded with success
 */
-(NSError * _Nullable)loadLicenseFromData:(NSData *)data;

/**
*  @author Morpho
*
*  @brief Method that migrates license v1 to license v3. In case license v3 is already available on a device no action is taken.
*
*  @param options           Object contains information about license and server. It must contain apiKey, profileId and serverURL.
*  @param completionHandler Block of code that will be executed when migratio is finished. Return license in case of success, otherwise error.
*/
- (void)migrateToLicenseV3:(BIOLicenseOptions*)options
     withCompletionHandler:(void(^)(BIOLicense * _Nullable License, NSError * _Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
