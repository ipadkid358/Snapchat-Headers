/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOperaLayerViewController.h>
#import <Snapchat/SCOperaLoadingLayerViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Snapchat/SCProductDetailsCardViewDelegate.h>
#import <Snapchat/SCCommerceActionButtonContainerViewDelegate.h>
#import <Snapchat/SCProductOptionPickerViewDelegate.h>
#import <Snapchat/SCProductCartStatusViewDelegate.h>
#import <Snapchat/SCProductPhotoGalleryViewControllerDelegate.h>
#import <Snapchat/SCScanResultViewControllerDelegate.h>
#import <Snapchat/SCProductCheckoutViewControllerUnlockDelegate.h>
#import <Snapchat/SCScannableActionProviderDelegate.h>
#import <Snapchat/SCCommerceLoggerPageMetricsDataSource.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol NavigationDelegate;
@class UICollectionView, SCCommerceActionButtonContainerView, SCScanProductInfo, UIButton, SCGradientView, SCProductDetailsCardView, UIPageControl, UIView, SCProductOptionPickerView, NSArray, NSMutableDictionary, UITapGestureRecognizer, UILabel, SCProductCartStatusView, NSString, NSMutableArray, SCUserSession, SOJUScannableActionMarcoAction, SCCommerceProductOperaLayer, SCOperaLoadingLayerView, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition;

@interface SCProductIntroPageViewController : SCOperaLayerViewController <SCOperaLoadingLayerViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, SCProductDetailsCardViewDelegate, SCCommerceActionButtonContainerViewDelegate, SCProductOptionPickerViewDelegate, SCProductCartStatusViewDelegate, SCProductPhotoGalleryViewControllerDelegate, SCScanResultViewControllerDelegate, SCProductCheckoutViewControllerUnlockDelegate, SCScannableActionProviderDelegate, SCCommerceLoggerPageMetricsDataSource, UINavigationControllerDelegate, UIGestureRecognizerDelegate> {

	UICollectionView* _productImageCollection;
	SCCommerceActionButtonContainerView* _actionButtonContainerView;
	SCScanProductInfo* _productInfo;
	UIButton* _closeButton;
	SCGradientView* _gradientView;
	SCGradientView* _topGradientView;
	SCProductDetailsCardView* _detailContainerView;
	UIPageControl* _bottomPageControl;
	UIView* _selectionOverlayView;
	SCProductOptionPickerView* _pickerView;
	BOOL _sizeOptionActive;
	NSArray* _productOptions;
	NSMutableDictionary* _productOptionMappings;
	UITapGestureRecognizer* _selectionOverlayTapGestureRecognizer;
	BOOL _allSoldOut;
	BOOL _showNextSelectionForAddToBag;
	BOOL _showRetryOnFailure;
	UILabel* _imageDoneButton;
	SCProductCartStatusView* _cartStatusButtonView;
	NSString* _storeId;
	BOOL _productImagesAdjusted;
	BOOL _panGestureOnImage;
	NSMutableArray* _productImages;
	BOOL _statusBarHiddenPrevious;
	long long _previousStatusBarStyle;
	UITapGestureRecognizer* _zoomTap;
	UITapGestureRecognizer* _operaTap;
	double _productDetailsScrollOffset;
	NSString* _metricsDisplayId;
	BOOL _interactionInProgress;
	BOOL _isPdpVisible;
	BOOL _isPdpVisibleObserverAdded;
	id<NavigationDelegate> _navigationDelegate;
	SCUserSession* _userSession;
	SOJUScannableActionMarcoAction* _productActionData;
	SCCommerceProductOperaLayer* _productLayer;
	NSString* _productId;
	SCOperaLoadingLayerView* _loadingLayerView;
	UIPanGestureRecognizer* _downSwipeRecognizer;
	UIPercentDrivenInteractiveTransition* _interactivePopTransition;
	double _contentOffsetY;
	NSArray* _unlockItems;

}

@property (nonatomic,retain) SCUserSession * userSession;                                                  //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) SOJUScannableActionMarcoAction * productActionData;                           //@synthesize productActionData=_productActionData - In the implementation block
@property (nonatomic,retain) SCCommerceProductOperaLayer * productLayer;                                   //@synthesize productLayer=_productLayer - In the implementation block
@property (nonatomic,copy) NSString * productId;                                                           //@synthesize productId=_productId - In the implementation block
@property (nonatomic,retain) SCOperaLoadingLayerView * loadingLayerView;                                   //@synthesize loadingLayerView=_loadingLayerView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * downSwipeRecognizer;                                 //@synthesize downSwipeRecognizer=_downSwipeRecognizer - In the implementation block
@property (nonatomic,retain) UIPercentDrivenInteractiveTransition * interactivePopTransition;              //@synthesize interactivePopTransition=_interactivePopTransition - In the implementation block
@property (assign,nonatomic) BOOL interactionInProgress;                                                   //@synthesize interactionInProgress=_interactionInProgress - In the implementation block
@property (assign,nonatomic) double contentOffsetY;                                                        //@synthesize contentOffsetY=_contentOffsetY - In the implementation block
@property (nonatomic,retain) NSArray * unlockItems;                                                        //@synthesize unlockItems=_unlockItems - In the implementation block
@property (assign,nonatomic) BOOL isPdpVisible;                                                            //@synthesize isPdpVisible=_isPdpVisible - In the implementation block
@property (assign,nonatomic) BOOL isPdpVisibleObserverAdded;                                               //@synthesize isPdpVisibleObserverAdded=_isPdpVisibleObserverAdded - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;                             //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldDisplayStatusBar;
-(BOOL)inValidView:(id)arg1 ;
-(void)setInteractivePopTransition:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(UIPercentDrivenInteractiveTransition *)interactivePopTransition;
-(void)_didTapCloseButton;
-(void)setInteractionInProgress:(BOOL)arg1 ;
-(void)viewDidFullyAppear;
-(void)viewDidFullyDisappear;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(long long)pageabilityForRelativePosition:(unsigned long long)arg1 ;
-(id)shareableMedia;
-(void)loadingLayerViewDidPressErrorButton:(id)arg1 ;
-(BOOL)isRecyclable;
-(void)scanResultViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2 ;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(UIPanGestureRecognizer *)downSwipeRecognizer;
-(void)unlockItemsForSuccessfulCheckout:(id)arg1 ;
-(BOOL)_isInOperaExperience;
-(void)_zoomTapRecognized:(id)arg1 ;
-(BOOL)showCloseButton;
-(SCCommerceProductOperaLayer *)productLayer;
-(SOJUScannableActionMarcoAction *)productActionData;
-(void)_loadProductInfoForId:(id)arg1 ;
-(void)_updateViewWithProduct:(id)arg1 ;
-(void)_showOutOfRegionNotificationIfNecessary;
-(void)_showDetailCardBounceAnimationIfNecessary;
-(void)_showUnlocksIfNecessary;
-(void)_trackOutOfStockIfNecessary;
-(void)_populateMarcoProductSizeOptions;
-(CGRect)_calculateCollectionImageViewFrame;
-(void)_scrollToCurrentlySelectedOptionImage:(BOOL)arg1 ;
-(void)_showProductSoldOut;
-(void)_callApi;
-(void)setDownSwipeRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)_didTapOnImageCollectionToEnterZoom;
-(void)_updateOptionAvailabilityStatusWithParentName:(id)arg1 ;
-(void)_openSelectionWithTitle:(id)arg1 items:(id)arg2 tag:(int)arg3 closeAction:(SEL)arg4 selectedIndex:(unsigned long long)arg5 ;
-(void)_clickAddToBag;
-(void)_closeSelection:(/*^block*/id)arg1 ;
-(id)_findProductVariantForOptions:(id)arg1 ;
-(void)_pushReviewOrderViewController;
-(id)_imageWithView:(id)arg1 ;
-(BOOL)hasEmptyOption;
-(void)_openEmptyOption;
-(void)setUnlockItems:(NSArray *)arg1 ;
-(void)_showCameraVCAndPopToRoot:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)disableDownSwipe;
-(void)handlePanGestureRecognizerSuper:(id)arg1 ;
-(SCOperaLoadingLayerView *)loadingLayerView;
-(void)setProductActionData:(SOJUScannableActionMarcoAction *)arg1 ;
-(void)_hideLoadingView:(id)arg1 ;
-(BOOL)isPdpVisible;
-(void)setIsPdpVisibleObserverAdded:(BOOL)arg1 ;
-(BOOL)_isOperaPagingEnabled;
-(void)setIsPdpVisible:(BOOL)arg1 ;
-(void)_removePdpVisibilityObserver;
-(BOOL)isPdpVisibleObserverAdded;
-(void)productDetailsCardView:(id)arg1 didSelectVariantOption:(id)arg2 ;
-(void)productDetailsCardView:(id)arg1 didScrollWithContentOffset:(CGPoint)arg2 ;
-(void)didTapProductDisplayPageActionButtonInContainerView:(id)arg1 ;
-(void)productOptionPickerView:(id)arg1 didSelectOption:(id)arg2 selectedItem:(id)arg3 ;
-(void)productCartStatusViewDidTapped:(id)arg1 ;
-(void)photoGalleryViewController:(id)arg1 didNavigateToPhoto:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)photoGalleryViewControllerDidDismiss:(id)arg1 ;
-(id)photoGalleryViewController:(id)arg1 loadingViewForPhoto:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)photoGalleryViewController:(id)arg1 referenceViewForPhoto:(id)arg2 ;
-(double)photoGalleryViewController:(id)arg1 maximumZoomScaleForPhoto:(id)arg2 ;
-(void)handleSuccessWithScannableActions:(id)arg1 responseDictionary:(id)arg2 scanData:(id)arg3 scannableId:(id)arg4 codeType:(int)arg5 version:(int)arg6 pageType:(long long)arg7 unlockProperties:(id)arg8 ;
-(void)handleErrorWithResponseDictionary:(id)arg1 errorData:(id)arg2 ;
-(void)timeoutTimerFired;
-(id)initWithProductData:(id)arg1 userSession:(id)arg2 ;
-(id)initWithProductId:(id)arg1 userSession:(id)arg2 ;
-(void)_pagerButtonPressed;
-(void)_hideProductSoldOut;
-(void)_showErrorPlaceHolder;
-(void)setProductLayer:(SCCommerceProductOperaLayer *)arg1 ;
-(void)setLoadingLayerView:(SCOperaLoadingLayerView *)arg1 ;
-(double)contentOffsetY;
-(void)setContentOffsetY:(double)arg1 ;
-(NSArray *)unlockItems;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(id)displayId;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)teardown;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)interactionInProgress;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(NSString *)productId;
-(void)setProductId:(NSString *)arg1 ;
-(id<NavigationDelegate>)navigationDelegate;
-(void)handleTapFrom:(id)arg1 ;
-(void)_showLoadingView;
-(void)showErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end

