/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCProgressReceiving.h>

@protocol SCPerforming, SCCachingMediaRequest;
@class NSMutableSet, SCSentinel, NSString;

@interface SCCachingMediaItemBuildRequestGroup : NSObject <SCProgressReceiving> {

	id<SCPerforming> _performer;
	NSMutableSet* _requests;
	SCSentinel* _sentinel;
	long long _sourceLevel;
	id<SCCachingMediaRequest> _upstreamRequest;

}

@property (assign,nonatomic) long long sourceLevel;                                  //@synthesize sourceLevel=_sourceLevel - In the implementation block
@property (nonatomic,retain) id<SCCachingMediaRequest> upstreamRequest;              //@synthesize upstreamRequest=_upstreamRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSourceLevel:(long long)arg1 ;
-(long long)sourceLevel;
-(void)setUpstreamRequest:(id<SCCachingMediaRequest>)arg1 ;
-(id<SCCachingMediaRequest>)upstreamRequest;
-(void)reporterWithIdentifier:(id)arg1 didReportProgress:(/*^block*/id)arg2 ;
-(void)removeRequest:(id)arg1 ;
-(id)initWithPerformer:(id)arg1 sourceLevel:(long long)arg2 ;
-(void)performWithItem:(id)arg1 count:(long long)arg2 isFinal:(BOOL)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isCancelled;
-(void)addRequest:(id)arg1 ;
@end

