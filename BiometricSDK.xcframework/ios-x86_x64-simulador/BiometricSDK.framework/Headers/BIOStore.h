//
//  BIOStore.h
//  BiometricSDK
//
//  Created by WASAG Kamil - EXT-REPERIO (MORPHO) on 05/05/2016.
//  Copyright © 2016 WASAG Kamil - EXT-REPERIO (MORPHO). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BiometricSDK/BIOTemplate.h>
#import <BiometricSDK/BIOUser.h>

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const BIOStoreErrorDomain;

/**
 * Class that handles the internal database.
 *
 * This database will save information on the device's persistant memory. Can be used when there is no other external database.
 *
 */
@interface BIOStore : NSObject

#pragma mark - Template methods

/**
 *  Add given biometric template to database.
 *
 *  @param bioTemplate       Template object that contain biometrics information to store in database
 *  @param completionHandler Block of code that will be run after insert template in database. It will return a UUID string or/and an error if occurred.
 */
+ (void)addTemplate:(BIOTemplate *)bioTemplate withCompletionHandler:(void(^ _Nullable)(NSString * _Nullable UUID, NSError * _Nullable error))completionHandler;

/**
 *  Method that updates a given template. UUID of template MUST be set in template
 *
 *  @param bioTemplate       Template to update. UUID of template MUST be the same as this in database
 *  @param completionHandler Block of code will be executed after finish updating. It will return udated BIOTemplate or/and error if any occurred.
 */
+ (void)updateTemplate:(BIOTemplate *)bioTemplate withCompletionHandler:(void (^ _Nullable)(BIOTemplate* _Nullable updatedTemplate, NSError * _Nullable error))completionHandler;


#pragma mark - Remove template

/**
 *  Method that remove from database BIOTemplate
 *
 *  @param UUID              NSString with UUID of BIOTemplate to delete
 *  @param completionHandler Block of code that will be executed after end of deletion process and return NSError if eny occurred
 */
+ (void)removeTemplateWithUUID:(NSString *)UUID withCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;


/**
 *  Method that remove all templates with given user UUID. User will not be deleted after executed this functin, only the BIOTemplates related to the user.
 *
 *  @param userUUID          UUID of user that BIOTemplates will be removed
 *  @param completionHandler Block of code that is called when removing operation ends.
 */
+ (void)removeTemplatesByUserUUID:(NSString *)userUUID withCompletionHandler:(void(^ _Nullable)(NSUInteger numberOfDeletedTemplates, NSError * _Nullable error))completionHandler;

#pragma mark - Templates getters
/**
 *  Method that return list of all BIOTemplates in database
 *
 *  @param completionHandler Block of code that is called when fething ends. 
 *          Return array of templates or error if occurred. In case where there is no BIOTemplates in database empty array will be returned.
 */
+ (void)listTemplatesWithCompletionHandler:(void(^ _Nullable)(NSArray<BIOTemplate *> * _Nullable templates,NSError * _Nullable error))completionHandler;


/**
 *  Method return BIOTemplates assosiated to user with given UUID
 *
 *  @param UUID              UUID of user that BIOTemplates will be returned
 *  @param completionHandler Block of code that will be executed when fetching end. It will return array of BIOTemplates associated to given user.
 *                           In case UUID was wrong or User has no template there will be empty array returned to block.
 */
+ (void)listTemplatesWithUserUUID:(NSString * _Nullable)UUID
            withCompletionHandler:(void(^ _Nullable)(NSArray<BIOTemplate *> * _Nullable templates, NSError * _Nullable error))completionHandler;

/**
 *  Method return BIOTemplates assosiated to user with given UUID and modality.
 *
 *  @param UUID              UUID of user that BIOTemplates will be returned
 *  @param biometricModality Modality of BIOTemplates to fetch
 *  @param completionHandler Block of code that will be executed when fetching end. It will return array of BIOTemplates or error if occurred.
 *                            If there is not BIOTemplate of given user with modality
 */

+ (void)listTemplatesWithUserUUID:(NSString *)UUID
                     withModality:(BIOModality) biometricModality
            withCompletionHandler:(void(^ _Nullable)(NSArray<BIOTemplate *> * _Nullable templates, NSError * _Nullable error))completionHandler;

/**
 *  Method return template for given UUID
 *
 *  @param UUID              UUID of template to return.
 *  @param completionHandler Block of code that will be called after operation complete. Return BIOTemplate or nil if template does not exist and/or error if occurred.
 */
+ (void)getTemplateWithUUID:(NSString *)UUID withCompletionHandler:(void(^ _Nullable)(BIOTemplate * _Nullable bioTemplate, NSError * _Nullable error))completionHandler;

/**
 *  Return User for given Template UUID
 *
 *  @param UUID              UUID of BIOTemplate that is assosiaded with user
 *  @param completionHandler Block of code that will be called when operation compet. Return User or nil if user does not exist and/or error if any occurred.
 */
+ (void)getTemplateOwnerWithTemplateUUID:(NSString *)UUID withCompletionHandler:(void(^ _Nullable)(BIOUser * _Nullable user, NSError * _Nullable error))completionHandler;

#pragma mark - User Methods

/**
 *  Method that add user to database
 *
 *  @param user              BIOUser to save in database
 *  @param completionHandler Block of code that will be called when operation complete. It return added user UUID or/and error if occurred.
 */
+ (void)addUser:(BIOUser *)user withCompletionHandler:(void(^ _Nullable)(NSString * _Nullable userUUID, NSError * _Nullable error))completionHandler;

/**
 *  Method that update given user from database
 *
 *  @param user              BIOUser to add
 *  @param completionHandler Callback that return UUID of added user or/and error if any occurred.
 */
+ (void)updateUser:(BIOUser *)user withCompletionHandler:(void(^ _Nullable)(NSString * _Nullable userUUID, NSError * _Nullable error))completionHandler;

/**
 *  Method that remove given user from database
 *
 *  @param user              BIOUser to remove
 *  @param completionHandler Callbac that return removed user UUID or/and error id occurred.
 */
+ (void)removeUser:(BIOUser *)user withCompletionHandler:(void(^ _Nullable)(NSString * _Nullable userUUID, NSError * _Nullable error))completionHandler;

/**
 *  Return user with given UUUID
 *
 *  @param userUUID          UUID user to find
 *  @param completionHandler Callback that return user or from database or nil if exists. Error will be returned if any occurred
 */
+ (void)getUser:(NSString *)userUUID withCompletionHandler:(void(^ _Nullable)(BIOUser * _Nullable user, NSError * _Nullable error))completionHandler;

/**
 *  Method return all users from database
 *
 *  @param completionHandler Callback that retyrn array of users or empty array if there is no user or/and error if occurred
 */
+ (void)listUsersWithCompletionHandler:(void(^ _Nullable)(NSArray<BIOUser *> * _Nullable users, NSError * _Nullable error))completionHandler;


#pragma mark - Data base opertations

/**
 *  Method that save Database context should be called every time app go to backround or will be closed
 */
+ (void)saveContext;


/**
 * Method that remove all records from database
 */
+ (void)clearDatabaseWithCompletionHandler:(void(^ _Nullable)(NSError * _Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
