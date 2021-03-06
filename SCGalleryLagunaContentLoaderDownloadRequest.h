/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGalleryLagunaContentLoaderRequest.h>

@protocol SCPerforming, OS_dispatch_queue, SCGalleryLagunaContentLoaderRequest, SCProgressReceiving;
@class SCGalleryLagunaContentLoader, NSObject, SCSentinel, NSString;

@interface SCGalleryLagunaContentLoaderDownloadRequest : NSObject <SCGalleryLagunaContentLoaderRequest> {

	SCGalleryLagunaContentLoader* _contentLoader;
	id<SCPerforming> _performer;
	SCD_Struct_SC329 _mediaScenePath;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _resultHandler;
	SCSentinel* _sentinel;
	id<SCGalleryLagunaContentLoaderRequest> _upstreamRequest;
	id<SCProgressReceiving> _progressReceiver;
	unsigned long long _contentComponent;

}

@property (nonatomic,readonly) unsigned long long contentComponent;                        //@synthesize contentComponent=_contentComponent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCProgressReceiving> progressReceiver;              //@synthesize progressReceiver=_progressReceiver - In the implementation block
-(id<SCProgressReceiving>)progressReceiver;
-(void)setProgressReceiver:(id<SCProgressReceiving>)arg1 ;
-(void)performWithStatus:(unsigned long long)arg1 error:(id)arg2 ;
-(unsigned long long)contentComponent;
-(id)initWithContentLoader:(id)arg1 performer:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 contentComponent:(unsigned long long)arg4 queue:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)downloadPersistedContentWithCloudFile:(id)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
@end

