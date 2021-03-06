/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCStreamingMediaFetching.h>

@protocol SCWebProxyRequestHandling;
@class NSString;

@interface SCStreamingMediaFetcher : NSObject <SCStreamingMediaFetching> {

	id<SCWebProxyRequestHandling> _requestHandler;

}

@property (nonatomic,__weak,readonly) id<SCWebProxyRequestHandling> requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequestHandler:(id)arg1 ;
-(void)_fetchDataForURL:(id)arg1 byteRangeValue:(id)arg2 encryptionInfo:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchMediaDataForMediaURL:(id)arg1 encryptionInfo:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchDataForRequestInfo:(id)arg1 byteRangeValue:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchLocalMediaURLForMediaURL:(id)arg1 encryptionInfo:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchMediaForRequestInfo:(id)arg1 byteRangeValue:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id<SCWebProxyRequestHandling>)requestHandler;
@end

