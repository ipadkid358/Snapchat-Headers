/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGalleryPrivateGalleryManagerListener.h>
#import <Snapchat/SCGalleryPrivateTabLockedTopSecretStateControllerDelegate.h>
#import <Snapchat/SCGalleryTabController.h>

@protocol SCGalleryTabControllerDelegate;
@class SCUserSession, UIViewController, SCGalleryTabsConfiguration, UIView, SCGalleryPrivateTabLockedNormalStateController, SCGalleryPrivateTabLockedTopSecretStateController, NSString;

@interface SCGalleryPrivateLockedTabController : NSObject <SCGalleryPrivateGalleryManagerListener, SCGalleryPrivateTabLockedTopSecretStateControllerDelegate, SCGalleryTabController> {

	SCUserSession* _userSession;
	UIViewController* _containerViewController;
	SCGalleryTabsConfiguration* _configuration;
	UIView* _view;
	double _lastNotifiedScrollContentOffset;
	unsigned long long _state;
	SCGalleryPrivateTabLockedNormalStateController* _normalStateController;
	SCGalleryPrivateTabLockedTopSecretStateController* _topSecretStateController;
	BOOL _didReceiveData;
	BOOL _visible;
	BOOL _focused;
	BOOL _loading;
	BOOL _showsImportFromCameraRollView;
	unsigned long long _selectMode;
	id<SCGalleryTabControllerDelegate> _delegate;
	unsigned long long _tabType;
	UIEdgeInsets _scrollContentInset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long tabType;                                    //@synthesize tabType=_tabType - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollContentInset;                                 //@synthesize scrollContentInset=_scrollContentInset - In the implementation block
@property (assign,nonatomic) double scrollContentOffset; 
@property (assign,nonatomic) double scrollContentDistanceToTop; 
@property (assign,nonatomic) BOOL visible;                                                    //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL focused;                                                    //@synthesize focused=_focused - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                    //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) unsigned long long selectMode;                                   //@synthesize selectMode=_selectMode - In the implementation block
@property (assign,nonatomic) BOOL showsImportFromCameraRollView;                              //@synthesize showsImportFromCameraRollView=_showsImportFromCameraRollView - In the implementation block
@property (assign,nonatomic,__weak) id<SCGalleryTabControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)tabType;
-(void)setSelectMode:(unsigned long long)arg1 ;
-(unsigned long long)selectMode;
-(id)selectedGallerySnaps;
-(id)selectedGalleryItems;
-(void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2 ;
-(double)scrollContentOffset;
-(double)scrollContentDistanceToTop;
-(void)galleryViewWillAppear;
-(void)galleryViewDidDisappear;
-(void)setScrollContentOffset:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)privateGalleryManagerDidUpdatePassphrase:(id)arg1 ;
-(void)privateGalleryManagerDidSetup:(id)arg1 ;
-(void)privateGalleryManagerDidLock:(id)arg1 ;
-(void)privateGalleryManagerDidUnlock:(id)arg1 ;
-(void)lockedTopSecretStateControllerDidBeginEditing:(id)arg1 ;
-(void)lockedTopSecretStateControllerDidEndEditing:(id)arg1 ;
-(void)_forceRefreshLatestState;
-(void)_updateWithScrollContentInset;
-(void)setScrollContentDistanceToTop:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_refreshLatestState;
-(id)_stateViewForState:(unsigned long long)arg1 ;
-(void)_notifyScrollContentOffsetChange;
-(id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 configuration:(id)arg3 delegate:(id)arg4 tabType:(unsigned long long)arg5 ;
-(id)indexPathForItem:(id)arg1 isFeatured:(BOOL)arg2 ;
-(void)changeSelectionMode:(unsigned long long)arg1 forGalleryItem:(id)arg2 ;
-(void)changeSelectionMode:(unsigned long long)arg1 forGallerySnap:(id)arg2 ;
-(void)scrollToGalleryItem:(id)arg1 animated:(BOOL)arg2 ;
-(double)scrollBarTopOffset;
-(unsigned long long)currentMediaScenePathComponent;
-(BOOL)shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController;
-(BOOL)shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController;
-(UIEdgeInsets)scrollContentInset;
-(void)setScrollContentInset:(UIEdgeInsets)arg1 ;
-(void)setScrollContentOffset:(double)arg1 ;
-(void)setScrollContentDistanceToTop:(double)arg1 ;
-(BOOL)showsImportFromCameraRollView;
-(void)setShowsImportFromCameraRollView:(BOOL)arg1 ;
-(void)setDelegate:(id<SCGalleryTabControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isDragging;
-(id<SCGalleryTabControllerDelegate>)delegate;
-(id)view;
-(BOOL)isViewLoaded;
-(BOOL)visible;
-(BOOL)isTracking;
-(BOOL)isEditing;
-(id)collectionView;
-(void)setVisible:(BOOL)arg1 ;
-(void)endEditing;
-(void)loadViewIfNeeded;
-(id)itemsInRect:(CGRect)arg1 ;
-(BOOL)loading;
-(void)setFocused:(BOOL)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(id)allItems;
-(unsigned long long)_currentState;
-(void)updateWithData:(id)arg1 ;
-(BOOL)focused;
-(BOOL)isPrivate;
-(BOOL)shouldDisplay;
@end

