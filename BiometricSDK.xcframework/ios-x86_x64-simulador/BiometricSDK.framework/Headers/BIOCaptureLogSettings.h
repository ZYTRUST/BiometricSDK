//
//  BIOCaptureLogSettings.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 07/11/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import "BIOLogSettings.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  @author Morpho
 *
 *  @brief Object contains information about loging diagnostic information about capture to files. BIOSDK can save text log and preview from camera.
 */
@interface BIOCaptureLogSettings : BIOLogSettings

/**
 *  @author Morpho
 *
 *  @brief Floder where video will be saved. Video will be saved in default document folder
 */
@property (nonatomic, strong, nullable) NSString *videoRecordFolder;


/**
 *  @author Morpho
 *
 *  @brief Property determine if video recording is enabled.
 */
@property (nonatomic, getter=isVideoRecordEnable) BOOL videoRecordEnable;

/**
 *  @author Morpho
 *
 *  @brief Property determine if partial dump recording is enabled.
 *  @warning Needs to be enabled before capturing.
 */
@property (nonatomic, getter=isPartialDumpVideoRecordEnable) BOOL partialDumpVideoRecordEnable;

/**
 *  @author Morpho
 *
 *  @brief Folder where partial dump records will be saved. If nil, it will be saved in default document folder.
 */
@property (nonatomic, strong, nullable) NSString *partialDumpVideoRecordFolder;

/**
 *  @author Morpho
 *
 *  @brief Property determine if metadata recording is enabled.
 */
@property (nonatomic, getter=isDumpMetadataEnable) BOOL dumpMetadataEnable;

/**
 *  @author Morpho
 *
 *  @brief Folder where metadata will be saved. If nil, it will be saved in default document folder.
 */
@property (nonatomic, strong, nullable) NSString *dumpMetadataFolder;

@end

NS_ASSUME_NONNULL_END
