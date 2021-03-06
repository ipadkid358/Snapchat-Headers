/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCFriendsFeedOpenCameraActionData : NSObject <NSCopying> {

	BOOL _isBirthday;
	BOOL _isDoubleTap;
	BOOL _isGroupChat;
	NSString* _conversationId;
	unsigned long long _source;

}

@property (nonatomic,copy,readonly) NSString * conversationId;              //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,readonly) BOOL isBirthday;                             //@synthesize isBirthday=_isBirthday - In the implementation block
@property (nonatomic,readonly) BOOL isDoubleTap;                            //@synthesize isDoubleTap=_isDoubleTap - In the implementation block
@property (nonatomic,readonly) BOOL isGroupChat;                            //@synthesize isGroupChat=_isGroupChat - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                   //@synthesize source=_source - In the implementation block
-(id)initWithConversationId:(id)arg1 isBirthday:(BOOL)arg2 isDoubleTap:(BOOL)arg3 isGroupChat:(BOOL)arg4 source:(unsigned long long)arg5 ;
-(BOOL)isDoubleTap;
-(BOOL)isGroupChat;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)source;
-(NSString *)conversationId;
-(BOOL)isBirthday;
@end

