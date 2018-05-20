/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNetworkInterfaceAddress;

@interface SCNetworkInterfacesMonitor : NSObject {

	SCNetworkInterfaceAddress* _currentInterfaceAddressIpv4;
	SCNetworkInterfaceAddress* _currentInterfaceAddressIpv6;

}

@property (nonatomic,retain) SCNetworkInterfaceAddress * currentInterfaceAddressIpv4;              //@synthesize currentInterfaceAddressIpv4=_currentInterfaceAddressIpv4 - In the implementation block
@property (nonatomic,retain) SCNetworkInterfaceAddress * currentInterfaceAddressIpv6;              //@synthesize currentInterfaceAddressIpv6=_currentInterfaceAddressIpv6 - In the implementation block
+(id)shared;
-(void)updateNetworkInterfacesIfNeeded:(long long)arg1 ;
-(void)setCurrentInterfaceAddressIpv4:(SCNetworkInterfaceAddress *)arg1 ;
-(void)setCurrentInterfaceAddressIpv6:(SCNetworkInterfaceAddress *)arg1 ;
-(SCNetworkInterfaceAddress *)currentInterfaceAddressIpv4;
-(SCNetworkInterfaceAddress *)currentInterfaceAddressIpv6;
-(id)init;
-(void)networkReachabilityChanged:(id)arg1 ;
@end
