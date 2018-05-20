/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface SCFriendStoriesPlaybackEventSession : NSObject {

	NSString* _eventId;
	long long _loadPhase;
	NSDate* _startTime;
	NSDate* _openTime;
	unsigned long long _itemLoadedCount;
	long long _itemLoadState;
	long long _playSource;
	long long _entryEvent;

}

@property (nonatomic,copy) NSString * eventId;                                //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) long long loadPhase;                             //@synthesize loadPhase=_loadPhase - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * openTime;                               //@synthesize openTime=_openTime - In the implementation block
@property (assign,nonatomic) unsigned long long itemLoadedCount;              //@synthesize itemLoadedCount=_itemLoadedCount - In the implementation block
@property (assign,nonatomic) long long itemLoadState;                         //@synthesize itemLoadState=_itemLoadState - In the implementation block
@property (assign,nonatomic) long long playSource;                            //@synthesize playSource=_playSource - In the implementation block
@property (assign,nonatomic) long long entryEvent;                            //@synthesize entryEvent=_entryEvent - In the implementation block
-(long long)entryEvent;
-(void)setEntryEvent:(long long)arg1 ;
-(void)setItemLoadedCount:(unsigned long long)arg1 ;
-(void)setPlaySource:(long long)arg1 ;
-(void)setItemLoadState:(long long)arg1 ;
-(unsigned long long)itemLoadedCount;
-(long long)playSource;
-(long long)itemLoadState;
-(long long)loadPhase;
-(void)setLoadPhase:(long long)arg1 ;
-(NSDate *)openTime;
-(void)setOpenTime:(NSDate *)arg1 ;
-(id)init;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(void)setEventId:(NSString *)arg1 ;
-(NSString *)eventId;
@end

