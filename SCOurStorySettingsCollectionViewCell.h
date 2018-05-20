/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchCollectionViewCell.h>
#import <Snapchat/SCSearchActionable.h>

@protocol SCSearchActionHandling, SCOurStorySettingsMediaProvider;
@class UILabel, UIImageView, SCLoadingIndicatorView, UIButton, SCStorySaveButton, UIStackView, UIView, NSString;

@interface SCOurStorySettingsCollectionViewCell : SCSearchCollectionViewCell <SCSearchActionable> {

	UILabel* _caption;
	UILabel* _timestampDescription;
	UILabel* _viewCount;
	UILabel* _screenshotCount;
	UIImageView* _thumbnail;
	SCLoadingIndicatorView* _thumbnailLoadingIndicator;
	UIImageView* _viewsIcon;
	UIImageView* _screenshotsIcon;
	UIButton* _deleteButton;
	SCStorySaveButton* _saveButton;
	UIStackView* _captionAndTimestampContainer;
	UIStackView* _countsContainer;
	UIView* _viewCountContainer;
	UIView* _screenshotCountContainer;
	id _viewModel;
	id<SCSearchActionHandling> _actionHandler;
	id<SCOurStorySettingsMediaProvider> _mediaProvider;

}

@property (assign,nonatomic,__weak) id<SCOurStorySettingsMediaProvider> mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<SCSearchActionHandling> actionHandler;                              //@synthesize actionHandler=_actionHandler - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(BOOL)shouldShowBackgroundView;
-(void)_addActionRecognizer;
-(void)_didTapDelete;
-(void)_didTapSave;
-(void)_didTapCell;
-(void)_handleStateChangeFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_setThumbnailWithImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)_addConstraints;
-(id)viewModel;
-(id<SCOurStorySettingsMediaProvider>)mediaProvider;
-(void)setMediaProvider:(id<SCOurStorySettingsMediaProvider>)arg1 ;
-(void)setViewModel:(id)arg1 ;
-(void)setActionHandler:(id<SCSearchActionHandling>)arg1 ;
-(id<SCSearchActionHandling>)actionHandler;
@end
