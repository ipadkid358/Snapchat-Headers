/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCProgressOverlayViewDelegate.h>

@protocol SCProgressReportingSCCanceling;
@class SCUserSession, NSArray, UIViewController, SCProgressOverlayView, NSDictionary, NSError, NSString;

@interface SCGalleryPrepareMediaForSnapsOperation : NSObject <SCProgressOverlayViewDelegate> {

	SCUserSession* _userSession;
	NSArray* _gallerySnaps;
	UIViewController* _containerViewController;
	BOOL _showsProgressOverlay;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	BOOL _longRunning;
	NSArray* _gallerySnapsToDownloadMedia;
	SCProgressOverlayView* _progressOverlayView;
	NSDictionary* _cloudFilesContainers;
	id<SCProgressReporting><SCCanceling> _downloadRequest;
	BOOL _running;
	BOOL _completed;
	BOOL _succeeded;
	BOOL _cancelled;
	NSError* _error;
	unsigned long long _totalImages;
	unsigned long long _totalVideos;
	unsigned long long _totalDownloadedImages;
	unsigned long long _totalDownloadedVideos;
	unsigned long long _totalSmartShareableImages;
	unsigned long long _totalSmartShareableVideos;
	unsigned long long _totalUnSyncedImages;
	unsigned long long _totalUnSyncedVideos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGallerySnaps:(id)arg1 containerViewController:(id)arg2 showsProgressOverlay:(BOOL)arg3 userSession:(id)arg4 ;
-(void)runWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)progressOverlayViewDidCancel:(id)arg1 ;
-(void)_prepareMediaForIndex:(unsigned long long)arg1 ;
-(BOOL)isLongRunning;
-(void)_updateSmartShareLoggingWithSnap:(id)arg1 ;
-(void)_updateDownloadedLoggingWithSnap:(id)arg1 ;
-(id)initWithGalleryEntries:(id)arg1 containerViewController:(id)arg2 showsProgressOverlay:(BOOL)arg3 userSession:(id)arg4 ;
-(void)cancel;
-(void)_updateProgress:(float)arg1 ;
-(void)_complete;
-(void)_log;
@end
