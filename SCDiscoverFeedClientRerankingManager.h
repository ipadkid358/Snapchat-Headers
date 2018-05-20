/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCDiscoverFeedClientRerankingManagerDelegate;
@class NSMutableDictionary;

@interface SCDiscoverFeedClientRerankingManager : NSObject {

	NSMutableDictionary* _sectionRerankingManagerDict;
	id<SCDiscoverFeedClientRerankingManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCDiscoverFeedClientRerankingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setOriginalStories:(id)arg1 forSection:(id)arg2 extraData:(id)arg3 ;
-(void)setRequestId:(id)arg1 forSection:(id)arg2 ;
-(void)setClientModelId:(id)arg1 forSection:(id)arg2 ;
-(void)groupStoryInserted:(id)arg1 forSection:(id)arg2 ;
-(void)setStoriesToFeatures:(id)arg1 forSection:(id)arg2 ;
-(void)setStoriesToScore:(id)arg1 forSection:(id)arg2 ;
-(void)setRankedStories:(id)arg1 forSection:(id)arg2 rerankedOffDiscoverFeed:(BOOL)arg3 ;
-(void)discoverFeedDidOpen;
-(id)init;
-(void)setDelegate:(id<SCDiscoverFeedClientRerankingManagerDelegate>)arg1 ;
-(id<SCDiscoverFeedClientRerankingManagerDelegate>)delegate;
@end

