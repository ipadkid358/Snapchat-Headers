/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDataCoordinatorListener.h>
#import <Snapchat/SCFeedRanking.h>

@class SCScopedAccess, SCSearchEventListenerAnnouncer, NSArray, NSSet, SCUserSession, SCFeedFeatureManager, SCQueuePerformer, NSString;

@interface SCFriendsFeedRecencyAndStoryRanking : NSObject <SCDataCoordinatorListener, SCFeedRanking> {

	SCScopedAccess* _scopedLazyStoriesDataCoordinator;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	NSArray* _rankedStoryIds;
	NSSet* _unviewedStoryIdsAtMostRecentNewPageUpdate;
	SCUserSession* _userSession;
	SCFeedFeatureManager* _featureManager;
	SCQueuePerformer* _performer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SCFeedFeatureManager * featureManager;              //@synthesize featureManager=_featureManager - In the implementation block
@property (nonatomic,retain) SCUserSession * userSession;                        //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) SCQueuePerformer * performer;                       //@synthesize performer=_performer - In the implementation block
+(id)announcerIdentifier;
-(SCQueuePerformer *)performer;
-(void)setPerformer:(SCQueuePerformer *)arg1 ;
-(void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2 ;
-(id)rankFeedItems:(id)arg1 withGlobalFeedFeatures:(id)arg2 ;
-(SCFeedFeatureManager *)featureManager;
-(void)setFeatureManager:(SCFeedFeatureManager *)arg1 ;
-(void)_fetchAndUpdateRankedStoryIds;
-(void)_performUpdateRankedStoryIds:(id)arg1 ;
-(void)_updateRankedStoryIds:(id)arg1 ;
-(id)init;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

