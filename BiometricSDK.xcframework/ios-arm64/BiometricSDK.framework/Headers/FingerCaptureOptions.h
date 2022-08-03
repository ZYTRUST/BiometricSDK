//
//  FingerprintCaptureOptions.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 16/03/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <BiometricSDK/BIOMode.h>
#import <BiometricSDK/FingerCaptureMode.h>
#import <BiometricSDK/FingerCaptureLivenessType.h>
#import <BiometricSDK/BIOTemplate.h>
#import <BiometricSDK/BIOAmputatedFinger.h>
#import <BiometricSDK/BIOHand.h>

NS_ASSUME_NONNULL_BEGIN

@interface FingerCaptureOptions : BIOMode

- (instancetype)init;

- (instancetype)initWithMode:(FingerCaptureMode)mode __attribute__((__unavailable__("As of release 4.30.0 replaced by initWithMode: hand:")));

- (instancetype)initWithMode:(FingerCaptureMode)mode hand:(BIOHand)hand;

/**
 *  Creates FingerCaptureOptions instance based on configration from ConfigurationFile.json.
 *  @return Instance of object or nil if configuration file is incorrect.
 */
+ (instancetype _Nullable)createFromConfigurationFileWithError: (NSError**)error;

/**
 *  Creates FingerCaptureOptionsinstance based on configration from configuaration file with a given name.
 *  @param fileName Name of the selected configuration file.
 *  @return Instance of object or nil if configuration file is incorrect.
 */
+ (instancetype)createFromConfigurationFileWithName:(NSString *)fileName error:(NSError**)error;

/**
 *  Specifies which capture mode is used.
 */
@property (nonatomic, assign) FingerCaptureMode bioCaptureMode;

/**
 * Specifies which liveness type is used. By default the liveness is set to LOW level.
 * Works only for `FingerCaptureModeFourFingers` mode.
 */
@property (nonatomic, assign) FingerCaptureLivenessType livenessType;

/**
 * Specifies which hand is being scanned.
 */
@property (nonatomic, assign) BIOHand hand;

/**
 * Bitmask containing fingers marked as amputated.
 * Specifies which fingers are missing.
 */
@property (nonatomic, assign) BIOAmputatedFinger amputatedFingers;

/**
 * List of reference templates to be used in fast authentication mode
 */
@property (nonatomic, strong, nullable) NSArray<BIOTemplate *> *referenceTemplates;

/**
 * Threshold value:
 * - for one of the fast authentication modes,
 * - or for other modes with a capture quality verification mechanism turned on (when `maxNumberOfCaptures` is set to greater value than one).
 *
 * (default value is 3500)
 */
@property (nonatomic, assign) int threshold;

/**
 * If set to greater than one (default is 2), capture verification will be performed in order to ensure high quality images.
 * In such case, the `captureTimeout` parameter is relevant for every capture attempt, not the whole process.
 * Suggested number of captures for capture verification is 3.
 */
@property (nonatomic, assign) int maxNumberOfCaptures;

/**
 * For mode `FingerCaptureModeFourFingers` if a person have less then four fingers, because of some accident or amputation,
 * it's possible to set smaller number of fingers to scan.
 * For mode `FingerCaptureModeOneFinger` the value is set to 1, and changing the value won't take effect on the scanning.
 */
@property (nonatomic, assign) NSInteger numberOfFingers __attribute__((__unavailable__("As of release 4.30.0, replaced by 'amputatedFingers' bitmask.")));

/**
 * Property that defines if a camera should work in UHD/4K resolution.
 * If a camera doesn't support UHD/4K resolution, it'll be working in the best resolution it can.
 * It's disabled by default.
 */
@property (nonatomic) BOOL UHDResolutionEnabled __attribute__((deprecated("Experimental API")));

@end

NS_ASSUME_NONNULL_END
