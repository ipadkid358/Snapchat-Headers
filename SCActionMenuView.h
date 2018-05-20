/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCActionMenuRenderableCellContentView, SCActionMenuViewDelegate, SCActionMenuButtonViewDelegate;
@class UIView, SCActionMenuMessageStateView, SCActionMenuButtonsContainerView, SCActionMenuTopContainerView, SCMessageChatViewModel, NSArray;

@interface SCActionMenuView : UIView {

	UIView* _contentViewHolder;
	SCActionMenuMessageStateView* _messageStateView;
	SCActionMenuButtonsContainerView* _buttonsContainerView;
	SCActionMenuTopContainerView* _topContainerView;
	UIEdgeInsets _contentPadding;
	SCMessageChatViewModel* _viewModel;
	UIView*<SCActionMenuRenderableCellContentView> _contentView;
	UIView* _parentView;
	BOOL _menuOpened;
	CGPoint _leftMidPoint;
	BOOL _currentlyAnimating;
	BOOL _isStale;
	id<SCActionMenuViewDelegate> _delegate;
	id<SCActionMenuButtonViewDelegate> _buttonViewDelegate;

}

@property (nonatomic,retain) UIView*<SCActionMenuRenderableCellContentView> contentView;                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) NSArray * viewsToDropShadow; 
@property (assign,nonatomic,__weak) id<SCActionMenuViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCActionMenuButtonViewDelegate> buttonViewDelegate;              //@synthesize buttonViewDelegate=_buttonViewDelegate - In the implementation block
-(BOOL)didLongPress:(id)arg1 ;
-(void)setButtonViewDelegate:(id<SCActionMenuButtonViewDelegate>)arg1 ;
-(void)renderWithViewModel:(id)arg1 group:(id)arg2 contentView:(id)arg3 buttonViewModels:(id)arg4 parentView:(id)arg5 ;
-(void)collapseWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)didDismiss;
-(NSArray *)viewsToDropShadow;
-(BOOL)didGestureEndOnButton:(id)arg1 ;
-(void)refreshWithViewModel:(id)arg1 group:(id)arg2 buttonViewModels:(id)arg3 ;
-(void)_renderMenuMaximized;
-(void)_performBlockWithAnimationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_renderMenuMinimized;
-(void)_uninstallAllConstraints;
-(UIEdgeInsets)actionMenuPadding;
-(id<SCActionMenuButtonViewDelegate>)buttonViewDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView*<SCActionMenuRenderableCellContentView>)arg1 ;
-(UIView*<SCActionMenuRenderableCellContentView>)contentView;
-(void)setDelegate:(id<SCActionMenuViewDelegate>)arg1 ;
-(id<SCActionMenuViewDelegate>)delegate;
@end
