/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCUserSessionScoped.h>

@protocol SCPerforming;
@class SCCache, SCSessionRequestManager, NSString;

@interface SCLensBitmojiListManager : NSObject <SCUserSessionScoped> {

	SCCache* _bitmojiListCache;
	id<SCPerforming> _workPerformer;
	SCSessionRequestManager* _requestManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)boostRequest:(id)arg1 setting:(id)arg2 ;
-(void)_issueBitmojiListFetch:(id)arg1 requestSettings:(id)arg2 requestKey:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_lookupInCache:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)_ttlFromCacheControlHeader:(id)arg1 ;
-(void)_initBitmojiListCache;
-(id)initRequestManager:(id)arg1 ;
-(id)fetchBitmojiList:(id)arg1 requestSettings:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)resetCache;
@end

