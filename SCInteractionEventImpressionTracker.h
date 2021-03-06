/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class NSDictionary;

@interface SCInteractionEventImpressionTracker : NSObject {

	id<SCPerforming> _performer;
	NSDictionary* _feedIdToImpression;

}

@property (nonatomic,retain) NSDictionary * feedIdToImpression;              //@synthesize feedIdToImpression=_feedIdToImpression - In the implementation block
-(id)initWithPerformer:(id)arg1 ;
-(void)_recordNewImpressionWithEventId:(id)arg1 feedId:(id)arg2 ;
-(void)setFeedIdToImpression:(NSDictionary *)arg1 ;
-(NSDictionary *)feedIdToImpression;
-(void)recordImpression:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)impressionCountForEvent:(id)arg1 ;
@end

