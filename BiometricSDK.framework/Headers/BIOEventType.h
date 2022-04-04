//
//  BIOEventType.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 26/07/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#ifndef BIOEventType_h
#define BIOEventType_h

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BIOEventType) {
    BIOEventTypeLicenseManagerHandlerCreation,
    BIOEventTypeLicenseManagerHandlerDestroy,
    BIOEventTypeLicenseCheck,
    BIOEventTypeLicenseCreation,
    BIOEventTypeLicenseRemove,
    BIOEventTypeLicenseActivate,
    BIOEventTypeLicenseValidation,
    BIOEventTypeBIOCaptureHandlerCreation,
    BIOEventTypeBIOCaptureHandlerDestroy,
    BIOEventTypeBIOMatcherHandlerCreation,
    BIOEventTypeBIOMatcherHandlerDestroy,
    BIOEventTypeDocumentCaptureHandlerCreation,
    BIOEventTypeDocumentCaptureHandlerDestroy,
    BIOEventTypeStartCapture,
    BIOEventTypeStopCapture,
    BIOEventTypeStartPreview,
    BIOEventTypeStopPreview,
    BIOEventTypeBiometricCapture,
    BIOEventTypeBiometricDetection,
    BIOEventTypeInfoFeedback,
    BIOEventTypeAuthentication,
    BIOEventTypeFastAuthentication,
    BIOEventTypeIdentification,
    BIOEventTypeDocumentImageCapture,
    BIOEventTypeDocumentFieldImageCapture,
    BIOEventTypeDocumentMRZCapture,
    BIOEventTypeDocumentQRCodeCapture,
    BIOEventTypeDocumentInfoFeedback,
    BIOEventTypeForceCapture,
    BIOEventTypeMFACSFaceAnalytics,
    BIOEventTypeCompression,
};

NSString * NSStringFromBIOEventType(BIOEventType type);
BIOEventType BIOEventTypeFromNSString(NSString *str, NSError * _Nullable __autoreleasing * _Nullable error);

NS_ASSUME_NONNULL_END

#endif /* BIOEventType_h */
