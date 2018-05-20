/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaSession.h>

@protocol SCOperaPlaylistItemController;
@class NSArray, SCOperaViewController, SCDiscoverOperaMediaManager, SCDiscoverChunk, SCUserSession, NSString;

@interface SCDiscoverAdSession : NSObject <SCOperaSession> {

	NSArray* _chunks;
	NSArray* _adChunks;
	SCOperaViewController* _operaViewController;
	SCDiscoverOperaMediaManager* _mediaManager;
	id<SCOperaPlaylistItemController> _playlistItemController;
	SCDiscoverChunk* _currentAdChunk;
	SCUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(id)registeredEventsForOperaSession;
-(void)viewDidEnterBackground;
-(void)_userDidTakeScreenshot;
-(BOOL)_disableAdSkipforContext:(id)arg1 params:(id)arg2 ;
-(id)viewContext:(id)arg1 ;
-(id)initWithChunks:(id)arg1 adChunks:(id)arg2 operaViewController:(id)arg3 mediaManager:(id)arg4 playlistItemController:(id)arg5 userSession:(id)arg6 ;
-(void)dealloc;
@end

