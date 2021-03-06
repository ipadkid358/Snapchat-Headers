/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMapTapToPlayPresenterDelegate.h>

@protocol NavigationDelegate, SCMapPoiPresenterDelegate;
@class SCMapTapToPlayPresenter, UIView, SCMapLoggerSession, SCUserSession, SCMTTileSetId, SCXRenderLockManager, FriendStories, SCMapRequest, NSString;

@interface SCMapPoiPresenter : NSObject <SCMapTapToPlayPresenterDelegate> {

	SCMapTapToPlayPresenter* _tapToPlayPresenter;
	UIView* _baseView;
	SCMapLoggerSession* _loggerSession;
	SCUserSession* _userSession;
	SCMTTileSetId* _tileSetId;
	SCXRenderLockManager* _renderLockManager;
	id<NavigationDelegate> _navigationDelegate;
	double _zoomLevel;
	FriendStories* _presentedFriendStories;
	SCMapRequest* _fullManifestRequest;
	id<SCMapPoiPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCMapPoiPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissStory;
-(id)_friendStoriesForPoi:(id)arg1 tileSetId:(id)arg2 reportedIds:(id)arg3 mapSourceType:(long long)arg4 ;
-(id)baseViewForFriendStories:(id)arg1 ;
-(void)didDismissTapToPlayPresenter:(id)arg1 ;
-(id)initWithLoggerSession:(id)arg1 userSession:(id)arg2 tileSetId:(id)arg3 zoomLevel:(double)arg4 renderLockManager:(id)arg5 navigationDelegate:(id)arg6 ;
-(void)presentPoi:(id)arg1 baseView:(id)arg2 mapSourceType:(long long)arg3 ;
-(void)setDelegate:(id<SCMapPoiPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<SCMapPoiPresenterDelegate>)delegate;
-(void)_cleanUp;
@end

