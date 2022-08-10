//
//  BIOMatcherHandlerError.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 29/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const BIOMatcherHandlerErrorDomain;

typedef uint8_t BIOMatcherHandlerError;

/**
 * Code that inform that error not occur
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorOK;

/**
 *  Infvalid prameter was passed to function
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorInvalidParameter;

/**
 *  License is not valid
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorLicense;

/**
 *  Memory allocation error
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorAllocation;

/**
 *  Called functionality is not avalilable
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorActionNotAvailable;

/**
 *  Invalid status of operatoin occurred
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorInvalidState;

/**
 *  Invalid index of array
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorInvalidIndex;

/**
 *  The input image structure is invalid
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorInvalidImage;

/**
 *  Unknown error occur
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorUnknown;

/**
 *  Error during init occur
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorInit;


/**
 *  Minutiea extractor specific error
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorMinutiaeExtractor;

/**
 *  Template conversion error
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorTemplsteConverter;

/**
 *  Matcher error
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorMatcher;

/**
 *   Invalid template (the template is not correctly formatted or the supplied data buffer is corrupted)
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorInvalidTemplsteError;

/**
 *  Invalid template format
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorInvalidTemplateFormat;

/**
 *  Invalid item
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorInvalidItem;

/**
 *  Subbase not created
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorSubbaseNotCreated;

/**
 *  Iris excrator error
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorIrisExtractor;

/**
 *  Face extractor error
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorFaceExtractor;

/**
 *  Multiprotect error
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorMultiprot;

/**
 *  Multiprotect error: Licence not present
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorMultiprotNoLicense;

/**
 * No algorithm available to load
 */
const extern BIOMatcherHandlerError BIOMatcherHandlerErrorAlgorithmPluginIssue;

/**
 *  Method that return string representation for given error code.
 *
 *  @param error Code for which string representation
 *
 *  @return String representation of error code. All stirng are in English
 */
NSString * NSStringFromBIOMatcherHandlerError(BIOMatcherHandlerError error);

NS_ASSUME_NONNULL_END
