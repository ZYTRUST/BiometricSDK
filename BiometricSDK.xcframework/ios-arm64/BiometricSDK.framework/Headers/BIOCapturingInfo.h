//
//  BIOCapturingInfo.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 06/04/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 *   Type of flags which are returned as information what action a user should do to capture the image.
 */
typedef int BIOCapturingInfo;

/**
 *  Flag is send whenever a user must come back in the camera field
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoComeBackField;

/**
 *  Flag is send whenever a user must turn head left
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoTurnLeft;

/**
 * Flag is send whenever a user must face center but turn head left
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterTurnLeft;

/**
 * Flag is send whenever a user must face center but turn head right
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterTurnRight;

/**
 * Flag is send whenever a user must face center but rotate head down
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterRotateDown;

/**
 * Flag is send whenever a user must face center but rotate head up
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterRotateUp;

/**
 * Flag is send whenever a user must face center but tilt head left
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterTiltLeft;

/**
 * Flag is send whenever a user must face center but tilt head right
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterTiltRight;

/**
 * Flag is send whenever a user must move foreward to camera
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterMoveForwards;

/**
 * Flag is send whenever a user must move backward from camera;
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterMoveBackwards;

/**
 * Flag is send whenever a user turns the head too fast
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoTooFast;

/**
 * Flag is send whenever a user has a good position.
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterGood;

/**
 * Flag is send whenever a user should not move.
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoDontMove;

/**
 * Flag is send whenever a user should try complete CR2D challenge.
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoChallenge2D;

/**
 * Flag is send whenever a user should stand still.
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoStandStill;

/**
 * Flag is sent whenever user is moving the device instead of his head.
 */
extern const BIOCapturingInfo BIOCapturingInfoDeviceMovementDetected;

/**
 * Flag is sent when user stopped moving the device.
 */
extern const BIOCapturingInfo BIOCapturingInfoDeviceMovementEnded;

/**
 * Flag is sent whenever user is not moving his head at all.
 */
extern const BIOCapturingInfo BIOCapturingInfoNoFaceMovementDetected;

/**
 * Function translate BIOCapturingInfo to english strings
 */
NSString * NSStringFromBIOCapturingInfo(BIOCapturingInfo faceRequest);

NS_ASSUME_NONNULL_END
