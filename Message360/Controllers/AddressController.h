//
//  AddressController.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"
#import "CreateViewAddressInput.h"
#import "CreateListAddressInput.h"
#import "CreateVerifyAddressInput.h"
#import "CreateDeleteAddressInput.h"
#import "CreateAddressInput.h"

@interface AddressController : BaseController

/**
* Completion block definition for asynchronous call to View Address */
typedef void (^CompletedPostViewAddress)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* View Address Specific address Book by providing the address id
* @param  CreateViewAddressInput     Object with all parameters
*/
- (void) createViewAddressAsyncWithCreateViewAddressInput:(CreateViewAddressInput*) input
                completionBlock:(CompletedPostViewAddress) onCompleted;

/**
* Completion block definition for asynchronous call to List Address */
typedef void (^CompletedPostListAddress)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* List All Address 
* @param  CreateListAddressInput     Object with all parameters
*/
- (void) createListAddressAsyncWithCreateListAddressInput:(CreateListAddressInput*) input
                completionBlock:(CompletedPostListAddress) onCompleted;

/**
* Completion block definition for asynchronous call to Verify Address */
typedef void (^CompletedPostVerifyAddress)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Validates an address given.
* @param  CreateVerifyAddressInput     Object with all parameters
*/
- (void) createVerifyAddressAsyncWithCreateVerifyAddressInput:(CreateVerifyAddressInput*) input
                completionBlock:(CompletedPostVerifyAddress) onCompleted;

/**
* Completion block definition for asynchronous call to Delete Address */
typedef void (^CompletedPostDeleteAddress)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* To delete Address to your address book
* @param  CreateDeleteAddressInput     Object with all parameters
*/
- (void) createDeleteAddressAsyncWithCreateDeleteAddressInput:(CreateDeleteAddressInput*) input
                completionBlock:(CompletedPostDeleteAddress) onCompleted;

/**
* Completion block definition for asynchronous call to CreateAddress */
typedef void (^CompletedPostCreateAddress)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* To add an address to your address book, you create a new address object. You can retrieve and delete individual addresses as well as get a list of addresses. Addresses are identified by a unique random ID.
* @param  CreateAddressInput     Object with all parameters
*/
- (void) createAddressAsyncWithCreateAddressInput:(CreateAddressInput*) input
                completionBlock:(CompletedPostCreateAddress) onCompleted;

@end