/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:59 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString;

@interface MLBRpcError : GPBMessage

@property (nonatomic,copy) NSString * errorCode; 
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (nonatomic,copy) NSString * description_p; 
@property (assign,nonatomic) BOOL hasDescription_p; 
@property (assign,nonatomic) unsigned line; 
@property (assign,nonatomic) BOOL hasLine; 
@property (nonatomic,copy) NSString * function; 
@property (assign,nonatomic) BOOL hasFunction; 
@property (nonatomic,copy) NSString * file; 
@property (assign,nonatomic) BOOL hasFile; 
+(id)descriptor;
@end

