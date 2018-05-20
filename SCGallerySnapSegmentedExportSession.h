/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGallerySnap, OS_dispatch_queue;
@class SCEncryptedContentManager, SCGallerySnapCloudFileContainer, SCQueuePerformer, NSObject, NSMutableArray, NSData;

@interface SCGallerySnapSegmentedExportSession : NSObject {

	SCEncryptedContentManager* _encryptedContentManager;
	id<SCGallerySnap> _snap;
	SCGallerySnapCloudFileContainer* _cloudFileContainer;
	double _segmentDuration;
	SCQueuePerformer* _performer;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _completionHandler;
	long long _segmentCount;
	NSMutableArray* _segmentURLs;
	NSData* _data;
	BOOL _optimizesForNetworkUse;

}

@property (assign,nonatomic) BOOL optimizesForNetworkUse;              //@synthesize optimizesForNetworkUse=_optimizesForNetworkUse - In the implementation block
-(void)exportWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)optimizesForNetworkUse;
-(void)setOptimizesForNetworkUse:(BOOL)arg1 ;
-(void)_exportSegmentAtIndex:(unsigned long long)arg1 ;
-(id)initWithEncryptedContentManager:(id)arg1 snap:(id)arg2 cloudFileContainer:(id)arg3 segmentDuration:(double)arg4 ;
-(void)_completeWithSegmentURLs:(id)arg1 error:(id)arg2 ;
@end

