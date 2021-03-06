/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCStreamingURLProviding.h>

@protocol SCStreamingDelegate;
@class SCWebProxy, NSString;

@interface SCStreamingProxiedURLProvider : NSObject <SCStreamingURLProviding> {

	SCWebProxy* _webProxy;
	id<SCStreamingDelegate> _streamingDelegate;

}

@property (nonatomic,__weak,readonly) id<SCWebProxyRequestHandling> requestHandler; 
@property (nonatomic,__weak,readonly) id<SCStreamingDelegate> streamingDelegate;                 //@synthesize streamingDelegate=_streamingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)streamingURLForRequestInfo:(id)arg1 ;
-(id)initWithRequestHandler:(id)arg1 streamingDelegate:(id)arg2 ;
-(id<SCStreamingDelegate>)streamingDelegate;
-(id<SCWebProxyRequestHandling>)requestHandler;
@end

