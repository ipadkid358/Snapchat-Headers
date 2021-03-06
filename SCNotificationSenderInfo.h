/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCNotificationSenderInfo : NSObject {

	NSString* _username;
	NSString* _userId;
	NSString* _displayName;
	NSString* _avatarId;
	NSString* _selfieId;

}

@property (nonatomic,readonly) NSString * username;                 //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * userId;                   //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * avatarId;                 //@synthesize avatarId=_avatarId - In the implementation block
@property (nonatomic,readonly) NSString * selfieId;                 //@synthesize selfieId=_selfieId - In the implementation block
-(NSString *)avatarId;
-(id)initWithSenderUsername:(id)arg1 userId:(id)arg2 displayName:(id)arg3 ;
-(NSString *)selfieId;
-(NSString *)displayName;
-(NSString *)userId;
-(NSString *)username;
@end

