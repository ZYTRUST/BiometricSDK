//
//  UIImage+Resize.h
//  BiometricSDK
//
//  Created by BABU Kiran on 06/12/2017.
//  Copyright © 2017 MORPHO. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, UseCase) {
    BIOMETRIC,
    DOCUMENT
};
typedef NS_ENUM(NSUInteger, DocumentType) {
    SELFIE,
    ID1,
    ID2,
    ID3
};

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Resize)

/**
 * Method that resize UIImage
 * @param useCase The use case
 * @param documentType The type of document
 * @param isCropped True the document has been cropped, false otherwise
 * @return An image scaled to the proper format depending of the input parameters
 */
- (UIImage *)resizeUIImagewithDocumentType:(DocumentType)documentType useCase:(UseCase)useCase isCropped:(BOOL)isCropped;

@end

NS_ASSUME_NONNULL_END
