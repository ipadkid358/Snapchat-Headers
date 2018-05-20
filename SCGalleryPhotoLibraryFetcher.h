/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class SCQueuePerformer, NSArray, SCGalleryPhotoLibraryFetcherListenerAnnouncer, NSString;

@interface SCGalleryPhotoLibraryFetcher : NSObject <PHPhotoLibraryChangeObserver> {

	SCQueuePerformer* _performer;
	unsigned long long _resultType;
	BOOL _observesChange;
	/*^block*/id _resultHandler;
	BOOL _didFireFetch;
	BOOL _didSetupFetch;
	id _photoPermissionDeterminedNotificationObserver;
	NSArray* _fetchResults;
	NSArray* _photoAssets;
	SCGalleryPhotoLibraryFetcherListenerAnnouncer* _announcer;
	BOOL _isInBackground;
	BOOL _didChangeInBackground;

}

@property (assign) BOOL isInBackground;                             //@synthesize isInBackground=_isInBackground - In the implementation block
@property (assign) BOOL didChangeInBackground;                      //@synthesize didChangeInBackground=_didChangeInBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchWithResultType:(unsigned long long)arg1 observesChange:(BOOL)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_notifyWithPhotoAssets:(id)arg1 ;
-(void)_setupFetch;
-(BOOL)_needsRefetchPhotoAssetsForChange:(id)arg1 ;
-(void)setDidChangeInBackground:(BOOL)arg1 ;
-(void)_fetchPhotoAssets;
-(BOOL)didChangeInBackground;
-(id)init;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setIsInBackground:(BOOL)arg1 ;
-(BOOL)isInBackground;
-(void)_didEnterBackground;
-(void)_willEnterForeground;
@end
