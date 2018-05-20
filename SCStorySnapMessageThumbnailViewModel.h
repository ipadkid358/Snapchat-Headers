/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatSingleMediaThumbnailViewModel.h>
#import <Snapchat/SCChatMaskedMediaThumbnailViewModel.h>

@class SCBaseMediaThumbnailViewModel, NSDate, NSString, Friend, SCContributionStoryPublisherDataModel, UIColor;

@interface SCStorySnapMessageThumbnailViewModel : NSObject <SCChatSingleMediaThumbnailViewModel, SCChatMaskedMediaThumbnailViewModel> {

	BOOL _isSendingOrHasFailed;
	long long _viewableStatus;
	BOOL _isExpired;
	NSDate* _storyTimestamp;
	NSString* _subtext;
	Friend* _snapchatter;
	BOOL _addFriendTapped;
	SCContributionStoryPublisherDataModel* _contributionStoryPublisher;
	SCBaseMediaThumbnailViewModel* _baseMediaThumbnailViewModel;
	UIColor* _senderColor;

}

@property (nonatomic,readonly) SCBaseMediaThumbnailViewModel * baseMediaThumbnailViewModel;              //@synthesize baseMediaThumbnailViewModel=_baseMediaThumbnailViewModel - In the implementation block
@property (nonatomic,readonly) UIColor * senderColor;                                                    //@synthesize senderColor=_senderColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)grayChatColor;
+(long long)mediaCardLoadStateFromMediaContentLoadState:(long long)arg1 ;
+(id)_blurLabelFont;
+(id)_unviewableLabelFont;
+(id)_storyInfoLabelFont;
+(id)_mediaCardPlaceholderLabelFont;
+(id)_mediaCardPlaceholderLabelColor;
-(BOOL)containsVideo;
-(BOOL)shouldDisplayTapToLoad;
-(BOOL)shouldCropCircularMedia;
-(BOOL)shouldShowFullScreenView;
-(id)attributedTextForUnviewableLabel;
-(SCBaseMediaThumbnailViewModel *)baseMediaThumbnailViewModel;
-(id)contributionStoryPublisherMediaCardViewModel;
-(UIColor *)senderColor;
-(BOOL)shouldDisplayStoryInfoLabel;
-(id)attributedTextForStoryInfoLabel;
-(BOOL)shouldDisplayBlurView;
-(id)attributedTextForBlurLabel;
-(BOOL)shouldDisplayUnviewableLabel;
-(id)snapchatterNameCardViewModel;
-(id)attributedTextForMediaCardPlaceholderLabel;
-(id)initWithStorySnapMessage:(id)arg1 senderColor:(id)arg2 ;
-(id)initWithChatMetadata:(id)arg1 isSendingOrHasFailed:(BOOL)arg2 senderColor:(id)arg3 ;
-(id)_subtextForMessage:(id)arg1 ;
-(id)userDisplayName;
@end
