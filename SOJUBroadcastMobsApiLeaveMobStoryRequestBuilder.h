/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface SOJUBroadcastMobsApiLeaveMobStoryRequestBuilder : NSObject {

	NSString* _timestamp;
	NSString* _reqToken;
	NSString* _username;
	NSString* _idValue;
	NSNumber* _isBlock;

}
+(id)withJUBroadcastMobsApiLeaveMobStoryRequest:(id)arg1 ;
-(id)setIdValue:(id)arg1 ;
-(id)setReqToken:(id)arg1 ;
-(id)setIsBlockValue:(BOOL)arg1 ;
-(id)setIsBlock:(id)arg1 ;
-(id)setTimestamp:(id)arg1 ;
-(id)build;
-(id)setUsername:(id)arg1 ;
@end

