/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatViewLifeCycleListener.h>
#import <Snapchat/SCChatConversationUpdaterListener.h>
#import <Snapchat/SCHeaderDataSource.h>
#import <Snapchat/SCStoriesModelUpdateListener.h>
#import <Snapchat/SCChatStoryIconUpdater.h>
#import <Snapchat/SCAvatarViewDelegate.h>

@protocol SCChatViewHeaderDataSource, SCChatStoryDelegate, SCChatHeaderRecipientBarDelegate, SCChatConversationViewModel;
@class SCUserSession, UIView, SCHeaderAccessoryView, FriendStories, SCSingleIconConfigurer, NSString, SCAvatarView, SCHeader, UIButton, UILabel;

@interface SCChatViewHeader : NSObject <SCChatViewLifeCycleListener, SCChatConversationUpdaterListener, SCHeaderDataSource, SCStoriesModelUpdateListener, SCChatStoryIconUpdater, SCAvatarViewDelegate> {

	SCUserSession* _userSession;
	UIView* _parentView;
	UIView* _rightButtonCircleView;
	UIView* _recipientBar;
	id<SCChatViewHeaderDataSource> _dataSource;
	SCHeaderAccessoryView* _chatHeaderAccessoryView;
	id<SCChatStoryDelegate> _chatHeaderStoryDelegate;
	id<SCChatHeaderRecipientBarDelegate> _chatHeaderRecipientBarDelegate;
	FriendStories* _friendStories;
	SCSingleIconConfigurer* _singleIconConfigurer;
	NSString* _lastUnviewedStoryIdSeen;
	UIView* _containerView;
	SCAvatarView* _storyAvatarView;
	id<SCChatConversationViewModel> _chatViewModel;
	SCHeader* _header;
	UIButton* _rightButton;
	UILabel* _sccpActiveLabel;

}

@property (nonatomic,retain) id<SCChatConversationViewModel> chatViewModel;              //@synthesize chatViewModel=_chatViewModel - In the implementation block
@property (nonatomic,retain) SCHeader * header;                                          //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                                     //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) UILabel * sccpActiveLabel;                                  //@synthesize sccpActiveLabel=_sccpActiveLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)headerBorderColor;
+(id)rightButtonCircleBorderColor;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(id)viewForTitleInHeader:(id)arg1 ;
-(void)didConversationViewModelChange:(id)arg1 ;
-(void)viewDidFullyDisappear;
-(void)setHeaderAlpha:(double)arg1 ;
-(void)initHeader;
-(void)storiesModelDidUpdateWithParams:(id)arg1 ;
-(void)setChatViewModel:(id<SCChatConversationViewModel>)arg1 ;
-(void)_initHeaderWithDelegate:(id)arg1 ;
-(void)_initSCCPStatusLabel;
-(void)_initRightButton;
-(id)imageForCustomRightButtonInState:(unsigned long long)arg1 ;
-(void)reloadStoryIcon;
-(BOOL)shouldDisplayStoryHeader;
-(void)_updateFriendStories:(id)arg1 ;
-(id)chatHeaderAccessoryView;
-(void)updateHeaderTitleForNewDisplayName:(id)arg1 ;
-(void)reloadHeader;
-(id)headerBottom;
-(void)_updateAlphaWithProgress:(double)arg1 ;
-(void)_updateScaleWithProgress:(double)arg1 ;
-(void)_updateRightButtonCircleWithVerticalTranslationUp:(double)arg1 ;
-(void)setHeaderViewsScale:(double)arg1 includeContentView:(BOOL)arg2 ;
-(id)rightButtonCircleView;
-(void)_cleanupForRecipientBarRemoval;
-(void)_updateLayoutForRecipientBarRemoval;
-(void)_prepareThumbnail;
-(void)_displayThumbnail;
-(long long)_friendStoriesViewingType;
-(void)_preloadStories;
-(void)handleTapOnStoryIconFromAvatarView:(id)arg1 ;
-(id)storyDismissView;
-(void)handleTapOnBitmojiFromAvatarView:(id)arg1 ;
-(void)handleLongPressOnStoryIconFromAvatarView:(id)arg1 ;
-(id)initWithHeaderDelegate:(id)arg1 headerDataSource:(id)arg2 chatHeaderStoryDelegate:(id)arg3 parentView:(id)arg4 userSession:(id)arg5 ;
-(id)headerSuperview;
-(double)recipientBarHeight;
-(void)updateSCCPLabelWithState:(id)arg1 ;
-(void)viewModelDidUpdate;
-(void)enableInteraction;
-(void)setHeaderViewsAlpha:(double)arg1 ;
-(void)setHeaderContentAlpha:(double)arg1 ;
-(void)setButtonsAlpha:(double)arg1 ;
-(void)displayWithVerticalTranslationUp:(double)arg1 ;
-(void)addRecipientBar:(id)arg1 ;
-(void)removeRecipientBar:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setChatHeaderRecipientBarDelegate:(id)arg1 ;
-(long long)chatStoryHeaderViewType;
-(void)_handleTapOnStoryIcon;
-(id<SCChatConversationViewModel>)chatViewModel;
-(UILabel *)sccpActiveLabel;
-(void)setSccpActiveLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)identifier;
-(id)headerView;
-(void)disableInteraction;
-(CGRect)headerFrame;
-(void)setHeaderFrame:(CGRect)arg1 ;
-(UIButton *)rightButton;
-(SCHeader *)header;
-(void)setRightButton:(UIButton *)arg1 ;
-(void)setHeader:(SCHeader *)arg1 ;
-(id)headerContentView;
@end

