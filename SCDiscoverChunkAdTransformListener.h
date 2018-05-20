/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsAdTransformListener.h>

@class SCSnapAdsAdResponse, SCDiscoverChunk, NSString;

@interface SCDiscoverChunkAdTransformListener : NSObject <SCSnapAdsAdTransformListener> {

	SCSnapAdsAdResponse* _adResponseV2;
	SCDiscoverChunk* _chunk;

}

@property (nonatomic,retain) SCDiscoverChunk * chunk;               //@synthesize chunk=_chunk - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithChunk:(id)arg1 ;
-(void)setChunk:(SCDiscoverChunk *)arg1 ;
-(void)onAdTransformComplete:(id)arg1 ;
-(void)onAdTransformError:(id)arg1 ;
-(void)handleFetchSuccess:(id)arg1 ;
-(void)handleFetchFailure:(id)arg1 error:(id)arg2 ;
-(SCDiscoverChunk *)chunk;
@end
