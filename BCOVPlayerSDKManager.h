/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, NSMutableArray, NSObject, NSDictionary, BCOVRemoteConfiguration;

@interface BCOVPlayerSDKManager : NSObject {

	NSMutableDictionary* _featureAnalytics;
	NSString* _managerID;
	NSMutableArray* _registeredComponents;
	NSObject*<OS_dispatch_queue> _componentsIsolationQueue;
	NSDictionary* _options;
	BCOVRemoteConfiguration* _remoteConfiguration;

}

@property (nonatomic,copy) NSString * managerID;                                                 //@synthesize managerID=_managerID - In the implementation block
@property (nonatomic,retain) NSMutableArray * registeredComponents;                              //@synthesize registeredComponents=_registeredComponents - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> componentsIsolationQueue;              //@synthesize componentsIsolationQueue=_componentsIsolationQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) BCOVRemoteConfiguration * remoteConfiguration;                      //@synthesize remoteConfiguration=_remoteConfiguration - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * featureAnalytics;                           //@synthesize featureAnalytics=_featureAnalytics - In the implementation block
@property (nonatomic,readonly) NSString * sessionID; 
+(id)sharedManagerWithOptions:(id)arg1 ;
+(id)version;
+(id)sharedManager;
-(id)createFairPlayPlaybackControllerWithApplicationCertificate:(id)arg1 authorizationProxy:(id)arg2 viewStrategy:(/*^block*/id)arg3 ;
-(id)createFairPlaySessionProviderWithApplicationCertificate:(id)arg1 authorizationProxy:(id)arg2 upstreamSessionProvider:(id)arg3 ;
-(void)registerComponent:(id)arg1 ;
-(id)createPlaybackControllerWithSessionProvider:(id)arg1 viewStrategy:(/*^block*/id)arg2 ;
-(id)createFairPlayPlaybackControllerWithAuthorizationProxy:(id)arg1 ;
-(id)createFairPlaySessionProviderWithAuthorizationProxy:(id)arg1 upstreamSessionProvider:(id)arg2 ;
-(id)createSidecarSubtitlesPlaybackControllerWithViewStrategy:(/*^block*/id)arg1 ;
-(id)createSidecarSubtitlesSessionProviderWithUpstreamSessionProvider:(id)arg1 ;
-(id)createSidecarSubtitlesSessionProviderWithOptions:(id)arg1 ;
-(void)handleAnalyticsSDKUsageNotification:(id)arg1 ;
-(id)createPlaybackControllerWithViewStrategy:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)componentsIsolationQueue;
-(NSMutableArray *)registeredComponents;
-(id)contextForIdentity:(id)arg1 ;
-(void)logToConsole:(id)arg1 ;
-(void)logToCrashlytics:(id)arg1 ;
-(id)messageForIdentity:(id)arg1 ;
-(id)createCrashlytics;
-(id)takePostedFeatureAnalytics;
-(id)initWithIdentifier:(id)arg1 options:(id)arg2 ;
-(void)setRemoteConfiguration:(BCOVRemoteConfiguration *)arg1 ;
-(void)parseOptions:(id)arg1 ;
-(id)createPlaybackController;
-(id)createBasicSessionProviderWithOptions:(id)arg1 ;
-(/*^block*/id)defaultControlsViewStrategy;
-(NSMutableDictionary *)featureAnalytics;
-(id)takePostedFeatureAnalyticsAsSDKUsageValue;
-(void)setRegisteredComponents:(NSMutableArray *)arg1 ;
-(void)setComponentsIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)sessionID;
-(NSString *)managerID;
-(BCOVRemoteConfiguration *)remoteConfiguration;
-(void)logIdentity:(id)arg1 ;
-(void)setManagerID:(NSString *)arg1 ;
@end
