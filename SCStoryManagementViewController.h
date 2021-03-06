/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Snapchat/SCSearchUpdateListener.h>
#import <Snapchat/SCStoryManagementChromeViewControllerDelegate.h>
#import <Snapchat/SCStoryManagementSearchViewDelegate.h>
#import <Snapchat/SCStoryManagementViewDelegate.h>

@protocol SCStoryManagementMediaProvider, SCOperaViewProvider, SCSearchActionHandling, SCStoryManagementViewControllerDelegate;
@class SCStoryManagementView, SCStoryManagementDataSource, SCStoryManagementPlayerManager, SCSearchSectionBasedCollectionViewUpdater, SCStoryManagementSnapCollectionViewPagingController, SCStoryManagementSnapStatusViewController, SCStoryManagementChromeViewController, NSString;

@interface SCStoryManagementViewController : UIViewController <UICollectionViewDelegate, SCSearchUpdateListener, SCStoryManagementChromeViewControllerDelegate, SCStoryManagementSearchViewDelegate, SCStoryManagementViewDelegate> {

	SCStoryManagementView* _storyManagementView;
	SCStoryManagementDataSource* _dataSource;
	id<SCStoryManagementMediaProvider> _mediaProvider;
	id<SCOperaViewProvider> _viewerAvatarProvider;
	id<SCSearchActionHandling> _actionHandler;
	SCStoryManagementPlayerManager* _playerManager;
	SCSearchSectionBasedCollectionViewUpdater* _snapsCollectionViewUpdater;
	SCSearchSectionBasedCollectionViewUpdater* _viewerListCollectionViewUpdater;
	SCStoryManagementSnapCollectionViewPagingController* _pagingController;
	SCStoryManagementSnapStatusViewController* _snapStatusViewController;
	SCStoryManagementChromeViewController* _chromeViewController;
	id<SCStoryManagementViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCStoryManagementViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(void)_setUpSnapsCollectionViewUpdater;
-(void)storyManagementSearchView:(id)arg1 didUpdateQueryText:(id)arg2 ;
-(void)storyManagementSearchViewDidTapSaveButton:(id)arg1 ;
-(void)storyManagementSearchViewDidTapShareButton:(id)arg1 ;
-(void)storyManagementSearchViewDidTapDeleteButton:(id)arg1 ;
-(void)storyManagementViewDidTapSaveButton:(id)arg1 ;
-(void)storyManagementViewDidTapSettingButton:(id)arg1 ;
-(void)storyManagementChromeViewControllerAddSnapButtonTapped:(id)arg1 ;
-(void)_setUpSnapsCollectionViewPagingController;
-(void)_setUpViewerListCollectionViewUpdater;
-(void)_dismissStoryManagementViewController;
-(id)initWithStoryManagementDataSource:(id)arg1 viewerAvatarProvider:(id)arg2 mediaProvider:(id)arg3 actionHandler:(id)arg4 ;
-(void)scrollToSnapDataModel:(id)arg1 ;
-(void)setDelegate:(id<SCStoryManagementViewControllerDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SCStoryManagementViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_dismissKeyboard;
@end

