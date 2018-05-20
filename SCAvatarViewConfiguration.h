/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, Friend, SCAvatarViewModel;

@interface SCAvatarViewConfiguration : NSObject {

	BOOL _canShowStory;
	BOOL _isStoryMuted;
	BOOL _isStoryReplayable;
	NSString* _friendUsername;
	Friend* _aFriend;
	NSString* _groupId;
	long long _borderStyle;
	SCAvatarViewModel* _avatarViewModel;

}

@property (nonatomic,readonly) NSString * friendUsername;                        //@synthesize friendUsername=_friendUsername - In the implementation block
@property (nonatomic,readonly) Friend * aFriend;                                 //@synthesize aFriend=_aFriend - In the implementation block
@property (nonatomic,readonly) NSString * groupId;                               //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,readonly) BOOL canShowStory;                                //@synthesize canShowStory=_canShowStory - In the implementation block
@property (nonatomic,readonly) BOOL isStoryMuted;                                //@synthesize isStoryMuted=_isStoryMuted - In the implementation block
@property (nonatomic,readonly) BOOL isStoryReplayable;                           //@synthesize isStoryReplayable=_isStoryReplayable - In the implementation block
@property (nonatomic,readonly) long long borderStyle;                            //@synthesize borderStyle=_borderStyle - In the implementation block
@property (nonatomic,readonly) SCAvatarViewModel * avatarViewModel;              //@synthesize avatarViewModel=_avatarViewModel - In the implementation block
-(BOOL)isStoryMuted;
-(NSString *)friendUsername;
-(SCAvatarViewModel *)avatarViewModel;
-(BOOL)canShowStory;
-(BOOL)isStoryReplayable;
-(id)initWithFriendUsername:(id)arg1 avatarViewModel:(id)arg2 canShowStory:(BOOL)arg3 isStoryMuted:(BOOL)arg4 isStoryReplayable:(BOOL)arg5 borderStyle:(long long)arg6 ;
-(id)initWithGroupId:(id)arg1 avatarViewModel:(id)arg2 canShowStory:(BOOL)arg3 isStoryMuted:(BOOL)arg4 isStoryReplayable:(BOOL)arg5 borderStyle:(long long)arg6 ;
-(id)initWithFriend:(id)arg1 avatarViewModel:(id)arg2 canShowStory:(BOOL)arg3 isStoryMuted:(BOOL)arg4 isStoryReplayable:(BOOL)arg5 borderStyle:(long long)arg6 ;
-(id)initWithAvatarViewModel:(id)arg1 ;
-(Friend *)aFriend;
-(long long)borderStyle;
-(NSString *)groupId;
@end
