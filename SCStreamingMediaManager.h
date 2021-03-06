/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCWebProxyTransformLayerDelegate.h>
#import <Snapchat/SCWebProxyLocalFileLayerDelegate.h>
#import <Snapchat/SCWebProxyAESCBCDecryptionLayerDelegate.h>
#import <Snapchat/SCWebProxyCacheLayerDelegate.h>
#import <Snapchat/SCWebProxyHeaderTransformLayerDelegate.h>

@protocol SCStreamingMediaFetching, SCStreamingMediaFrameProviding;
@class SCWebProxyTransformLayer, SCWebProxyHeaderTransformLayer, SCWebProxyAESCBCDecryptionLayer, SCWebProxyLocalFileLayer, SCStreamingCacheLayer, SCStreamingRequestManagerHandler, NSString;

@interface SCStreamingMediaManager : NSObject <SCWebProxyTransformLayerDelegate, SCWebProxyLocalFileLayerDelegate, SCWebProxyAESCBCDecryptionLayerDelegate, SCWebProxyCacheLayerDelegate, SCWebProxyHeaderTransformLayerDelegate> {

	SCWebProxyTransformLayer* _transformLayer;
	SCWebProxyHeaderTransformLayer* _headerTransformLayer;
	SCWebProxyAESCBCDecryptionLayer* _decryptionLayer;
	SCWebProxyLocalFileLayer* _localFileLayer;
	SCStreamingCacheLayer* _cacheLayer;
	SCStreamingRequestManagerHandler* _requestManagerHandler;
	id<SCStreamingMediaFetching> _mediaFetcher;
	id<SCStreamingMediaFrameProviding> _mediaFrameProvider;

}

@property (nonatomic,readonly) id<SCStreamingMediaFetching> mediaFetcher;                          //@synthesize mediaFetcher=_mediaFetcher - In the implementation block
@property (nonatomic,readonly) id<SCStreamingMediaFrameProviding> mediaFrameProvider;              //@synthesize mediaFrameProvider=_mediaFrameProvider - In the implementation block
@property (nonatomic,readonly) id<SCStreamingZipDataCaching> zipDataCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)proxyDecryptionLayer:(id)arg1 shouldDecryptProxyRequest:(id)arg2 ;
-(id)proxyDecryptionLayer:(id)arg1 keyForProxyRequest:(id)arg2 ;
-(id)proxyDecryptionLayer:(id)arg1 ivForProxyRequest:(id)arg2 ;
-(id)proxyDecryptionLayer:(id)arg1 unencryptedResourceSizeForProxyRequest:(id)arg2 ;
-(void)proxyCacheLayer:(id)arg1 didFullyCacheResourceForProxyRequest:(id)arg2 resourceData:(id)arg3 ;
-(BOOL)proxyHeaderTransformLayer:(id)arg1 shouldTransformResponseHeadersForProxyRequest:(id)arg2 ;
-(id)proxyHeaderTransformLayer:(id)arg1 transformResponseHeaders:(id)arg2 forProxyRequest:(id)arg3 ;
-(id)proxyLocalFileLayer:(id)arg1 contentTypeForProxyRequest:(id)arg2 ;
-(BOOL)proxyTransformLayer:(id)arg1 shouldTransformProxyRequest:(id)arg2 ;
-(void)proxyTransformLayer:(id)arg1 transformProxyResponse:(id)arg2 proxyRequest:(id)arg3 urlProvider:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)newURLProviderWithStreamingDelegate:(id)arg1 ;
-(id)initWithCache:(id)arg1 requestManager:(id)arg2 experimentManager:(id)arg3 ;
-(id)newURLProvider;
-(id<SCStreamingZipDataCaching>)zipDataCache;
-(id<SCStreamingMediaFetching>)mediaFetcher;
-(id<SCStreamingMediaFrameProviding>)mediaFrameProvider;
@end

