/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, SCStoriesSnapViewCountInfo;

@interface SCStoriesSnapViewerListInfo : NSObject <NSCopying> {

	NSArray* _friendViewerList;
	NSArray* _otherViewerList;
	SCStoriesSnapViewCountInfo* _viewCount;

}

@property (nonatomic,copy,readonly) NSArray * friendViewerList;                          //@synthesize friendViewerList=_friendViewerList - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherViewerList;                           //@synthesize otherViewerList=_otherViewerList - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapViewCountInfo * viewCount;              //@synthesize viewCount=_viewCount - In the implementation block
-(id)initWithFriendViewerList:(id)arg1 otherViewerList:(id)arg2 viewCount:(id)arg3 ;
-(NSArray *)friendViewerList;
-(NSArray *)otherViewerList;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCStoriesSnapViewCountInfo *)viewCount;
@end

