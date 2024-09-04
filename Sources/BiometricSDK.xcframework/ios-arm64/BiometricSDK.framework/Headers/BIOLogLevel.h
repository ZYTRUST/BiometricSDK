//
//  BIOLogLevel.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 18/07/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 *  @author Morpho
 *
 *  @brief Type that used to configure
 */
typedef int BIOLogLevel;


/**
 *  @author Morpho
 *
 *  @brief Debug message
 */
const extern BIOLogLevel BIOLogLevelDebug;

/**
 *  @author Morpho
 *
 *  @brief Info message
 */
const extern BIOLogLevel BIOLogLevelInfo;

/**
 *  @author Morpho
 *
 *  @brief Warining message
 */
const extern BIOLogLevel BIOLogLevelWarning;

/**
 *  @author Morpho
 *
 *  @brief Error message
 */
const extern BIOLogLevel BIOLogLevelError;

/**
 *  @author Morpho
 *
 *  @brief Turn off logging
 */
const extern BIOLogLevel BIOLogLevelNone;


NSString * NSStringFromBIOLogLevel(BIOLogLevel logLevel);

NS_ASSUME_NONNULL_END
