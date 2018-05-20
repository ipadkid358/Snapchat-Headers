/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCFriendsFeedActiveMessageData, SCFriendsFeedEntity, SCFriendsFeedStory, NSArray;

@interface SCFriendsFeedItem : NSObject <NSCopying> {

	NSString* _feedId;
	SCFriendsFeedActiveMessageData* _activeMessageData;
	SCFriendsFeedEntity* _entity;
	SCFriendsFeedStory* _story;
	NSArray* _serverSignals;

}

@property (nonatomic,copy,readonly) NSString * feedId;                                               //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,copy,readonly) SCFriendsFeedActiveMessageData * activeMessageData;              //@synthesize activeMessageData=_activeMessageData - In the implementation block
@property (nonatomic,copy,readonly) SCFriendsFeedEntity * entity;                                    //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy,readonly) SCFriendsFeedStory * story;                                      //@synthesize story=_story - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serverSignals;                                         //@synthesize serverSignals=_serverSignals - In the implementation block
-(SCFriendsFeedStory *)story;
-(NSArray *)serverSignals;
-(id)initWithFeedId:(id)arg1 activeMessageData:(id)arg2 entity:(id)arg3 story:(id)arg4 serverSignals:(id)arg5 ;
-(SCFriendsFeedActiveMessageData *)activeMessageData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)feedId;
-(SCFriendsFeedEntity *)entity;
@end
