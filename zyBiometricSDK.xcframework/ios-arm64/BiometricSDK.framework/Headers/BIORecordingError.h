//
//  BIORecordingError.h
//  BiometricSDK
//
//  Created by RIBEIRO Tiago on 06/04/17.
//  Copyright © 2017 MORPHO. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const BIORecordingErrorDomain;

typedef int BIORecordingError;

extern const BIORecordingError BIORecordingErrorSuccess;
extern const BIORecordingError BIORecordingErrorUnknown;
extern const BIORecordingError BIORecordingErrorOutOfMemory;
extern const BIORecordingError BIORecordingErrorInvalidArguments;
extern const BIORecordingError BIORecordingErrorIncompatibleAPI;
extern const BIORecordingError BIORecordingErrorStreamNotFound;
extern const BIORecordingError BIORecordingErrorStreamAlreadyLinked;
extern const BIORecordingError BIORecordingErrorStreamNoMoreSlot;
extern const BIORecordingError BIORecordingErrorStreamNotCompatible;
extern const BIORecordingError BIORecordingErrorStreamEnd;
extern const BIORecordingError BIORecordingErrorFileNotFound;
extern const BIORecordingError BIORecordingErrorIOError;
extern const BIORecordingError BIORecordingErrorBADFile;
extern const BIORecordingError BIORecordingErrorIncompatibleFile;
extern const BIORecordingError BIORecordingErrorVideoStreamCodecNotSupported;
extern const BIORecordingError BIORecordingErrorParameterStreamNotSupported;
extern const BIORecordingError BIORecordingErrorParameterStreamFieldNotMapped;
extern const BIORecordingError BIORecordingErrorImageStreamCodecNotSupported;
extern const BIORecordingError BIORecordingErrorStatusInvalid;

NSString * NSStringFromBIORecordingError(BIORecordingError error);

NS_ASSUME_NONNULL_END
