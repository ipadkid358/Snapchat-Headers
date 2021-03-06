/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMiniProfileBaseViewController.h>
#import <Snapchat/SCMiniProfileStoryOptionsSectionControllerDelegate.h>
#import <Snapchat/SCMiniProfileStoryIdentitySectionControllerDelegate.h>
#import <Snapchat/SCMiniProfileStorySubscribeButtonDelegate.h>
#import <Snapchat/SCOperaPresenterDelegate.h>

@protocol SCStoryMiniProfileViewControllerDelegate;
@class SCStoryMiniProfileViewModel, NSDictionary, SCUserSession, NSArray, SCOperaPresenter, SCTooltipStoriesEverywhere, NSString;

@interface SCStoryMiniProfileViewController : SCMiniProfileBaseViewController <SCMiniProfileStoryOptionsSectionControllerDelegate, SCMiniProfileStoryIdentitySectionControllerDelegate, SCMiniProfileStorySubscribeButtonDelegate, SCOperaPresenterDelegate> {

	id<SCStoryMiniProfileViewControllerDelegate> _delegate;
	SCStoryMiniProfileViewModel* _viewModel;
	NSDictionary* _additionalInfo;
	SCUserSession* _userSession;
	NSArray* _contexts;
	SCOperaPresenter* _operaPresenter;
	SCTooltipStoriesEverywhere* _tooltip;
	unsigned long long _storyOptionsSection;

}

@property (assign,nonatomic,__weak) SCUserSession * userSession;                                        //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,copy) NSArray * contexts;                                                          //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) SCOperaPresenter * operaPresenter;                                         //@synthesize operaPresenter=_operaPresenter - In the implementation block
@property (nonatomic,retain) SCTooltipStoriesEverywhere * tooltip;                                      //@synthesize tooltip=_tooltip - In the implementation block
@property (assign,nonatomic) unsigned long long storyOptionsSection;                                    //@synthesize storyOptionsSection=_storyOptionsSection - In the implementation block
@property (assign,nonatomic,__weak) id<SCStoryMiniProfileViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCStoryMiniProfileViewModel * viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalInfo;                                           //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operaPresenterDidFailToPresent:(id)arg1 ;
-(void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2 ;
-(void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2 ;
-(void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1 ;
-(void)operaPresenterDidFinishDismissing:(id)arg1 ;
-(void)operaPresenterDidCancelDismissing:(id)arg1 ;
-(void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2 ;
-(void)operaPresenterDidTearDown:(id)arg1 ;
-(void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2 ;
-(void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3 ;
-(SCOperaPresenter *)operaPresenter;
-(id)initWithUserSession:(id)arg1 delegate:(id)arg2 contexts:(id)arg3 additionalInfo:(id)arg4 ;
-(void)miniProfileStorySubscribeButtonDidTap:(id)arg1 ;
-(void)storyIdentitySectionController:(id)arg1 didTapThumbnailView:(id)arg2 ;
-(void)storyOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2 ;
-(void)_displayStoriesEverywhereTooltipIfNecessary;
-(void)updateAdditionalInfoWithObject:(id)arg1 forKey:(id)arg2 ;
-(void)setOperaPresenter:(SCOperaPresenter *)arg1 ;
-(unsigned long long)storyOptionsSection;
-(void)setStoryOptionsSection:(unsigned long long)arg1 ;
-(void)setDelegate:(id<SCStoryMiniProfileViewControllerDelegate>)arg1 ;
-(id<SCStoryMiniProfileViewControllerDelegate>)delegate;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(SCStoryMiniProfileViewModel *)viewModel;
-(void)setViewModel:(SCStoryMiniProfileViewModel *)arg1 ;
-(SCTooltipStoriesEverywhere *)tooltip;
-(void)setTooltip:(SCTooltipStoriesEverywhere *)arg1 ;
-(NSDictionary *)additionalInfo;
-(NSArray *)contexts;
-(void)setContexts:(NSArray *)arg1 ;
@end

