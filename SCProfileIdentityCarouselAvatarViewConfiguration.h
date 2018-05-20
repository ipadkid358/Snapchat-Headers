/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCProfileIdentityCarouselStoryAvatarViewModel, Friend, NSString;

@interface SCProfileIdentityCarouselAvatarViewConfiguration : NSObject {

	SCProfileIdentityCarouselStoryAvatarViewModel* _storyAvatarViewModel;
	Friend* _aFriend;
	long long _borderStyle;
	long long _avatarStyle;
	NSString* _defaultSubtitle;

}

@property (nonatomic,readonly) SCProfileIdentityCarouselStoryAvatarViewModel * storyAvatarViewModel;              //@synthesize storyAvatarViewModel=_storyAvatarViewModel - In the implementation block
@property (nonatomic,readonly) Friend * aFriend;                                                                  //@synthesize aFriend=_aFriend - In the implementation block
@property (nonatomic,readonly) long long borderStyle;                                                             //@synthesize borderStyle=_borderStyle - In the implementation block
@property (nonatomic,readonly) long long avatarStyle;                                                             //@synthesize avatarStyle=_avatarStyle - In the implementation block
@property (nonatomic,retain) NSString * defaultSubtitle;                                                          //@synthesize defaultSubtitle=_defaultSubtitle - In the implementation block
-(Friend *)aFriend;
-(id)initWithStoryAvatarViewModel:(id)arg1 friend:(id)arg2 borderStyle:(long long)arg3 avatarStyle:(long long)arg4 defaultSubtitle:(id)arg5 ;
-(long long)avatarStyle;
-(SCProfileIdentityCarouselStoryAvatarViewModel *)storyAvatarViewModel;
-(NSString *)defaultSubtitle;
-(void)setDefaultSubtitle:(NSString *)arg1 ;
-(long long)borderStyle;
@end
