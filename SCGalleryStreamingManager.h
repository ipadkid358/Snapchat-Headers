/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCStreamingDelegate.h>

@protocol SCStreamingURLProviding, SCGalleryStreamingSnapPackageFetching;
@class SCUserSession, SCQueuePerformer, NSString;

@interface SCGalleryStreamingManager : NSObject <SCStreamingDelegate> {

	SCUserSession* _userSession;
	SCQueuePerformer* _performer;
	id<SCStreamingURLProviding> _streamingURLProvider;
	id<SCGalleryStreamingSnapPackageFetching> _streamingPackageFetcher;

}

@property (nonatomic,readonly) id<SCGalleryStreamingSnapPackageFetching> streamingPackageFetcher;              //@synthesize streamingPackageFetcher=_streamingPackageFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFullyCacheResourceForProxyRequest:(id)arg1 resourceData:(id)arg2 ;
-(BOOL)shouldTransformResponseHeadersForProxyRequest:(id)arg1 ;
-(id)transformResponseHeaders:(id)arg1 forProxyRequest:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 ;
-(void)preloadStreamingForSnap:(id)arg1 mediaScenePath:(SCD_Struct_SC329)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id<SCGalleryStreamingSnapPackageFetching>)streamingPackageFetcher;
-(id)proxiedStreamingURLForStreamingPackge:(id)arg1 encryptionInfo:(id)arg2 ;
-(void)_fetchMediaForStreamingPackge:(id)arg1 byteRangeValue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
