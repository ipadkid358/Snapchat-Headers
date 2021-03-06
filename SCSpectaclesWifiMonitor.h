/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesSsidEventListener.h>
#import <Snapchat/SCNetworkConnectivityListener.h>
#import <Snapchat/SCSpectaclesResponseMonitor.h>

@protocol SCPerforming, SCSpectaclesWifiMonitorDelegate;
@class NSString, SCSpectaclesSsidScanner, SCNetworkConnectivityAnnouncer, SCWeakTimer, SCLagunaRequestMessage;

@interface SCSpectaclesWifiMonitor : NSObject <SCSpectaclesSsidEventListener, SCNetworkConnectivityListener, SCSpectaclesResponseMonitor> {

	BOOL _areSpectaclesConnectingToWiFi;
	id<SCPerforming> _performer;
	id<SCSpectaclesWifiMonitorDelegate> _delegate;
	NSString* _ssid;
	NSString* _ipAddress;
	SCSpectaclesSsidScanner* _ssidScanner;
	SCNetworkConnectivityAnnouncer* _reachability;
	SCWeakTimer* _wifiStateTimer;
	SCLagunaRequestMessage* _outstandingWifiStartRequest;
	long long _state;

}

@property (nonatomic,retain) id<SCPerforming> performer;                                        //@synthesize performer=_performer - In the implementation block
@property (assign,nonatomic,__weak) id<SCSpectaclesWifiMonitorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * ssid;                                                     //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) NSString * ipAddress;                                                //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,retain) SCSpectaclesSsidScanner * ssidScanner;                             //@synthesize ssidScanner=_ssidScanner - In the implementation block
@property (nonatomic,retain) SCNetworkConnectivityAnnouncer * reachability;                     //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) SCWeakTimer * wifiStateTimer;                                      //@synthesize wifiStateTimer=_wifiStateTimer - In the implementation block
@property (nonatomic,retain) SCLagunaRequestMessage * outstandingWifiStartRequest;              //@synthesize outstandingWifiStartRequest=_outstandingWifiStartRequest - In the implementation block
@property (assign,nonatomic) long long state;                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL areSpectaclesConnectingToWiFi;                                //@synthesize areSpectaclesConnectingToWiFi=_areSpectaclesConnectingToWiFi - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SCPerforming>)performer;
-(void)networkConnectivityStatusDidChange:(long long)arg1 ;
-(void)setPerformer:(id<SCPerforming>)arg1 ;
-(id)initWithPerformer:(id)arg1 ssidScanner:(id)arg2 connectivityAnnouncer:(id)arg3 delegate:(id)arg4 ;
-(BOOL)wifiBooted;
-(void)connectToWifiWithSsid:(id)arg1 password:(id)arg2 ;
-(void)bootAndConnectWifiWithSsid:(id)arg1 ssidPassword:(id)arg2 countryCode:(id)arg3 ;
-(long long)responseMonitorState;
-(void)cancelWifiConnection;
-(void)wifiScannerDidUpdateWifiSsid:(id)arg1 ;
-(void)setOutstandingWifiStartRequest:(SCLagunaRequestMessage *)arg1 ;
-(void)setAreSpectaclesConnectingToWiFi:(BOOL)arg1 ;
-(SCSpectaclesSsidScanner *)ssidScanner;
-(SCLagunaRequestMessage *)outstandingWifiStartRequest;
-(BOOL)areSpectaclesConnectingToWiFi;
-(void)setSsidScanner:(SCSpectaclesSsidScanner *)arg1 ;
-(SCWeakTimer *)wifiStateTimer;
-(void)setWifiStateTimer:(SCWeakTimer *)arg1 ;
-(void)setSsid:(NSString *)arg1 ;
-(void)setDelegate:(id<SCSpectaclesWifiMonitorDelegate>)arg1 ;
-(id<SCSpectaclesWifiMonitorDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)_reset;
-(void)reset;
-(void)handleResponse:(id)arg1 ;
-(void)_transitionToState:(long long)arg1 ;
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(void)setReachability:(SCNetworkConnectivityAnnouncer *)arg1 ;
-(SCNetworkConnectivityAnnouncer *)reachability;
-(NSString *)ssid;
@end

