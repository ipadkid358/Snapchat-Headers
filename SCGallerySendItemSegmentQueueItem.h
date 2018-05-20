/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGallerySnap;
@class SCEncryptedContentManager, SCGallerySnapCloudFileContainer, NSMutableArray, NSArray, PHAsset, NSString;

@interface SCGallerySendItemSegmentQueueItem : NSObject {

	SCEncryptedContentManager* _encryptedContentManager;
	SCGallerySnapCloudFileContainer* _cloudFileContainer;
	NSMutableArray* _completionBlocks;
	NSArray* _segmentURLs;
	BOOL _didStart;
	PHAsset* _phAsset;
	id<SCGallerySnap> _snap;

}

@property (nonatomic,readonly) PHAsset * phAsset;                   //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,readonly) id<SCGallerySnap> snap;              //@synthesize snap=_snap - In the implementation block
@property (assign,nonatomic) BOOL didStart;                         //@synthesize didStart=_didStart - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
-(id)initWithVideoSnap:(id)arg1 encryptedContentManager:(id)arg2 cloudFileContainer:(id)arg3 ;
-(void)startSegmentWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)queueCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)didStart;
-(void)setDidStart:(BOOL)arg1 ;
-(id)initWithVideoAsset:(id)arg1 ;
-(PHAsset *)phAsset;
-(id<SCGallerySnap>)snap;
@end
