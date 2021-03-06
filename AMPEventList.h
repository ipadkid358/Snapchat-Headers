/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface AMPEventList : NSObject {

	NSMutableArray* _mutableEvents;

}

@property (nonatomic,retain) NSMutableArray * mutableEvents;              //@synthesize mutableEvents=_mutableEvents - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allEvents; 
-(unsigned long long)removeEarliestNonCriticalEvents:(unsigned long long)arg1 ;
-(unsigned long long)removeEarliestNonP0Events:(unsigned long long)arg1 ;
-(unsigned long long)removeEarliestEvents:(unsigned long long)arg1 ;
-(id)getEvents:(unsigned long long)arg1 ;
-(unsigned long long)removeEventsThroughEventWithId:(long long)arg1 ;
-(NSMutableArray *)mutableEvents;
-(unsigned long long)removeEventsMatchingBlock:(/*^block*/id)arg1 numEventsToRemove:(unsigned long long)arg2 ;
-(BOOL)isEqualToEventList:(id)arg1 ;
-(void)setMutableEvents:(NSMutableArray *)arg1 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithEvents:(id)arg1 ;
-(NSArray *)allEvents;
-(void)addEvent:(id)arg1 ;
@end

