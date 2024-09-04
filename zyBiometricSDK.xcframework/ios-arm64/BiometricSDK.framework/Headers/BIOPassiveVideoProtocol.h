//
//  BIOPassiveVideoProtocol.h
//  BiometricSDK
//
//  Created by SZEWCZYK Konrad on 1/27/22.
//  Copyright © 2022 MORPHO. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BIOPassiveVideoProtocol <NSObject>
@optional
/**
 * Method that is triggered when BIOFaceCaptureHandler receive info update about Passive Video Liveness starts preparation.
 */
- (void)passiveVideoPreparationDidStart;

/**
 * Method that is triggered when BIOFaceCaptureHandler receive info update about Passive Video Liveness ends preparation.
 */
- (void)passiveVideoPreparationDidEnd;

/**
 * Method that is triggered when BIOFaceCaptureHandler receive any info update about update for passive video overlay.
 *
 * @param overlaySize size of the overlay, if error `CGSize.zero`
 * @param position position of the overlay, if error `CGPoint.zero`
 * @param error error if something was wrong otherwise `nil`.
 */
- (void)passiveVideoOverlayDidUpdate:(CGSize)overlaySize andPosition:(CGPoint)position orError:(NSError *)error;

/**
 * Method that is triggered when BIOFaceCaptureHandler receive any info update about progress for passive video liveness check.
 *
 * @param progress progress of the passive video check, if error `0`
 * @param error error if something was wrong otherwise `nil`.
 */
- (void)passiveVideoProgressDidUpdate:(CGFloat)progress orError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
