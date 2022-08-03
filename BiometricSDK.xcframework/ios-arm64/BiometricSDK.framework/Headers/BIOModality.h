//
//  BIOModality.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 06/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

/**
 *  Type of flags describes modality of biometric data.
 */
typedef int32_t BIOModality;

/**
 *  Flag to describe that biometric modality is unknown.
 */
const extern BIOModality BIOModalityUnknown;

/**
 *  Flag to describe that biometric modality is iris.
 */
const extern BIOModality BIOModalityIris;

/**
 *  Flag to describe that biometric modality is face.
 */
const extern BIOModality BIOModalityFace;

/**
 *  Flag to describe that biometric modality is Friction ridge biometric (fingerprint, palmprint).
 */
const extern BIOModality BIOModalityFrictionRidge;

NSString * _Nonnull NSStringFromBIOModality(BIOModality bioModality);
