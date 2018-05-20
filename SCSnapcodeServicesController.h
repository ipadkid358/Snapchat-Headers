/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGenericSettingsViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCSnapcodeTabBarDelegate.h>
#import <Snapchat/SCSnapcodeTabCardViewViewDelegate.h>
#import <Snapchat/SCSnapcodeSquadTabCardViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Snapchat/SCSnapcodeSquadControllerDelegate.h>
#import <Snapchat/SCWebImageScraperClientDelegate.h>
#import <Snapchat/TTTAttributedLabelDelegate.h>
#import <Snapchat/SCSnapcodeDetailMixinViewDelegate.h>
#import <Snapchat/SCSnapcodeImageEditControllerDelegate.h>

@protocol NavigationDelegate;
@class SCUserSession, SCSnapcodeTabBar, SCSnapcodeWebTabCardView, SCSnapcodeSquadTabCardView, SCScannableInfo, SVGRenderer, UIView, NSString, UIColor, SCSnapcodeSquadController, SCWebImageScraperClient, SCSnapcodeDetailMixinView, SCSnapcodeShareView, UITableView, UIScrollView, SVGDocumentView, SCSnapcodeDotAnimationView, UIButton, UIImage, SCSnapcodeImageContainerView, SCPreviewTooltipBalloon;

@interface SCSnapcodeServicesController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCSnapcodeTabBarDelegate, SCSnapcodeTabCardViewViewDelegate, SCSnapcodeSquadTabCardViewDelegate, UIScrollViewDelegate, SCSnapcodeSquadControllerDelegate, SCWebImageScraperClientDelegate, TTTAttributedLabelDelegate, SCSnapcodeDetailMixinViewDelegate, SCSnapcodeImageEditControllerDelegate> {

	BOOL _moveScrollerAnimated;
	SCUserSession* _userSession;
	SCSnapcodeTabBar* _primaryTabBar;
	SCSnapcodeWebTabCardView* _webCard;
	SCSnapcodeSquadTabCardView* _squadCard;
	SCScannableInfo* _createdScannable;
	SVGRenderer* _svgSnapcodeRenderer;
	int itemFetchAttempt;
	double frameWidth;
	double frameHeight;
	double headerHeight;
	double scrollPageHeight;
	double tableStart;
	double snapcodeSelectionViewTopOffset;
	CGPoint _translation;
	double _editStartPosition;
	UIView* _detailView;
	BOOL _createPageVisible;
	NSString* _createdPageWebsiteTitle;
	UIColor* _defaultBackgroundColor;
	SCSnapcodeSquadController* _squadController;
	SCWebImageScraperClient* _imageScraperClient;
	SCSnapcodeDetailMixinView* _detailMixinView;
	SCSnapcodeShareView* _snapcodeShareView;
	BOOL _leftSwipeEnabled;
	id<NavigationDelegate> _navigationDelegate;
	NSString* _pageViewName;
	UITableView* _tableView;
	UIScrollView* _scrollView;
	UIScrollView* _pageScrollView;
	SVGDocumentView* _snapcodeView;
	SCSnapcodeDotAnimationView* _snapcodeAnimationView;
	UIButton* _snapcodeButton;
	UIButton* _snapcodeCreateButton;
	UIButton* _snapcodeHeaderButton;
	UIImage* _chosenImage;
	SCSnapcodeImageContainerView* _snapcodeContainerView;
	UIButton* _shareButton;
	SCPreviewTooltipBalloon* _imageEditTooltip;
	UIColor* _pointColor;

}

@property (nonatomic,retain) NSString * pageViewName;                                           //@synthesize pageViewName=_pageViewName - In the implementation block
@property (assign,nonatomic) BOOL leftSwipeEnabled;                                             //@synthesize leftSwipeEnabled=_leftSwipeEnabled - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIScrollView * pageScrollView;                                     //@synthesize pageScrollView=_pageScrollView - In the implementation block
@property (nonatomic,retain) SVGDocumentView * snapcodeView;                                    //@synthesize snapcodeView=_snapcodeView - In the implementation block
@property (nonatomic,retain) SCSnapcodeDotAnimationView * snapcodeAnimationView;                //@synthesize snapcodeAnimationView=_snapcodeAnimationView - In the implementation block
@property (nonatomic,retain) UIButton * snapcodeButton;                                         //@synthesize snapcodeButton=_snapcodeButton - In the implementation block
@property (nonatomic,retain) UIButton * snapcodeCreateButton;                                   //@synthesize snapcodeCreateButton=_snapcodeCreateButton - In the implementation block
@property (nonatomic,retain) UIButton * snapcodeHeaderButton;                                   //@synthesize snapcodeHeaderButton=_snapcodeHeaderButton - In the implementation block
@property (nonatomic,retain) UIImage * chosenImage;                                             //@synthesize chosenImage=_chosenImage - In the implementation block
@property (nonatomic,retain) SCSnapcodeImageContainerView * snapcodeContainerView;              //@synthesize snapcodeContainerView=_snapcodeContainerView - In the implementation block
@property (nonatomic,retain) UIButton * shareButton;                                            //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) SCPreviewTooltipBalloon * imageEditTooltip;                        //@synthesize imageEditTooltip=_imageEditTooltip - In the implementation block
@property (nonatomic,retain) UIColor * pointColor;                                              //@synthesize pointColor=_pointColor - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;                  //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2 ;
-(void)leftButtonPressed;
-(BOOL)disableLeftSwipe;
-(BOOL)inValidView:(id)arg1 ;
-(void)leftSwipeSucceed;
-(void)setPageViewName:(NSString *)arg1 ;
-(NSString *)pageViewName;
-(id)getTitle;
-(void)_didTapShareButton;
-(id)getPageViewName;
-(SVGDocumentView *)snapcodeView;
-(void)snapcodeTabBar:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)updateWithHighlightedIndex:(double)arg1 ;
-(void)_presentWebViewWithUrl:(id)arg1 ;
-(void)setSnapcodeButton:(UIButton *)arg1 ;
-(UIButton *)snapcodeButton;
-(void)snapcodeImageEditController:(id)arg1 didSaveImageScreenshot:(id)arg2 selectedImage:(id)arg3 imageTransform:(CGAffineTransform)arg4 ;
-(void)snapcodeImageEditControllerDidRemoveImage:(id)arg1 ;
-(void)snapcodeSquadCardDidClickAddMembers:(id)arg1 ;
-(void)snapcodeTabCard:(id)arg1 editScannable:(id)arg2 ;
-(void)snapcodeTabCard:(id)arg1 createScannable:(id)arg2 ;
-(void)snapcodeTabCard:(id)arg1 showAlert:(id)arg2 ;
-(SCPreviewTooltipBalloon *)imageEditTooltip;
-(void)setImageEditTooltip:(SCPreviewTooltipBalloon *)arg1 ;
-(BOOL)leftSwipeEnabled;
-(void)setLeftSwipeEnabled:(BOOL)arg1 ;
-(void)setSnapcodeContainerView:(SCSnapcodeImageContainerView *)arg1 ;
-(SCSnapcodeImageContainerView *)snapcodeContainerView;
-(void)hideImageEditTooltip;
-(void)setChosenImage:(UIImage *)arg1 ;
-(void)showImageEditTooltip;
-(void)snapcodeDetailMixinViewDidDelete:(id)arg1 ;
-(void)snapcodeDetailMixinViewDidPushController:(id)arg1 controller:(id)arg2 ;
-(void)snapcodeDetailMixinViewDidPresentController:(id)arg1 controller:(id)arg2 ;
-(void)snapcodeDetailMixinViewDidUpdateGhostImage:(id)arg1 image:(id)arg2 ;
-(void)snapcodeDetailMixinViewDidUpdateScannable:(id)arg1 scannable:(id)arg2 ;
-(void)webImageScraperClientDidReceive:(id)arg1 image:(id)arg2 imageIdentifier:(id)arg3 pageIdentifier:(id)arg4 ;
-(void)webImageScraperClientDidNotReceiveImageLinks:(id)arg1 ;
-(void)webImageScraperClient:(id)arg1 receivedTitle:(id)arg2 forPageUrl:(id)arg3 ;
-(BOOL)isImageEditTooltipVisible;
-(UIImage *)chosenImage;
-(void)snapcodeSquadControllerUpdated:(id)arg1 forFriend:(id)arg2 selected:(BOOL)arg3 ;
-(void)snapcodeDataStoreDidUpdate:(id)arg1 ;
-(void)setSnapcodeAnimationView:(SCSnapcodeDotAnimationView *)arg1 ;
-(SCSnapcodeDotAnimationView *)snapcodeAnimationView;
-(void)setPageScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)pageScrollView;
-(id)_createSecondPage;
-(void)_addDetailSnapcodeView;
-(void)snapcodeTapGestureDetected:(id)arg1 ;
-(void)_presentMakeSnapcodeView;
-(void)_presentYourSnapcodes;
-(void)_presentScanHistory;
-(void)_showCreateMenu;
-(BOOL)_showTabBar;
-(void)createButtonEntryAnimationStops;
-(double)_snapcodeAnimationOffset;
-(UIButton *)snapcodeHeaderButton;
-(void)createButtonExitAnimationStops;
-(void)updatePager;
-(void)createSnapcodesWithRequestParameters:(id)arg1 card:(id)arg2 ;
-(void)_showCreatedSnapcodeAnimationStops;
-(id)activeSquadController;
-(void)_showCreatedSnapcode:(id)arg1 ;
-(void)_showMainMenu;
-(id)initWithPageViewName:(id)arg1 title:(id)arg2 leftSwipeEnabled:(BOOL)arg3 userSession:(id)arg4 ;
-(void)setIsWorking:(BOOL)arg1 ;
-(void)setSnapcodeView:(SVGDocumentView *)arg1 ;
-(UIButton *)snapcodeCreateButton;
-(void)setSnapcodeCreateButton:(UIButton *)arg1 ;
-(void)setSnapcodeHeaderButton:(UIButton *)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(UIScrollView *)scrollView;
-(void)showAlert:(id)arg1 ;
-(id<NavigationDelegate>)navigationDelegate;
-(void)_presentCameraRoll;
-(UIButton *)shareButton;
-(void)setShareButton:(UIButton *)arg1 ;
-(UIColor *)pointColor;
-(void)setPointColor:(UIColor *)arg1 ;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end

