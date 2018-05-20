/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSnapAirNetworkRequestSender, SCSnapAirLogWriter, SCSnapAirEventLogger, SCSnapAirDeviceInfoProvider;
@interface SCSnapAirConfiguration : NSObject {

	id<SCSnapAirNetworkRequestSender> _networkRequestSender;
	id<SCSnapAirLogWriter> _logWriter;
	id<SCSnapAirEventLogger> _eventLogger;
	id<SCSnapAirDeviceInfoProvider> _deviceInfoProvider;

}

@property (nonatomic,retain) id<SCSnapAirNetworkRequestSender> networkRequestSender;              //@synthesize networkRequestSender=_networkRequestSender - In the implementation block
@property (nonatomic,retain) id<SCSnapAirLogWriter> logWriter;                                    //@synthesize logWriter=_logWriter - In the implementation block
@property (nonatomic,retain) id<SCSnapAirEventLogger> eventLogger;                                //@synthesize eventLogger=_eventLogger - In the implementation block
@property (nonatomic,retain) id<SCSnapAirDeviceInfoProvider> deviceInfoProvider;                  //@synthesize deviceInfoProvider=_deviceInfoProvider - In the implementation block
-(id<SCSnapAirEventLogger>)eventLogger;
-(void)setEventLogger:(id<SCSnapAirEventLogger>)arg1 ;
-(id<SCSnapAirDeviceInfoProvider>)deviceInfoProvider;
-(id<SCSnapAirLogWriter>)logWriter;
-(id<SCSnapAirNetworkRequestSender>)networkRequestSender;
-(void)setNetworkRequestSender:(id<SCSnapAirNetworkRequestSender>)arg1 ;
-(void)setLogWriter:(id<SCSnapAirLogWriter>)arg1 ;
-(void)setDeviceInfoProvider:(id<SCSnapAirDeviceInfoProvider>)arg1 ;
-(id)initWithRequestSender:(id)arg1 withLogWriter:(id)arg2 withEventLogger:(id)arg3 withDeviceInfoProvider:(id)arg4 ;
@end

