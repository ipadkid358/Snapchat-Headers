/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCFriendsFeedOpenCameraActionData;

@interface SCFriendsFeedOpenMiniProfileActionData : NSObject <NSCopying> {

	BOOL _isGroupChat;
	NSString* _feedId;
	SCFriendsFeedOpenCameraActionData* _openCameraActionData;

}

@property (nonatomic,copy,readonly) NSString * feedId;                                                     //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,readonly) BOOL isGroupChat;                                                           //@synthesize isGroupChat=_isGroupChat - In the implementation block
@property (nonatomic,copy,readonly) SCFriendsFeedOpenCameraActionData * openCameraActionData;              //@synthesize openCameraActionData=_openCameraActionData - In the implementation block
-(BOOL)isGroupChat;
-(id)initWithFeedId:(id)arg1 isGroupChat:(BOOL)arg2 openCameraActionData:(id)arg3 ;
-(SCFriendsFeedOpenCameraActionData *)openCameraActionData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)feedId;
@end
