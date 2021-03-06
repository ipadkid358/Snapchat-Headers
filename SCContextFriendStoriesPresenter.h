/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCStoryPresenterDelegate.h>
#import <Snapchat/SCOperaEventListener.h>

@protocol SCContextFriendStoriesPresenterDelegate;
@class SCContextSession, SCStoryPresenter_DEPRECATED, Story, UIView, UIViewController, NSString;

@interface SCContextFriendStoriesPresenter : NSObject <SCStoryPresenterDelegate, SCOperaEventListener> {

	SCContextSession* _session;
	SCStoryPresenter_DEPRECATED* _storyPresenter;
	Story* _visibleStory;
	UIView* _baseView;
	id<SCContextFriendStoriesPresenterDelegate> _delegate;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) id<SCContextFriendStoriesPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                       //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(void)storyPresenter:(id)arg1 didDismissFriendStories:(id)arg2 becameFullyViewed:(BOOL)arg3 succeededToPresent:(BOOL)arg4 viewingType:(long long)arg5 ;
-(void)storyPresenter:(id)arg1 beginDismissFriendStories:(id)arg2 previousFriendStories:(id)arg3 ;
-(void)storyPresenterWillBeginPresentingStory:(id)arg1 ;
-(void)storyPresenterDidFinishPresentingStory:(id)arg1 ;
-(void)storyPresenterWillBeginAnimatingToDismissStory:(id)arg1 ;
-(void)storyPresenterDidCancelDismissingStory:(id)arg1 ;
-(void)storyPresenterDidFinishDismissingStory:(id)arg1 ;
-(void)storyPresenterWillBeginPlayingStory:(id)arg1 friendStories:(id)arg2 viewLocation:(long long)arg3 ;
-(void)storyPresenter:(id)arg1 didBeginPlayingFriendStories:(id)arg2 ;
-(void)storyPresenter:(id)arg1 didFinishViewingFriendStories:(id)arg2 firstStoryDisplayed:(id)arg3 isReplayMode:(BOOL)arg4 becameFullyViewed:(BOOL)arg5 ;
-(id)initWithContextSession:(id)arg1 ;
-(void)presentFriendStories:(id)arg1 initialFriendStories:(id)arg2 baseView:(id)arg3 circleTransition:(BOOL)arg4 ;
-(id)visibleStory;
-(void)setDelegate:(id<SCContextFriendStoriesPresenterDelegate>)arg1 ;
-(id<SCContextFriendStoriesPresenterDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(void)_cleanup;
-(void)dismiss;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(BOOL)isPresenting;
@end

