/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCFeedRanking.h>

@class SCFeedFeatureManager, SCUserSession, SCQueuePerformer, SCSearchEventListenerAnnouncer, NSString;

@interface SCFeedDefaultRanker : NSObject <SCFeedRanking> {

	SCSearchEventListenerAnnouncer* _eventAnnouncer;
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
-(id)rankFeedItems:(id)arg1 withGlobalFeedFeatures:(id)arg2 ;
-(SCFeedFeatureManager *)featureManager;
-(void)setFeatureManager:(SCFeedFeatureManager *)arg1 ;
-(id)debugInfoForFeedItems:(id)arg1 ;
-(id)init;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

