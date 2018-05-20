/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/BCOVFPSAuthorizationProxy.h>

@class NSURL, NSURLSession, NSString, NSOperationQueue;

@interface BCOVFPSBrightcoveAuthProxy : NSObject <BCOVFPSAuthorizationProxy> {

	NSURL* _fpsBaseURL;
	NSURL* _keyRequestURL;
	NSURLSession* _sharedURLSession;
	NSString* _applicationId;
	NSString* _publisherId;
	NSOperationQueue* _requestCompletionQueue;

}

@property (nonatomic,copy) NSString * applicationId;                                 //@synthesize applicationId=_applicationId - In the implementation block
@property (nonatomic,copy) NSString * publisherId;                                   //@synthesize publisherId=_publisherId - In the implementation block
@property (nonatomic,retain) NSOperationQueue * requestCompletionQueue;              //@synthesize requestCompletionQueue=_requestCompletionQueue - In the implementation block
@property (nonatomic,retain) NSURL * fpsBaseURL;                                     //@synthesize fpsBaseURL=_fpsBaseURL - In the implementation block
@property (nonatomic,retain) NSURL * keyRequestURL;                                  //@synthesize keyRequestURL=_keyRequestURL - In the implementation block
@property (nonatomic,retain) NSURLSession * sharedURLSession;                        //@synthesize sharedURLSession=_sharedURLSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPublisherId:(id)arg1 applicationId:(id)arg2 ;
-(NSOperationQueue *)requestCompletionQueue;
-(NSString *)publisherId;
-(NSURL *)fpsBaseURL;
-(void)setPublisherId:(NSString *)arg1 ;
-(NSURL *)keyRequestURL;
-(id)customerRightsTokenDataForOptions:(id)arg1 ;
-(void)encryptedContentKeyForLoadingRequest:(id)arg1 contentKeyRequest:(id)arg2 source:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)contentIdentifierFromLoadingRequest:(id)arg1 ;
-(void)encryptedContentKeyForContentKeyIdentifier:(id)arg1 contentKeyRequest:(id)arg2 source:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithApplicationId:(id)arg1 publisherId:(id)arg2 ;
-(void)setFpsBaseURL:(NSURL *)arg1 ;
-(void)setSharedURLSession:(NSURLSession *)arg1 ;
-(void)retrieveApplicationCertificate:(/*^block*/id)arg1 ;
-(void)setKeyRequestURL:(NSURL *)arg1 ;
-(void)setRequestCompletionQueue:(NSOperationQueue *)arg1 ;
-(id)init;
-(NSString *)applicationId;
-(void)setApplicationId:(NSString *)arg1 ;
-(NSURLSession *)sharedURLSession;
@end
