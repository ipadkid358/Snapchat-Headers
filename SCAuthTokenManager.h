/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCQueuePerformer, NSString;

@interface SCAuthTokenManager : NSObject {

	SCQueuePerformer* _performer;
	NSString* _currentToken;

}

@property (copy) NSString * currentToken;              //@synthesize currentToken=_currentToken - In the implementation block
+(id)path;
+(id)shared;
-(void)_loadAuthToken;
-(void)migrateFrom:(id)arg1 ;
-(void)setFromResponse:(id)arg1 ;
-(void)setCurrentToken:(NSString *)arg1 ;
-(void)_persistCurrentToken;
-(BOOL)_writeCurrentTokenToArchive;
-(void)_writeCurrentTokenToKeychain;
-(id)_readFromArchive;
-(id)_readFromKeychain;
-(id)init;
-(void)clear;
-(id)authToken;
-(NSString *)currentToken;
@end

