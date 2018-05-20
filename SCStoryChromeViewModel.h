/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Story, SCScopedAccess, UIColor, NSString, NSValue, UIFont, Friend;

@interface SCStoryChromeViewModel : NSObject {

	Story* _story;
	SCScopedAccess* _friendmojiPresenter;
	UIColor* _snapDisplayTitleColor;
	UIColor* _snapDisplaySubTitleColor;
	NSString* _localMischiefId;

}

@property (nonatomic,copy,readonly) NSString * snapAdditionalDisplayTitle; 
@property (nonatomic,copy,readonly) NSString * snapDisplaySubTitle; 
@property (nonatomic,copy,readonly) NSValue * snapDisplaySubTitleUnderlineRange; 
@property (nonatomic,copy,readonly) NSString * snapIconName; 
@property (nonatomic,readonly) UIColor * snapDisplayTitleColor; 
@property (nonatomic,readonly) UIColor * snapAdditionalDisplayColor; 
@property (nonatomic,readonly) UIColor * snapDisplaySubTitleColor; 
@property (nonatomic,readonly) UIFont * snapDisplayTitleFont; 
@property (nonatomic,readonly) BOOL hasGradient; 
@property (nonatomic,readonly) BOOL hasShadow; 
@property (nonatomic,readonly) BOOL userInteractionEnabled; 
@property (nonatomic,copy,readonly) NSString * snapPosterUsername; 
@property (nonatomic,copy,readonly) NSString * snapPosterDisplayName; 
@property (nonatomic,readonly) unsigned long long snapPosterScore; 
@property (nonatomic,readonly) BOOL canViewSnapPosterScore; 
@property (nonatomic,readonly) Friend * snapPosterUser; 
+(id)chromeViewModelForContributionStoryWithServerId:(id)arg1 ;
-(id)mischiefId;
-(id)initWithStory:(id)arg1 ;
-(id)snapDisplayTitleWithEmoji:(BOOL)arg1 ;
-(NSString *)snapPosterDisplayName;
-(NSString *)snapPosterUsername;
-(UIColor *)snapDisplayTitleColor;
-(UIFont *)snapDisplayTitleFont;
-(id)snapPostTimeAgo;
-(NSString *)snapDisplaySubTitle;
-(UIColor *)snapDisplaySubTitleColor;
-(id)snapDisplaySubtitlePublicationIcon;
-(id)_groupStoryPublication;
-(NSString *)snapAdditionalDisplayTitle;
-(NSString *)snapIconName;
-(UIColor *)snapAdditionalDisplayColor;
-(NSValue *)snapDisplaySubTitleUnderlineRange;
-(id)snapPosterDisplayNameWithDefaultSnapDisplayTitle:(id)arg1 ;
-(unsigned long long)snapPosterScore;
-(BOOL)canViewSnapPosterScore;
-(id)friendForOperaChromeHeaderAvatar;
-(id)groupParticipantsForOperaChromeHeaderAvatar;
-(Friend *)snapPosterUser;
-(id)initWithStory:(id)arg1 friendmojiPresenter:(id)arg2 ;
-(id)_officialStoryAttribute;
-(id)_groupStoryAttribute;
-(id)_spectaclesSubtitle;
-(id)_insertOfficialEmojiInDisplaySubtitle:(id)arg1 location:(long long)arg2 ;
-(BOOL)_snapWasTakenOnThisDayInPreviousYear;
-(id)_snapPostTimeDate;
-(BOOL)hasShadow;
-(BOOL)userInteractionEnabled;
-(BOOL)hasGradient;
@end
