/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCProfileV3CellController.h>
#import <Snapchat/SCProfileV3MyStoryCellDelegate.h>
#import <Snapchat/SCProfileV3IndividualStoryCellControllerDelegate.h>
#import <Snapchat/SCExportMyStoriesManagerDelegate.h>
#import <Snapchat/SCStoriesModelUpdateListener.h>
#import <Snapchat/SCGroupStorySettingsViewControllerDelegate.h>
#import <Snapchat/SCGroupStorySettingsControllerDelegate.h>

@protocol SCStoriesService, SCReplyDelegate;
@class SCProfileV3MyStoryCellView, SCProfileV3MyStoryStackCellView, SCProfileV3MyStoryCellViewModel, SCUserSession, User, SCGroupStorySettingsViewController, SCMyStories, NSDictionary, NSArray, SCExportMyStoriesManager, NSString;

@interface SCProfileV3MyStoryCellController : SCProfileV3CellController <SCProfileV3MyStoryCellDelegate, SCProfileV3IndividualStoryCellControllerDelegate, SCExportMyStoriesManagerDelegate, SCStoriesModelUpdateListener, SCGroupStorySettingsViewControllerDelegate, SCGroupStorySettingsControllerDelegate> {

	BOOL _expanded;
	BOOL _stackCellChanged;
	SCProfileV3MyStoryCellView* _myStoryCell;
	SCProfileV3MyStoryStackCellView* _stackCell;
	id<SCStoriesService> _storiesService;
	id<SCReplyDelegate> _replyDelegate;
	SCProfileV3MyStoryCellViewModel* _viewModel;
	SCUserSession* _userSession;
	User* _user;
	SCGroupStorySettingsViewController* _storiesSettingsViewController;
	SCMyStories* _myStories;
	NSDictionary* _individualStoryControllerIdentifiers;
	NSDictionary* _individualStoryCellIdentifiers;
	NSArray* _individualStoryCellOrdering;
	SCExportMyStoriesManager* _exportMyStoriesManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierForMyStories:(id)arg1 ;
+(BOOL)isOurStory:(id)arg1 ;
-(id)cellReuseIdentifier;
-(void)willDisplayCell:(id)arg1 ;
-(void)storiesModelDidUpdateWithParams:(id)arg1 ;
-(void)fillInGeofenceDetails;
-(void)didFinishUpdatingPublicationMetadata:(id)arg1 ;
-(void)didUpdateSettingsForPublication:(id)arg1 ;
-(void)updatePublicationForRemoval:(id)arg1 groupStories:(id)arg2 ;
-(void)gsSettingsViewControllerDidFinishEditing:(id)arg1 ;
-(void)gsSettingsViewController:(id)arg1 didUpdateSettingsForPublication:(id)arg2 ;
-(void)gsSettingsViewController:(id)arg1 updateTableForPublicationCreation:(id)arg2 ;
-(void)gsSettingsViewControllerDidAttemptToKeepEditing:(id)arg1 ;
-(void)gsSettingsViewController:(id)arg1 updateTableForPublicationReaddition:(id)arg2 ;
-(void)gsSettingsViewController:(id)arg1 updateTableForPublicationRemoval:(id)arg2 groupStories:(id)arg3 ;
-(void)showPhotoAccessDeniedAlertView;
-(void)handleStartSavingMyStories;
-(void)handleSavedMyStories:(id)arg1 withError:(id)arg2 ;
-(void)updateSaveMyStories:(id)arg1 withProgress:(double)arg2 ;
-(void)savePressedForStory:(id)arg1 ;
-(void)deletePressedForStory:(id)arg1 ;
-(void)refreshCell;
-(void)attachCellView:(id)arg1 ;
-(CGSize)sizeForCell;
-(void)cellWasTapped:(id)arg1 ;
-(id)getAnalyitcsSections;
-(id)uniqueCellIdentifier;
-(void)presentStory:(id)arg1 fromView:(id)arg2 showViewersTable:(BOOL)arg3 ;
-(void)postNowPressedForStory:(id)arg1 ;
-(void)viewersPressedForMyStory:(id)arg1 ;
-(id)_buildViewModel;
-(id)myStoryCell;
-(void)_updateIndividualStoryCells;
-(BOOL)_allowsAddToStoryForStories:(id)arg1 ;
-(id)featuredStoryTitles:(id)arg1 ;
-(CGSize)_sizeForUnexpandedMyStoryCell;
-(id)_getIndividualStoryCellsForMyStories:(id)arg1 ;
-(id)_getOrderedCells:(id)arg1 ;
-(BOOL)_didOrderingChangeForCells:(id)arg1 oldCells:(id)arg2 ;
-(id)_groupStoriesCollection;
-(id)_getExpandedStoriesForMyStory:(id)arg1 ;
-(void)_updateHeight:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)associatedStoryTitlesForStory:(id)arg1 ;
-(void)refreshStories;
-(void)_setHiddenOnControllers:(BOOL)arg1 ;
-(void)_presentStoryOrStories:(id)arg1 friendStories:(id)arg2 showViewersTable:(BOOL)arg3 baseView:(id)arg4 ;
-(void)_addToMyStories;
-(BOOL)_shouldWarnAboutGeofence;
-(void)_warnAboutGeofence;
-(void)presentSettingsForSourceType:(long long)arg1 ;
-(id)_myContributionStoriesCollection;
-(void)_didTryToPlayNotReadyFriendStories:(id)arg1 viewingType:(long long)arg2 ;
-(void)_configureAssociatedSearchStoriesForStory:(id)arg1 ;
-(void)_didSelectCell:(id)arg1 withMyStories:(id)arg2 ;
-(void)storyIconPressed;
-(void)addToMyStoryPressed;
-(void)myContributionStoryInfoPressed;
-(void)savePressed;
-(id)initWithMyStories:(id)arg1 userSession:(id)arg2 user:(id)arg3 replyDelegate:(id)arg4 storiesService:(id)arg5 isFirstLoad:(BOOL)arg6 ;
-(id)_myContributionStoriesToDisplay;
-(void)dealloc;
-(NSString *)description;
-(Class)cellClass;
-(void)_setExpanded:(BOOL)arg1 ;
-(void)actionButtonPressed:(CGRect)arg1 ;
@end

