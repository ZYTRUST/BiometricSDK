//
//  BIOOrientation.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 26/07/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  @author Morpho
 *
 *  @brief Type for define orientation of camera orintation
 */
typedef int BIOOrientation;

/**
 *  @author Morpho
 *
 *  @brief Device is oriented vertically up. Ear speaker on the top - Default -
 */
const extern BIOOrientation BIOOrientationPortrait;

/**
 *  @author Morpho
 *
 *  @brief Device is oriented vertically upside down. Ear speaker on the bottom.
 */
const extern BIOOrientation BIOOrientationUpSideDown;

/**
 *  @author Morpho
 *
 *  @brief Device is oriented horizontally left. Ear speaker on the left, home button on the right.
 */
const extern BIOOrientation BIOOrientationLandscapeLeft;

/**
 *  @author Morpho
 *
 *  @brief Device is oriented horizontally right. Ear speaker on the right, home button on the left.
 */
const extern BIOOrientation BIOOrientationLandscapeRight;

/**
 *  @author Morpho
 *
 *  @brief Orientation of preview is autmatically set to defice orientation
 */
const extern BIOOrientation BIOOrientationAuto;
