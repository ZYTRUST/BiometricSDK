//
//  IBIOGenericCaptureHandler.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 23/05/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BiometricSDK/BIOCamera.h>
#import <BiometricSDK/BIOTorch.h>
#import <BiometricSDK/BIOOverlay.h>
#import <BiometricSDK/BIOOrientation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BIOGenericCaptureHandler <NSObject>

- (dispatch_queue_t)dispatchQueue;

#pragma mark - preview
/**
 * This is the image view where preview from camera streem will be dispalyed.
 *
 * This property can be set after initialisation or calling startPreview. It also can stay set to nil.
 */
@property (weak, nonatomic, nullable) IBOutlet UIImageView *preview;

/**
 * Returns true if capture is started.
 */
@property (nonatomic, readonly) BOOL isCaptureInProgress;

/**
 *  Method that starts proces of capturing face/iris/fingerprint biometic data.
 *  It will close previous capture process.
 *  Previewing does not need to be set.
 *
 * @warning Needs to be called in main thread.
 *
 * @param completionHandler completion handler that is called at the end of function and return error if any occuerd.
 */
- (void)startCaptureWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;


/**
 *  Method that stops capturing process.
 *
 * @warning Needs to be called in main thread.
 *
 * @param completionHandler handler that will be executed when method ends and return error if any occured.
 */
- (void)stopCaptureWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable))completionHandler;


/**
 *  Method that changes camera source (front/back).
 *
 * @param camera Parmeter that describes which camera should be used to captured.
 * @param error return information if error ocurr during operation
 */
- (void)switchCamera:(BIOCamera)camera withError:(NSError * _Nullable __autoreleasing * _Nullable)error;

/**
 * Method that turn on/off flash light on device.
 *
 * @warning Works only with rear camera, with front camera does nothing
 *
 * @param torch Parameter that tell if camera shoul be turn off or on.
 * @param error return information if error ocurr during operation
 */
- (void)setTorch:(BIOTorch)torch withError:(NSError * _Nullable __autoreleasing * _Nullable)error;


/**
 * Method that turn ON/OFF overlay over biometrics
 *
 * @param overlay Determines if overlay should be on or off.
 * @param error return information if error ocurr during operation
 */
- (void)setOverlay:(BIOOverlay)overlay withError:(NSError * _Nullable __autoreleasing * _Nullable)error;

/**
 * Method that destroy session.
 *
 * @warning It not dealocate BCBioCaptureHandler. After calling  destroy you can call  captureWithOptions:withCompletionHandler:
 *
 * @warning Needs to be called in main thread.
 */
- (void)destroy;

/**
 *  @author Morpho
 *
 *  @brief Method that set orientation of preview in MSC
 *
 *  @param orientation Exprcted orientation of capturing
 *  @param error       NSError if any occured otherwise nil
 */
- (void)setOrientation:(BIOOrientation)orientation withError:(NSError * _Nullable __autoreleasing * _Nullable)error;



/**
 *  @author Morpho
 *
 *  @brief  Method that starts replaying previously recorded files.
 *
 *  @warning    This method is only used for testing purposes.
 *
 *  @param  path     path to the file to be replayed
 *  @param  error    NSError if any occrured otherwise nil
 */
- (void)startReplayingFile:(NSString *)path withError:(NSError * _Nullable __autoreleasing * _Nullable)error;

/**
 * Method that stops replaying previously recorded file.
 *
 * @param error return information if error ocurr during operation
 */
- (void)stopReplayingWithError:(NSError * _Nullable __autoreleasing * _Nullable)error;

/**
 @author Morpho
 
 @brief Method to record a partial dump video file to the provided path.
 
 @warning   This method is only used for testing purposes.

 @param error NSError if any occured otherwise nil
 */
- (void)requestPartialDumpVideoWithError:(NSError * _Nullable __autoreleasing * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
