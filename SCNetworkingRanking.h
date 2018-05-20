/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:06 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchEventListener.h>

@protocol SCPerforming, SCNetworkingRankingUserInfoProvider;
@class NSDictionary, NSString;

@interface SCNetworkingRanking : NSObject <SCSearchEventListener> {

	id<SCPerforming> _queuePerformer;
	NSDictionary* _userProfileMap;
	NSDictionary* _rankingModelMap;
	NSDictionary* _feedRankingRecords;
	id<SCNetworkingRankingUserInfoProvider> _userinfoProvider;

}

@property (retain) NSDictionary * userProfileMap;                                                          //@synthesize userProfileMap=_userProfileMap - In the implementation block
@property (retain) NSDictionary * rankingModelMap;                                                         //@synthesize rankingModelMap=_rankingModelMap - In the implementation block
@property (retain) NSDictionary * feedRankingRecords;                                                      //@synthesize feedRankingRecords=_feedRankingRecords - In the implementation block
@property (assign,nonatomic,__weak) id<SCNetworkingRankingUserInfoProvider> userinfoProvider;              //@synthesize userinfoProvider=_userinfoProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(void)setUserProfileMap:(NSDictionary *)arg1 ;
-(void)setFeedRankingRecords:(NSDictionary *)arg1 ;
-(void)setRankingModelMap:(NSDictionary *)arg1 ;
-(id<SCNetworkingRankingUserInfoProvider>)userinfoProvider;
-(NSDictionary *)feedRankingRecords;
-(void)_logNetowkingRankingUserProfile;
-(NSDictionary *)rankingModelMap;
-(NSDictionary *)userProfileMap;
-(void)_logInvalidFeature;
-(id)feedRankingScore:(id)arg1 ;
-(void)updateUserProfileMap:(id)arg1 ;
-(BOOL)isModelAvailable;
-(id)calculateScoreWithContext:(id)arg1 contextScore:(unsigned long long)arg2 userInitiated:(BOOL)arg3 type:(id)arg4 networkCondition:(id)arg5 feedRankingScore:(id)arg6 isRunning:(BOOL)arg7 ;
-(void)setUserinfoProvider:(id<SCNetworkingRankingUserInfoProvider>)arg1 ;
-(id)init;
-(void)reset;
-(id)modelVersion;
-(id)username;
@end

