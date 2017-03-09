//
//  CreateReleaseNumberInput.h
//  Message360
//
//  This file was automatically generated for message360 by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_CREATERELEASENUMBERINPUT
#define APIMATIC_CREATERELEASENUMBERINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol CreateReleaseNumberInput
@end

@interface CreateReleaseNumberInput : NSObject

/**
* Phone number to be relase
*/
@property NSString* phoneNumber;

/**
* Response type format xml or json
*/
@property NSString* responseType;

@end
#endif