/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCCameraCardTableViewCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SCCameraCardViewControllerDelegate;
@class NSArray, UIView, UITableView, UIPanGestureRecognizer, SCLens, NSString;

@interface SCCameraCardViewController : UIViewController <SCCameraCardTableViewCellDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate> {

	NSArray* _cardArray;
	UIView* _backgroundView;
	UITableView* _tableView;
	BOOL _firstAppearanceComplete;
	UIEdgeInsets _defaultContentInset;
	BOOL _initializedPanGesture;
	BOOL _shouldOverrideTableViewPanningGesture;
	UIPanGestureRecognizer* _panGestureRecognizer;
	BOOL _delegateInformedOfDismissal;
	BOOL _updatingCards;
	id<SCCameraCardViewControllerDelegate> _cameraCardDelegate;
	SCLens* _lensUnlocked;

}

@property (assign,nonatomic,__weak) id<SCCameraCardViewControllerDelegate> cameraCardDelegate;              //@synthesize cameraCardDelegate=_cameraCardDelegate - In the implementation block
@property (nonatomic,retain) SCLens * lensUnlocked;                                                         //@synthesize lensUnlocked=_lensUnlocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldDisplayStatusBar;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(SCLens *)lensUnlocked;
-(void)cameraCardTableViewCell:(id)arg1 didPresentViewController:(id)arg2 ;
-(void)cameraCardTableViewCellDidFinish:(id)arg1 ;
-(void)_didPerformPanGesture:(id)arg1 ;
-(void)_positionCardsBelowBottom;
-(void)_delegateDismissalWithDismissType:(unsigned long long)arg1 ;
-(void)_updateCardStyles;
-(void)_dismissCardsAnimated:(BOOL)arg1 additionalAnimations:(/*^block*/id)arg2 duration:(double)arg3 dismissType:(unsigned long long)arg4 ;
-(id<SCCameraCardViewControllerDelegate>)cameraCardDelegate;
-(void)cameraCardTableViewCellDidFinish:(id)arg1 dismissType:(unsigned long long)arg2 ;
-(void)_dismissCardsWithDismissType:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setLensUnlocked:(SCLens *)arg1 ;
-(void)_cardDidRemoveWillAnimateChanges;
-(void)cameraCardTableViewCell:(id)arg1 didDismissViewController:(id)arg2 ;
-(void)cameraCardTableViewCell:(id)arg1 willAnimateOffScreenWithAnimations:(/*^block*/id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)cameraCardTableViewCell:(id)arg1 willAnimateHeightWithAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cameraCardTableViewCellDidStartDragging:(id)arg1 ;
-(void)cameraCardTableViewCellDidEndDragging:(id)arg1 ;
-(void)cameraCardTableViewCellDidUnlockLens:(id)arg1 lens:(id)arg2 ;
-(void)cameraCardTableViewCellShowProfile:(id)arg1 suggestedFriend:(id)arg2 ;
-(void)_insertCards:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCameraCardDelegate:(id<SCCameraCardViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

