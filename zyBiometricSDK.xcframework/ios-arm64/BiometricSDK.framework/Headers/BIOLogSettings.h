//
//  BIOLogSettings.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 07/11/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  @author Morpho
 *
 *  @brief Object contains information about loging diagnostic information in text format
 */
@interface BIOLogSettings : NSObject


/**
 *  @author Morpho
 *
 *  @brief property determine if saving text diagnotic information are saving to text file
 */
@property (nonatomic, getter=isDumpFileEnable) BOOL dumpFileEnable;

/**
 *  @author Morpho
 *
 *  @brief Path to folder where information will be stored. If nil BIOSDK will dump info to documents folder
 */
@property (nonatomic, strong, nullable) NSString* dumpFileFolder;

@end

NS_ASSUME_NONNULL_END
