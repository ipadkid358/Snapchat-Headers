/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCAvatarViewModel, NSString;

@interface SCProfileIdentityCarouselStoryAvatarViewModel : NSObject <NSCopying> {

	BOOL _canShowStory;
	BOOL _isStoryMuted;
	BOOL _isStoryReplayable;
	SCAvatarViewModel* _avatarViewModel;
	NSString* _friendUsername;
	NSString* _groupId;

}

@property (nonatomic,copy,readonly) SCAvatarViewModel * avatarViewModel;              //@synthesize avatarViewModel=_avatarViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendUsername;                        //@synthesize friendUsername=_friendUsername - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupId;                               //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,readonly) BOOL canShowStory;                                     //@synthesize canShowStory=_canShowStory - In the implementation block
@property (nonatomic,readonly) BOOL isStoryMuted;                                     //@synthesize isStoryMuted=_isStoryMuted - In the implementation block
@property (nonatomic,readonly) BOOL isStoryReplayable;                                //@synthesize isStoryReplayable=_isStoryReplayable - In the implementation block
-(BOOL)isStoryMuted;
-(NSString *)friendUsername;
-(SCAvatarViewModel *)avatarViewModel;
-(id)initWithAvatarViewModel:(id)arg1 friendUsername:(id)arg2 groupId:(id)arg3 canShowStory:(BOOL)arg4 isStoryMuted:(BOOL)arg5 isStoryReplayable:(BOOL)arg6 ;
-(BOOL)canShowStory;
-(BOOL)isStoryReplayable;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupId;
@end

