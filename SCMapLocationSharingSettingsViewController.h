/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGenericSettingsViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Snapchat/SCLayoutAccessoryTableViewCellDelegate.h>
#import <Snapchat/SCMapFriendChooserDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCMapAttributionViewDelegate.h>
#import <Snapchat/SCBitmojiBuilderListener.h>
#import <Snapchat/SCMapExploreDataStoreListener.h>
#import <Snapchat/SCMGLMapViewListener.h>
#import <Snapchat/SCMapModalViewControllerSubclass.h>

@protocol SCObserving, SCMapLocationSharingSettingsViewControllerDelegate;
@class SCUserSession, NSArray, UIColor, SCEmbeddedMapView, SCMapSettingsHeaderOverlayView, SCMapExplorerMyStatus, SCMapSettingsTableViewCell, UISwitch, SCMapAttributionView, SCMapAttributionInformation, SCMapModalViewController, UITableView, NSString;

@interface SCMapLocationSharingSettingsViewController : SCGenericSettingsViewController <UITableViewDelegate, UITableViewDataSource, SCLayoutAccessoryTableViewCellDelegate, SCMapFriendChooserDelegate, SCTimeProfilable, SCMapAttributionViewDelegate, SCBitmojiBuilderListener, SCMapExploreDataStoreListener, SCMGLMapViewListener, SCMapModalViewControllerSubclass> {

	unsigned long long _options;
	id<SCObserving> _allowLocationRequestsObserver;
	SCUserSession* _userSession;
	long long _source;
	NSArray* _visibleSections;
	UIColor* _defaultTableViewBackgroundColor;
	UIColor* _defaultTableViewSeparatorColor;
	double _exploreMyStatusZoomLevel;
	SCEmbeddedMapView* _embeddedMapView;
	SCMapSettingsHeaderOverlayView* _exploreMyStatusOverlayView;
	SCMapExplorerMyStatus* _displayedExploreMyStatus;
	/*^block*/id _cleanupExploreStatus;
	SCMapSettingsTableViewCell* _ghostModeCell;
	UISwitch* _ghostModeSwitch;
	SCMapSettingsTableViewCell* _backgroundUpdateCell;
	UISwitch* _backgroundUpdateSwitch;
	SCMapSettingsTableViewCell* _allowLocationRequestCell;
	UISwitch* _allowLocationRequestSwitch;
	SCMapAttributionView* _attributionView;
	SCMapAttributionInformation* _attributionInformation;
	BOOL _shouldForceShowRemovingYourLocation;
	BOOL _fetchingBitmojiOutfitPack;
	BOOL _loading;
	BOOL _didLoad;
	SCMapModalViewController* _parentModalViewController;
	UITableView* _tableView;
	id<SCMapLocationSharingSettingsViewControllerDelegate> _locationSharingSettingsDelegate;

}

@property (nonatomic,retain) UITableView * tableView;                                                                                    //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                                                               //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL didLoad;                                                                                               //@synthesize didLoad=_didLoad - In the implementation block
@property (assign,nonatomic,__weak) id<SCMapLocationSharingSettingsViewControllerDelegate> locationSharingSettingsDelegate;              //@synthesize locationSharingSettingsDelegate=_locationSharingSettingsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SCMapModalViewController * parentModalViewController;                                                //@synthesize parentModalViewController=_parentModalViewController - In the implementation block
+(int)context;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(void)outfitPackDidChange;
-(void)mapAttributionViewDidTapMapbox:(id)arg1 ;
-(void)mapAttributionViewDidTapOpenStreetMap:(id)arg1 ;
-(void)mapAttributionViewDidTapDigitalGlobe:(id)arg1 ;
-(void)modalViewControllerPanGestureRecognizerDidFinish:(id)arg1 ;
-(BOOL)modalViewController:(id)arg1 panGestureRecognizer:(id)arg2 shouldBeginInView:(id)arg3 ;
-(void)_reloadTableView;
-(void)_setupHeaderView;
-(CGRect)layoutAccessoryTableViewCell:(id)arg1 frameForAccessoryView:(id)arg2 ;
-(void)mapExploreDataStoreDidLoadMyStatus:(id)arg1 ;
-(void)friendChooserWantsToSaveChanges:(id)arg1 ;
-(void)friendChooserUserDidTapDoneButton:(id)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 source:(long long)arg2 userSession:(id)arg3 ;
-(id)initWithOptions:(unsigned long long)arg1 source:(long long)arg2 userSession:(id)arg3 attributionInformation:(id)arg4 ;
-(void)_ghostModeSwitchValueDidChange:(id)arg1 ;
-(void)_backgroundUpdateSwitchValueDidChange:(id)arg1 ;
-(void)_allowLocationRequestSwitchValueDidChange:(id)arg1 ;
-(void)_reloadPreferences;
-(void)_didTapMyStatus:(id)arg1 ;
-(void)_setupMyStatusMap;
-(BOOL)userAllowedToChangeSettings;
-(void)displayNotOnboardedPopup;
-(void)_showAudienceChooserAlertForSwitchingOffGhostMode:(id)arg1 ;
-(/*^block*/id)_locationPreferencesUpdateCallback;
-(void)_forceShowRemovingYourLocationForSeconds:(double)arg1 ;
-(void)_showGhostModeTimerOptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_showFriendChooserForCurrentPreferences;
-(id<SCMapLocationSharingSettingsViewControllerDelegate>)locationSharingSettingsDelegate;
-(void)_showExploreMyStatusTooltipIfNecessary;
-(void)_updateMyStatusViews;
-(void)_updateGhostModeCell;
-(void)_didLoadPreferencesWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)setDidLoad:(BOOL)arg1 ;
-(void)_layoutAttributionView;
-(id)_availableAudienceItems;
-(id)_selectedFriendsCommaSeparatedString;
-(BOOL)_currentUserHasBitmoji;
-(void)_showChangeBitmojiOutfitViewController;
-(void)_enterGhostModeAfterDeselectingAll;
-(void)setLocationSharingSettingsDelegate:(id<SCMapLocationSharingSettingsViewControllerDelegate>)arg1 ;
-(BOOL)didLoad;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)setParentModalViewController:(SCMapModalViewController *)arg1 ;
-(SCMapModalViewController *)parentModalViewController;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(void)mapViewDidFinishLoadingMap:(id)arg1 ;
@end

