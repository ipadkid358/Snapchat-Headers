/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@protocol CRNHTTPProtocolHandlerProxy;
@class NSThread, NSURLSessionTask;

@interface CRNHTTPProtocolHandler : NSURLProtocol {

	scoped_refptr<net::HttpProtocolHandlerCore>* _core;
	id<CRNHTTPProtocolHandlerProxy> _protocolProxy;
	NSThread* _clientThread;
	BOOL _supportedURL;
	NSURLSessionTask* _task;

}
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(id)getProtocolHandlerProxy;
-(scoped_refptr<net::HttpProtocolHandlerCore>*)getCore;
-(id)getClientThread;
-(id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(id)cachedResponse;
-(void)stopLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(void)cancelRequest;
@end

