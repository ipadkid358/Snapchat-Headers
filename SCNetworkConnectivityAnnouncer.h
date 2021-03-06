/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class SCNetworkConnectivityListenerAnnouncer, NSString, SCQueuePerformer;

@interface SCNetworkConnectivityAnnouncer : NSObject {

	SCNetworkConnectivityListenerAnnouncer* _announcer;
	long long _connectivityStatusMainThread;
	long long _connectivityStatus;
	NSString* _hostName;
	SCQueuePerformer* _performer;
	SCNetworkReachabilityRef _networkReachability;
	BOOL _isMonitoring;

}
+(id)sharedInstance;
-(id)initWithDefaultURL:(id)arg1 ;
-(id)initWithDefaultHostName:(id)arg1 ;
-(void)_startMonitoringNetworkReachability;
-(void)_setConnectivityStatus:(long long)arg1 ;
-(void)setHostNameAsynchronously:(id)arg1 ;
-(long long)connectivityStatus;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

