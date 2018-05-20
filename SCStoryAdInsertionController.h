/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FriendStories, SCStoryAdStreamInsertionInfo, NSMutableSet;

@interface SCStoryAdInsertionController : NSObject {

	BOOL _adCanFollow;
	FriendStories* _friendStories;
	BOOL _firstViewingSessionForStory;
	SCStoryAdStreamInsertionInfo* _insertionInfo;
	unsigned long long _numberOfSnapsRemaining;
	unsigned long long _numberOfSnapsViewed;
	unsigned long long _numberOfSnapsViewedAfterAnAd;
	unsigned long long _numberOfSnapsViewedSinceLastAdOpportunity;
	long long _currentAdOpportunityPosition;
	long long _viewingType;
	BOOL _viewedAd;
	NSMutableSet* _viewedStories;

}
-(id)initWithFriendStories:(id)arg1 viewingType:(long long)arg2 insertionInfo:(id)arg3 ;
-(BOOL)isStoryAdOpportunityForIntervalThreshold:(unsigned long long)arg1 ;
-(void)viewedAd;
-(id)initWithFriendStories:(id)arg1 viewingType:(long long)arg2 ;
-(BOOL)canDisplayStoryAd;
-(long long)currentAdOpportunityPosition;
-(BOOL)isStoryAdOpportunity;
-(void)viewedStory:(id)arg1 withSnapsRemaining:(unsigned long long)arg2 lastInteraction:(id)arg3 ;
-(void)registeredAdOpportunity;
-(void)didDisplayStory:(id)arg1 ;
@end
