/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCRequest.h>

@class NSData, NSDictionary, NSMutableURLRequest, NSString, NSURL;

@interface SCResumeableDownloadRequest : SCRequest {

	NSData* _resumeData;
	NSDictionary* _additionalHTTPHeaders;
	NSMutableURLRequest* _urlRequest;
	NSDictionary* _parameters;
	BOOL _didInitWithUrl;
	NSString* _endpoint;
	NSURL* _url;
	NSURL* _location;

}

@property (nonatomic,copy,readonly) NSURL * location;              //@synthesize location=_location - In the implementation block
-(void)initializeURLRequestWithAuthenticator:(id)arg1 ;
-(void)executeWithAuthenticator:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithResumeData:(id)arg1 key:(id)arg2 contexts:(id)arg3 priority:(long long)arg4 fallbackPriority:(long long)arg5 connectivity:(long long)arg6 trackingInfo:(id)arg7 ;
-(id)initWithURL:(id)arg1 additionalHTTPHeaders:(id)arg2 key:(id)arg3 contexts:(id)arg4 priority:(long long)arg5 fallbackPriority:(long long)arg6 connectivity:(long long)arg7 trackingInfo:(id)arg8 ;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 additionalHTTPHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 priority:(long long)arg6 fallbackPriority:(long long)arg7 connectivity:(long long)arg8 trackingInfo:(id)arg9 ;
-(id)downloadedData;
-(id)description;
-(id)url;
-(id)path;
-(void)cleanUp;
-(NSURL *)location;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(double)timeoutInterval;
-(id)downloadTask;
@end

