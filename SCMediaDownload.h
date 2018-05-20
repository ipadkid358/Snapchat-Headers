/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol SCMediaDownloadLogger, SCNetworker;
@class NSMutableDictionary, SCQueuePerformer, NSString;

@interface SCMediaDownload : NSObject <NSURLSessionDelegate> {

	id<SCMediaDownloadLogger> _logger;
	NSMutableDictionary* _pendingRequestGroups;
	NSMutableDictionary* _inflightRequestGroups;
	atomic<SCMediaScenePath> _mediaScenePath;
	SCQueuePerformer* _performer;
	id<SCNetworker> _networker;

}

@property (nonatomic,readonly) SCQueuePerformer * performer;                  //@synthesize performer=_performer - In the implementation block
@property (nonatomic,readonly) id<SCNetworker> networker;                     //@synthesize networker=_networker - In the implementation block
@property (nonatomic,readonly) id<SCMediaDownloadLogger> logger;              //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCQueuePerformer *)performer;
-(void)_scheduleNextRequestGroup;
-(void)_addRequestGroup:(id)arg1 ;
-(id)_selectNextRequestGroup;
-(void)_enqueueRequestGroup:(id)arg1 ;
-(id)initWithNetworker:(id)arg1 logger:(id)arg2 ;
-(id)downloadMediaForEntity:(id)arg1 mediaScenePath:(SCD_Struct_SC329)arg2 queue:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setMediaScenePath:(SCD_Struct_SC329)arg1 ;
-(id<SCNetworker>)networker;
-(id)downloadRenderedLowresMediaForSnap:(id)arg1 mediaScenePath:(SCD_Struct_SC329)arg2 fileResolver:(id)arg3 dataObjectContext:(id)arg4 queue:(id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)downloadMediaForSnap:(id)arg1 mediaScenePath:(SCD_Struct_SC329)arg2 fileResolver:(id)arg3 dataObjectContext:(id)arg4 queue:(id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)downloadSnapOverlayDataForSnap:(id)arg1 mediaScenePath:(SCD_Struct_SC329)arg2 fileResolver:(id)arg3 dataObjectContext:(id)arg4 queue:(id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)downloadHDMediaForSnap:(id)arg1 mediaScenePath:(SCD_Struct_SC329)arg2 fileResolver:(id)arg3 dataObjectContext:(id)arg4 queue:(id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id<SCMediaDownloadLogger>)logger;
@end

