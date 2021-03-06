/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SCUnlockablesStickyCache : NSObject {

	NSMutableDictionary* _stickyUnlockables;
	NSMutableDictionary* _lastEligibleLocation;
	NSMutableDictionary* _lastEligibleTime;
	unsigned _logContext;
	long long _stickyDistance;
	double _stickyDurationNoLocation;
	double _stickyDuration;

}

@property (assign,nonatomic) long long stickyDistance;                     //@synthesize stickyDistance=_stickyDistance - In the implementation block
@property (assign,nonatomic) double stickyDurationNoLocation;              //@synthesize stickyDurationNoLocation=_stickyDurationNoLocation - In the implementation block
@property (assign,nonatomic) double stickyDuration;                        //@synthesize stickyDuration=_stickyDuration - In the implementation block
-(id)initWithCacheType:(long long)arg1 ;
-(void)removeUnlockable:(id)arg1 ;
-(id)stickyUnlockablesAtLocation:(id)arg1 withEligibleUnlockables:(id)arg2 ;
-(void)addUnlockables:(id)arg1 eligibleAtLocation:(id)arg2 ;
-(void)addUnlockable:(id)arg1 atLocation:(id)arg2 atTime:(double)arg3 ;
-(id)_log:(id)arg1 ;
-(long long)stickyDistance;
-(void)setStickyDistance:(long long)arg1 ;
-(double)stickyDurationNoLocation;
-(void)setStickyDurationNoLocation:(double)arg1 ;
-(double)stickyDuration;
-(void)setStickyDuration:(double)arg1 ;
@end

