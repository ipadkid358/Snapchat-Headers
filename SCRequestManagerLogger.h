/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFHTTPClient;

@interface SCRequestManagerLogger : NSObject {

	AFHTTPClient* _httpClient;

}

@property (nonatomic,retain) AFHTTPClient * httpClient;              //@synthesize httpClient=_httpClient - In the implementation block
+(id)_strFromPriority:(long long)arg1 ;
+(id)_stringFromConnectivity:(long long)arg1 ;
+(id)preloadInfoProvider;
+(void)setPreloadInfoProvider:(id)arg1 ;
+(void)printRequestStatus:(id)arg1 logPrefix:(id)arg2 ;
+(void)debugPrintWithRequest:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4 ;
-(void)_printRequest:(id)arg1 prefix:(id)arg2 logInfo:(id)arg3 ;
-(void)logBandwidthReport:(id)arg1 ;
-(id)initWithHttpClient:(id)arg1 ;
-(void)didSubmitRequest:(id)arg1 logInfo:(id)arg2 ;
-(void)didRunRequest:(id)arg1 logInfo:(id)arg2 ;
-(void)logDownloadConsumption:(id)arg1 ;
-(void)logRequestPausing:(id)arg1 reason:(id)arg2 ;
-(AFHTTPClient *)httpClient;
-(void)setHttpClient:(AFHTTPClient *)arg1 ;
@end

