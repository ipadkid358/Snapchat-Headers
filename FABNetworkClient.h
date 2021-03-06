/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class FABCertificatePinner, NSURLSession, NSString;

@interface FABNetworkClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	FABCertificatePinner* _certPinner;
	NSURLSession* _session;

}

@property (nonatomic,readonly) FABCertificatePinner * certPinner;              //@synthesize certPinner=_certPinner - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                         //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 pinnedCertificates:(id)arg2 ;
-(void)startDataTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(FABCertificatePinner *)certPinner;
-(double)randomDoubleWithMin:(double)arg1 max:(double)arg2 ;
-(double)generateRandomJitter;
-(void)startDownloadTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithSessionConfiguration:(id)arg1 queue:(id)arg2 pinnedCertificates:(id)arg3 ;
-(double)computeDelayForResponse:(id)arg1 withRetryCount:(unsigned long long)arg2 ;
-(void)runAfterRetryValueFromResponse:(id)arg1 attempts:(unsigned long long)arg2 onQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)startDataTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 tries:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)runAfterRetryValueFromResponse:(id)arg1 attempts:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)startDownloadTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 tries:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startDataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDownloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)invalidateAndCancel;
-(NSURLSession *)session;
@end

