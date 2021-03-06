/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCQueuePerformer, NSMutableDictionary, NSDictionary;

@interface SCFeedItemSkipStoryTracker : NSObject {

	SCQueuePerformer* _performer;
	NSMutableDictionary* _mutableSkipStoryCountByFeedId;
	NSMutableDictionary* _mutableSkipStoryPostDateByFeedId;
	NSDictionary* _skipStoryCountByFeedId;
	NSDictionary* _skipStoryPostDateByFeedId;

}

@property (retain) NSDictionary * skipStoryCountByFeedId;                 //@synthesize skipStoryCountByFeedId=_skipStoryCountByFeedId - In the implementation block
@property (retain) NSDictionary * skipStoryPostDateByFeedId;              //@synthesize skipStoryPostDateByFeedId=_skipStoryPostDateByFeedId - In the implementation block
-(id)initWithPerformer:(id)arg1 ;
-(void)setSkipStoryCountByFeedId:(NSDictionary *)arg1 ;
-(void)setSkipStoryPostDateByFeedId:(NSDictionary *)arg1 ;
-(void)incrementSkipCountWithFeedId:(id)arg1 ;
-(void)clearSkipCountWithFeedId:(id)arg1 ;
-(void)addSkipStoryCountByFeedid:(id)arg1 ;
-(void)addSkipStoryPostDateByFeedId:(id)arg1 recentPostDate:(id)arg2 ;
-(NSDictionary *)skipStoryCountByFeedId;
-(NSDictionary *)skipStoryPostDateByFeedId;
@end

