//
//  BIOLocation.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 06/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

/**
 *  Type of flags that give informations about location of biometrics data.
 */
typedef int32_t BIOLocation;

/**
 *   Flag is set if biometric is iris unknown.
 */
extern const BIOLocation BIOLocationIrisUnknown;

/**
 *   Flag is set if biometric is iris right
 */
extern const BIOLocation BIOLocationIrisRight;

/**
 *   Flag is set if biometric is left iris
 */
extern const BIOLocation BIOLocationIrisLeft;

/**
 *   Flag is set if biometric is face
 */
extern const BIOLocation BIOLocationFaceFrontal;

/**
 *   Flag is set if biometric is right index finger
 */
extern const BIOLocation BIOLocationFingerRightIndex;

/**
 *   Flag is set if biometric is right middle finger
 */
extern const BIOLocation BIOLocationFingerRightMiddle;

/**
 *   Flag is set if biometric is right ring finger
 */
extern const BIOLocation BIOLocationFingerRightRing;

/**
 *   Flag is set if biometric is right little finger
 */
extern const BIOLocation BIOLocationFingerRightLittle;

/**
 *   Flag is set if biometric is left index finger
 */
extern const BIOLocation BIOLocationFingerLeftIndex;

/**
 *   Flag is set if biometric is left middle finger
 */
extern const BIOLocation BIOLocationFingerLeftMiddle;

/**
 *   Flag is set if biometric is left ring finger
 */
extern const BIOLocation BIOLocationFingerLeftRing;

/**
 *   Flag is set if biometric is left little finger
 */
extern const BIOLocation BIOLocationFingerLeftLittle;

/**
 *   Flag is set if biometric is unknown finger
 */
extern const BIOLocation BIOLocationFingerUnknown;

/**
 *   Flag is set if biometric is left hand
 */
extern const BIOLocation BIOLocationHandLeft;

/**
 *   Flag is set if biometric is right hand
 */
extern const BIOLocation BIOLocationHandRight;

/**
 *   Flag is set if biometric is unknown hand
 */
extern const BIOLocation BIOLocationHandUnknown;

/**
 *   Flag is set if biometric is unknown
 */
extern const BIOLocation BIOLocationUnknown;

NSString * _Nonnull NSStringFromBIOLocation(BIOLocation bioLocation);
