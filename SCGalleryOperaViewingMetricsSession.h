/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaEventListener.h>

@protocol SCGallerySnap, SCGalleryEntry;
@class SCUserSession, SCOperaEventListenerAnnouncer, SCGalleryItemsOperaDataSource, NSString;

@interface SCGalleryOperaViewingMetricsSession : NSObject <SCOperaEventListener> {

	SCUserSession* _userSession;
	id<SCGallerySnap> _currentDisplayLoadingSnap;
	double _currentDisplayLoadingSnapStartTime;
	SCOperaEventListenerAnnouncer* _eventAnnouncer;
	SCGalleryItemsOperaDataSource* _itemsDataSource;
	id<SCGalleryEntry> _currentStory;
	unsigned long long _totalSnapsViewed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(id)_registeredEventsForOperaSession;
-(void)_logPreviousUnfinishLoadingSnapIfNeeded;
-(unsigned long long)_browseMediaTypeForSnap:(id)arg1 context:(id)arg2 ;
-(void)_logStorySessionIfNeeded:(id)arg1 ;
-(void)_startToViewSnap:(id)arg1 browseMediaType:(unsigned long long)arg2 context:(id)arg3 ;
-(void)_logIsBrowsingFullResolutionImageIfNeeded:(id)arg1 context:(id)arg2 ;
-(void)_logCurrentFinishLoadingSnap:(id)arg1 browseMediaType:(unsigned long long)arg2 ;
-(void)_invalidateCurrentLoadingSnap;
-(void)_endStoryViewSessionIfNeeded;
-(void)_startStoryViewSession:(id)arg1 ;
-(id)initWithEventAnnouncer:(id)arg1 itemsDataSource:(id)arg2 userSession:(id)arg3 ;
-(void)dealloc;
@end
