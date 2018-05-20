/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PHImageManager, PHAsset, SCQueuePerformer, NSObject, NSURL, NSMutableArray;

@interface SCGalleryVideoAssetSegmentedExportSession : NSObject {

	PHImageManager* _imageManager;
	PHAsset* _videoAsset;
	double _segmentDuration;
	SCQueuePerformer* _performer;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _completionHandler;
	NSURL* _videoURL;
	long long _orientation;
	long long _segmentCount;
	NSMutableArray* _segmentURLs;
	BOOL _optimizesForNetworkUse;

}

@property (assign,nonatomic) BOOL optimizesForNetworkUse;              //@synthesize optimizesForNetworkUse=_optimizesForNetworkUse - In the implementation block
-(void)exportWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)optimizesForNetworkUse;
-(void)setOptimizesForNetworkUse:(BOOL)arg1 ;
-(void)_completeWithVideoURL:(id)arg1 segmentURLs:(id)arg2 orientation:(long long)arg3 error:(id)arg4 ;
-(void)_exportSegmentAtIndex:(unsigned long long)arg1 ;
-(id)initWithImageManager:(id)arg1 videoAsset:(id)arg2 segmentDuration:(double)arg3 ;
@end
