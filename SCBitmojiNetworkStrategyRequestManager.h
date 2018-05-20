/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBitmojiNetworkStrategy.h>

@class SCSessionRequestManager, NSString;

@interface SCBitmojiNetworkStrategyRequestManager : NSObject <SCBitmojiNetworkStrategy> {

	unsigned long long _endpoint;
	SCSessionRequestManager* _requestManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequestManager:(id)arg1 endpoint:(unsigned long long)arg2 ;
-(id)policyWithBatchOverride:(unsigned long long)arg1 andMaxInflightOverride:(unsigned long long)arg2 ;
-(unsigned long long)fetchType:(BOOL)arg1 ;
-(BOOL)issueImageFetch:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)issueBatchFetch:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)_prepareImageRequestDirect:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3 ;
-(id)_prepareImageRequestToFSN:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3 ;
-(id)_prepareBatchImageRequestDirect:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3 ;
-(id)_prepareBatchImageRequestToFSN:(id)arg1 cacheKey:(id)arg2 contexts:(id)arg3 ;
-(NSString *)description;
-(unsigned long long)endpoint;
@end

