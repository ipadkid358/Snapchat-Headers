/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchQueryReplayControlBarDelegate.h>

@protocol SCSearchQueryReplayControllerDelegate;
@class SCSessionRequestManager, SCSearchQueryReplayControlBar, NSArray, SCSearchGCDBlockTimer;

@interface SCSearchQueryReplayController : NSObject <SCSearchQueryReplayControlBarDelegate> {

	SCSessionRequestManager* _requestManager;
	SCSearchQueryReplayControlBar* _controlBar;
	NSArray* _queries;
	NSArray* _debugStrings;
	long long _currentIndex;
	SCSearchGCDBlockTimer* _queryExpiryTimer;
	SCSearchGCDBlockTimer* _skipQueryTimer;
	id<SCSearchQueryReplayControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSearchQueryReplayControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_next;
-(void)_previous;
-(void)searchQueryReplayControlBarDidTapBackwardButton:(id)arg1 ;
-(void)searchQueryReplayControlBarDidTapDislikeButton:(id)arg1 ;
-(void)searchQueryReplayControlBarDidTapPlayButton:(id)arg1 ;
-(void)searchQueryReplayControlBarDidTapRatingButton:(id)arg1 ;
-(void)searchQueryReplayControlBarDidTapSkipButton:(id)arg1 ;
-(void)searchQueryReplayControlBar:(id)arg1 didChangeSliderValue:(long long)arg2 ;
-(void)_fetchTopQueries;
-(void)_updateWithRawQueries:(id)arg1 ;
-(void)_searchWithQuery:(id)arg1 ;
-(void)_queryExpired;
-(id)_replayBarDisplayText;
-(void)setDelegate:(id<SCSearchQueryReplayControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCSearchQueryReplayControllerDelegate>)delegate;
-(id)view;
-(id)initWithRequestManager:(id)arg1 ;
@end

