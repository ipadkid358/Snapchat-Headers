/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCMapLoggerSessionUserLocationProviding, SCXGameStateProvider;
@class SCUserSession, SCMapLoggerEventSender;

@interface SCMapLoggerSession : NSObject {

	SCUserSession* _userSession;
	id<SCMapLoggerSessionUserLocationProviding> _userLocationProvider;
	id<SCXGameStateProvider> _gameStateProvider;
	unsigned long long _sessionId;
	SCMapLoggerEventSender* _eventSender;

}

@property (nonatomic,__weak,readonly) SCUserSession * userSession;                                                   //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,__weak,readonly) id<SCMapLoggerSessionUserLocationProviding> userLocationProvider;              //@synthesize userLocationProvider=_userLocationProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<SCXGameStateProvider> gameStateProvider;                                    //@synthesize gameStateProvider=_gameStateProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionId;                                                         //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) SCMapLoggerEventSender * eventSender;                                                 //@synthesize eventSender=_eventSender - In the implementation block
-(id<SCXGameStateProvider>)gameStateProvider;
-(SCMapLoggerEventSender *)eventSender;
-(id)initWithUserSession:(id)arg1 userLocationProvider:(id)arg2 ;
-(id<SCMapLoggerSessionUserLocationProviding>)userLocationProvider;
-(unsigned long long)sessionId;
-(SCUserSession *)userSession;
@end

