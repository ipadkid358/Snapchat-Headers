/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSMutableArray, NSMutableSet, NSDate;

@interface SCInteractionEventBatch : NSObject {

	NSMutableArray* _eventsToAdd;
	NSMutableSet* _feedIdsToRemove;
	NSMutableSet* _categoriesToRemove;
	NSMutableDictionary* _eventsToRemove;
	NSMutableArray* _syncedFeedItemIds;
	BOOL _clearing;
	BOOL _isFromUFS;
	NSDate* _lastStartupRequestStartTime;
	long long _source;
	long long _originTypes;

}

@property (nonatomic,copy) NSDate * lastStartupRequestStartTime;              //@synthesize lastStartupRequestStartTime=_lastStartupRequestStartTime - In the implementation block
@property (assign,nonatomic) long long source;                                //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) long long originTypes;                         //@synthesize originTypes=_originTypes - In the implementation block
@property (assign,nonatomic) BOOL clearing;                                   //@synthesize clearing=_clearing - In the implementation block
@property (assign,nonatomic) BOOL isFromUFS;                                  //@synthesize isFromUFS=_isFromUFS - In the implementation block
-(void)addSyncedFeedItemIds:(id)arg1 ;
-(void)setLastStartupRequestStartTime:(NSDate *)arg1 ;
-(id)syncedFeedItemIds;
-(NSDate *)lastStartupRequestStartTime;
-(long long)originTypes;
-(void)mergeWithNewBatch:(id)arg1 ;
-(void)setIsFromUFS:(BOOL)arg1 ;
-(id)initWithSourceOriginType:(long long)arg1 ;
-(BOOL)isFromUFS;
-(void)setClearing:(BOOL)arg1 ;
-(void)addFeedIdsToRemoveEvents:(id)arg1 ;
-(id)eventsToAdd;
-(id)feedIdsToRemove;
-(id)categoriesToRemove;
-(NSMutableDictionary*)eventsToRemove;
-(BOOL)clearing;
-(void)addFeedIdToRemoveSendingEvent:(id)arg1 eventId:(id)arg2 ;
-(void)addFeedIdToRemoveFailedEvent:(id)arg1 eventId:(id)arg2 ;
-(void)addFeedIdToRemoveChatEvent:(id)arg1 ;
-(void)addFeedIdToRemoveCashEvent:(id)arg1 ;
-(void)addFeedIdToRemoveSnapEvent:(id)arg1 ;
-(void)addFeedIdToRemovePresenceEvent:(id)arg1 ;
-(void)addFeedIdToRemoveSendingEvent:(id)arg1 ;
-(void)addFeedIdToRemoveFailedEvent:(id)arg1 ;
-(void)addFeedIdsToRemove:(id)arg1 forCategory:(id)arg2 ;
-(void)removeAllFeedIdsForCategory:(id)arg1 ;
-(id)description;
-(void)setSource:(long long)arg1 ;
-(BOOL)isEmpty;
-(long long)source;
-(void)addEvents:(id)arg1 ;
@end
