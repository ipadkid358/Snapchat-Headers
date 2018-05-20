/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCChatConversationUpdaterListener.h>
#import <Snapchat/SCActionMenuButtonViewDelegate.h>
#import <Snapchat/SCActionMenuViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCActionMenuRenderableCell, SCChatGroup, SCChatConversationViewModel, SCActionMenuViewControllerDelegate;
@class SCActionMenuView, NSArray, UITapGestureRecognizer, UISwipeGestureRecognizer, SCMessageChatViewModel, SCEditGroupNameAlertViewController, SCMessageChatTableViewCell, UIImage, SCExperimentManager, NSString;

@interface SCActionMenuViewController : UIViewController <SCChatConversationUpdaterListener, SCActionMenuButtonViewDelegate, SCActionMenuViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {

	SCActionMenuView* _actionMenuView;
	NSArray* _shadowViews;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UISwipeGestureRecognizer* _upDownSwipeGestureRecognizer;
	UISwipeGestureRecognizer* _leftRightSwipeGestureRecognizer;
	id<SCActionMenuRenderableCell> _cell;
	SCMessageChatViewModel* _viewModel;
	id<SCChatGroup> _group;
	SCEditGroupNameAlertViewController* _editGroupNameAlertViewController;
	BOOL _isActionMenuExpanded;
	BOOL _listeningForConversationUpdate;
	id<SCChatConversationViewModel> _conversationViewModel;
	SCMessageChatTableViewCell* _headerCell;
	UIImage* _topContainerViewImage;
	SCExperimentManager* _experimentManager;
	unsigned long long _selectedIndex;
	id<SCActionMenuViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long selectedIndex;                                  //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic,__weak) id<SCActionMenuViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithExperimentManager:(id)arg1 ;
-(void)didConversationViewModelChange:(id)arg1 ;
-(void)didLongPress:(id)arg1 ;
-(void)dismissActionMenu:(BOOL)arg1 ;
-(void)configureWithViewModel:(id)arg1 group:(id)arg2 cell:(id)arg3 selectedIndex:(long long)arg4 headerCell:(id)arg5 ;
-(void)onSwipe:(id)arg1 ;
-(void)_showShadowForActionMenu;
-(id)_buttonsForViewModel:(id)arg1 cell:(id)arg2 ;
-(void)_updateShadowForActionMenu;
-(void)_captureTopContainerView;
-(void)_dismissActionMenu:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissHeader;
-(void)_dismissActionMenu;
-(void)_hideShadowForActionMenu;
-(BOOL)_isStoryReplySnapMessageViewModel:(id)arg1 ;
-(BOOL)_isSavableMessageChatViewModel:(id)arg1 ;
-(id)_usernameToDisplayName:(id)arg1 ;
-(id)_saveCustomStickerActionMenuButtonForViewModel:(id)arg1 ;
-(BOOL)_isViewModelForCustomStickerMessage:(id)arg1 ;
-(void)buttonView:(id)arg1 didExecuteViewModel:(id)arg2 ;
-(void)actionMenuDidChangeExpandedState:(BOOL)arg1 ;
-(double)_buttonsHeight;
-(void)setDelegate:(id<SCActionMenuViewControllerDelegate>)arg1 ;
-(id<SCActionMenuViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(unsigned long long)selectedIndex;
-(void)tapped:(id)arg1 ;
@end
