/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCPreloadControllerProtocol.h>
#import <Snapchat/SCPreloadInfoProvider.h>

@protocol SCObserving, SCPerforming;
@class SCPreloadListenerAnnouncer, NSString;

@interface SCPreloadController : NSObject <SCPreloadControllerProtocol, SCPreloadInfoProvider> {

	SCPreloadListenerAnnouncer* _announcer;
	long long _reachability;
	double _preloadModeCachedTime;
	/*^block*/id _apiClientProvider;
	id<SCObserving> _travelModeObserveContext;
	BOOL _travelModeUserEnabled;
	long long _preloadMode;
	long long _bandwidthClass;
	id<SCPerforming> _queuePerformer;

}

@property (assign) long long preloadMode;                                  //@synthesize preloadMode=_preloadMode - In the implementation block
@property (assign) long long bandwidthClass;                               //@synthesize bandwidthClass=_bandwidthClass - In the implementation block
@property (assign) BOOL travelModeUserEnabled;                             //@synthesize travelModeUserEnabled=_travelModeUserEnabled - In the implementation block
@property (nonatomic,retain) id<SCPerforming> queuePerformer;              //@synthesize queuePerformer=_queuePerformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)travelModeEnabledKey;
+(id)sharedInstance;
-(id<SCPerforming>)queuePerformer;
-(void)setBandwidthClass:(long long)arg1 ;
-(long long)bandwidthClass;
-(BOOL)travelModeEnabled;
-(void)setQueuePerformer:(id<SCPerforming>)arg1 ;
-(long long)preloadMode;
-(BOOL)shouldPrefetchExpensiveContent;
-(void)configureWithUserSession:(id)arg1 ;
-(BOOL)isUnderPoorBandwidth;
-(void)_updatePreloadMode;
-(void)_didLogout;
-(void)_networkConnectivityChanged:(id)arg1 ;
-(void)_bandwidthClassChanged:(id)arg1 ;
-(id)initWithReachability:(long long)arg1 queuePerformer:(id)arg2 apiClientProvider:(/*^block*/id)arg3 ;
-(void)setTravelModeUserEnabled:(BOOL)arg1 ;
-(void)setPreloadMode:(long long)arg1 ;
-(BOOL)isUnderWifi;
-(void)logPreloadMode;
-(BOOL)travelModeUserEnabled;
-(void)updatePreloadMode;
-(void)dealloc;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)_appWillEnterForeground;
@end

