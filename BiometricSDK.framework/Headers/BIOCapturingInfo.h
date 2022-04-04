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

extern const BIOCapturingInfo BIOCapturingInfoUndefined;

/**
 *  Flag is send whenever a user must get out of the camera field
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoGetOutField;

/**
 *  Flag is send whenever a user must come back in the camera field
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoComeBackField;

/**
 *  Flag is send whenever a user must turn head left
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoTurnLeft;

/**
 * Flag is send whenever a user must turn head right
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoTurnRight;

/**
 * Flag is send whenever a user must turn head down.
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoTurnDown;

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
 * Flag is send whenever a user blocked with unsuccesful attemts
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoTimeOut;

/**
 * Flag is send whenever a user must move foreward to camera
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterMoveForwards;

/**
 * Flag is send whenever a user unsuccesful attemts
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoUnsuccessfulAttempt;

/**
 * Flag is send whenever a user must move backward from camera;
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterMoveBackwards;

/**
 * Flag is send whenever a user must look in front of camera;
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterLookFrontOfCamera;

/**
 *Flag is send whenever a user must look camera with less movement
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoCenterLookCameraWithLessMovement;

/**
 * Flag is send whenever a user must turn head left and then right
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoTurnLeftRight;

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
 * Flag is sent whenever a user should move to brighter area, because exposure is too dark.
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoMoveBrighterArea;

/**
 * Flag is sent whenever a user should move to darker area, because exposure is too bright.
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoMoveDarkerArea;

/**
 * Flag is send whenever a user should stand still.
 */
extern const BIOCapturingInfo BIOCapturingInfoFaceInfoStandStill;

/**
 * Flag is sent whenever user is moving the device instead of his head.
 */
extern const BIOCapturingInfo BIOCapturingInfoDeviceMovementDetected;

/**
 * Flag is sent whenever user is not moving his head at all.
 */
extern const BIOCapturingInfo BIOCapturingInfoNoFaceMovementDetected;

/**
 * Function translate BIOCapturingInfo to english strings
 */
NSString * NSStringFromBIOCapturingInfo(BIOCapturingInfo faceRequest);

NS_ASSUME_NONNULL_END
