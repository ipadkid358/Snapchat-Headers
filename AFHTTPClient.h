/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:06 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSMutableArray, NSMutableDictionary, NSURLCredential, NSOperationQueue;

@interface AFHTTPClient : NSObject <NSCoding, NSCopying> {

	BOOL _allowsInvalidSSLCertificate;
	int _parameterEncoding;
	int _defaultSSLPinningMode;
	NSURL* _baseURL;
	unsigned long long _stringEncoding;
	NSMutableArray* _registeredHTTPOperationClassNames;
	NSMutableDictionary* _defaultHeaders;
	NSURLCredential* _defaultCredential;
	NSOperationQueue* _operationQueue;
	SCNetworkReachabilityRef _networkReachability;
	long long _networkReachabilityStatus;
	/*^block*/id _networkReachabilityStatusBlock;

}

@property (nonatomic,retain) NSURL * baseURL;                                                 //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * registeredHTTPOperationClassNames;              //@synthesize registeredHTTPOperationClassNames=_registeredHTTPOperationClassNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defaultHeaders;                            //@synthesize defaultHeaders=_defaultHeaders - In the implementation block
@property (nonatomic,retain) NSURLCredential * defaultCredential;                             //@synthesize defaultCredential=_defaultCredential - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) SCNetworkReachabilityRef networkReachability;                    //@synthesize networkReachability=_networkReachability - In the implementation block
@property (assign) long long networkReachabilityStatus;                                       //@synthesize networkReachabilityStatus=_networkReachabilityStatus - In the implementation block
@property (nonatomic,copy) id networkReachabilityStatusBlock;                                 //@synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock - In the implementation block
@property (assign,nonatomic) unsigned long long stringEncoding;                               //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (assign,nonatomic) int parameterEncoding;                                           //@synthesize parameterEncoding=_parameterEncoding - In the implementation block
@property (assign,nonatomic) int defaultSSLPinningMode;                                       //@synthesize defaultSSLPinningMode=_defaultSSLPinningMode - In the implementation block
@property (assign,nonatomic) BOOL allowsInvalidSSLCertificate;                                //@synthesize allowsInvalidSSLCertificate=_allowsInvalidSSLCertificate - In the implementation block
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(void)setParameterEncoding:(int)arg1 ;
-(void)setRegisteredHTTPOperationClassNames:(NSMutableArray *)arg1 ;
-(void)setDefaultHeaders:(NSMutableDictionary *)arg1 ;
-(void)setDefaultHeader:(id)arg1 value:(id)arg2 ;
-(void)setNetworkReachabilityStatus:(long long)arg1 ;
-(void)startMonitoringNetworkReachability;
-(void)stopMonitoringNetworkReachability;
-(NSMutableDictionary *)defaultHeaders;
-(NSMutableArray *)registeredHTTPOperationClassNames;
-(void)setNetworkReachability:(SCNetworkReachabilityRef)arg1 ;
-(SCNetworkReachabilityRef)networkReachability;
-(id)networkReachabilityStatusBlock;
-(void)setNetworkReachabilityStatusBlock:(id)arg1 ;
-(int)parameterEncoding;
-(id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 ;
-(NSURLCredential *)defaultCredential;
-(int)defaultSSLPinningMode;
-(BOOL)allowsInvalidSSLCertificate;
-(void)setAllowsInvalidSSLCertificate:(BOOL)arg1 ;
-(id)HTTPRequestOperationWithRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)enqueueBatchOfHTTPRequestOperations:(id)arg1 progressBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)enqueueHTTPRequestOperation:(id)arg1 ;
-(void)setReachabilityStatusChangeBlock:(/*^block*/id)arg1 ;
-(id)multipartFormRequestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(/*^block*/id)arg4 ;
-(id)requestWithMultipartFormRequest:(id)arg1 writingStreamContentsToFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelAllHTTPOperationsWithMethod:(id)arg1 path:(id)arg2 ;
-(void)enqueueBatchOfHTTPRequestOperationsWithRequests:(id)arg1 progressBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)putPath:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)deletePath:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)patchPath:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)setDefaultCredential:(NSURLCredential *)arg1 ;
-(long long)networkReachabilityStatus;
-(void)setDefaultSSLPinningMode:(int)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(unsigned long long)stringEncoding;
-(id)initWithBaseURL:(id)arg1 ;
@end

