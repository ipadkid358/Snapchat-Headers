/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSavableItemChatTableViewCell.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Snapchat/SCActionMenuRenderableCell.h>

@protocol SCChatCellBaseGestureDelegateSCChatCellStackGestureDelegate;
@class SCChatSDKRenderableView, UICollectionView, UIView, UIViewController, SCChatSDKActionContext, NSString;

@interface SCChatSDKParcelMessageTableViewCell : SCSavableItemChatTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SCActionMenuRenderableCell> {

	SCChatSDKRenderableView* _renderView;
	BOOL _isUIRendered;
	UICollectionView* _stackableContentCollectionView;
	UIView* _singleElementContentView;
	long long _selectedIndex;
	UIViewController*<SCChatCellBaseGestureDelegate>*<SCChatCellStackGestureDelegate> _parentViewController;
	SCChatSDKActionContext* _actionContext;

}

@property (nonatomic,retain) UICollectionView * stackableContentCollectionView;                                                                          //@synthesize stackableContentCollectionView=_stackableContentCollectionView - In the implementation block
@property (nonatomic,retain) UIView * singleElementContentView;                                                                                          //@synthesize singleElementContentView=_singleElementContentView - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                                                                                                    //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<SCChatCellBaseGestureDelegate>*<SCChatCellStackGestureDelegate> parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) BOOL isUIRendered;                                                                                                          //@synthesize isUIRendered=_isUIRendered - In the implementation block
@property (nonatomic,retain) SCChatSDKActionContext * actionContext;                                                                                     //@synthesize actionContext=_actionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActionContext:(SCChatSDKActionContext *)arg1 ;
-(void)configureWithActionMenuVC:(id)arg1 ;
-(id)actionMenuContentViewForIndex:(unsigned long long)arg1 ;
-(void)resetWithOriginalContent;
-(id)indexPathOfCollectionViewCellForPoint:(CGPoint)arg1 ;
-(void)endDisplayingCell;
-(void)willDisplayCell;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4 ;
-(void)renderMetadata;
-(void)setIsUIRendered:(BOOL)arg1 ;
-(BOOL)isUIRendered;
-(void)_attachPluginIfNeeded;
-(void)_notifyWillDisplayCellIfNeeded;
-(void)_notifyEndDisplayingCellIfNeeded;
-(UIView *)singleElementContentView;
-(UICollectionView *)stackableContentCollectionView;
-(id)nonStackableRenderer;
-(void)setSingleElementContentView:(UIView *)arg1 ;
-(void)_reloadStackableContentCollectionViewIfNeeded;
-(void)setStackableContentCollectionView:(UICollectionView *)arg1 ;
-(void)layoutSubviews;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIViewController*<SCChatCellBaseGestureDelegate>*<SCChatCellStackGestureDelegate>)parentViewController;
-(void)prepareForReuse;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setParentViewController:(UIViewController*<SCChatCellBaseGestureDelegate>*<SCChatCellStackGestureDelegate>)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
-(SCChatSDKActionContext *)actionContext;
@end

