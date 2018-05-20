/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCEventGenerator.h>

@class NSDate, Snap, NSMutableDictionary;

@interface SCSnapEventGenerator : SCEventGenerator {

	NSDate* _lastViewingSnapTimestamp;
	double _timeSinceLastViewedSnap;
	BOOL _hasUnopenVideoWithSound;
	Snap* _highPriorityViewingSnap;
	Snap* _highPriorityUnopenSnap;
	Snap* _highPrioritySentSnap;
	Snap* _normalPriorityUnopenSnap;
	Snap* _normalPriorityReplayableSnap;
	Snap* _latestSnap;
	NSMutableDictionary* _unopenedSnaps;

}
-(void)updateWithSnap:(id)arg1 ;
-(id)initWithChat:(id)arg1 generatorType:(long long)arg2 ;
-(id)toInteractionEvent;
-(id)_highPriorityInteractionEvent;
-(id)_normalPriorityInteractionEvent;
-(id)mostRecentlyViewedSnapInChat:(id)arg1 ;
-(void)_updateWithLastSnaps;
@end
