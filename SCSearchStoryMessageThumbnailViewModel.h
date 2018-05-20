/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatSingleMediaThumbnailViewModel.h>
#import <Snapchat/SCChatMaskedMediaThumbnailViewModel.h>

@class NSDate, SCSearchStoryMessage, SCBaseMediaThumbnailViewModel, SCSearchStoryMediaCardViewModel, UIColor, NSString;

@interface SCSearchStoryMessageThumbnailViewModel : NSObject <SCChatSingleMediaThumbnailViewModel, SCChatMaskedMediaThumbnailViewModel> {

	BOOL _isSendingOrHasFailed;
	NSDate* _storyTimestamp;
	long long _viewableStatus;
	SCSearchStoryMessage* _message;
	SCBaseMediaThumbnailViewModel* _baseMediaThumbnailViewModel;
	SCSearchStoryMediaCardViewModel* _searchStoryMediaCardViewModel;
	UIColor* _senderColor;

}

@property (nonatomic,readonly) SCBaseMediaThumbnailViewModel * baseMediaThumbnailViewModel;                  //@synthesize baseMediaThumbnailViewModel=_baseMediaThumbnailViewModel - In the implementation block
@property (nonatomic,readonly) SCSearchStoryMediaCardViewModel * searchStoryMediaCardViewModel;              //@synthesize searchStoryMediaCardViewModel=_searchStoryMediaCardViewModel - In the implementation block
@property (nonatomic,readonly) UIColor * senderColor;                                                        //@synthesize senderColor=_senderColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_unviewableLabelFont;
+(id)_storyInfoLabelFont;
-(BOOL)containsVideo;
-(BOOL)shouldDisplayTapToLoad;
-(BOOL)shouldCropCircularMedia;
-(BOOL)shouldShowFullScreenView;
-(id)attributedTextForUnviewableLabel;
-(SCBaseMediaThumbnailViewModel *)baseMediaThumbnailViewModel;
-(UIColor *)senderColor;
-(BOOL)shouldDisplayStoryInfoLabel;
-(id)attributedTextForStoryInfoLabel;
-(BOOL)shouldDisplayUnviewableLabel;
-(id)initWithChatMetadata:(id)arg1 isSendingOrHasFailed:(BOOL)arg2 senderColor:(id)arg3 ;
-(id)initWithSearchStoryMessage:(id)arg1 senderColor:(id)arg2 ;
-(BOOL)_isViewable;
-(SCSearchStoryMediaCardViewModel *)searchStoryMediaCardViewModel;
-(void)_configureWithSearchMetadata:(id)arg1 ;
-(BOOL)_isExpired;
@end

