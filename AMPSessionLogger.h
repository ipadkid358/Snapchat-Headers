/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class AMPSessionInfoRepository, NSNotificationCenter, AMPEventConfigurer, AMPUUIDGenerator, AMPTimeProvider, NSOperationQueue, AMPSessionInfo, AMPEventLoggerProvider, NSArray;

@interface AMPSessionLogger : NSObject {

	BOOL _sessionInProgress;
	BOOL _shouldStartNewSession;
	double _minimumSecondsBetweenSessions;
	AMPSessionInfoRepository* _sessionInfoRepo;
	NSNotificationCenter* _notificationCenter;
	AMPEventConfigurer* _eventConfigurer;
	AMPUUIDGenerator* _uuidGenerator;
	AMPTimeProvider* _timeProvider;
	NSOperationQueue* _loggingQueue;
	AMPSessionInfo* _sessionInfo;
	AMPEventLoggerProvider* _loggerProvider;
	NSArray* _allLoggers;
	/*^block*/id _eventObserver;

}

@property (nonatomic,readonly) double minimumSecondsBetweenSessions;                         //@synthesize minimumSecondsBetweenSessions=_minimumSecondsBetweenSessions - In the implementation block
@property (nonatomic,readonly) AMPSessionInfoRepository * sessionInfoRepo;                   //@synthesize sessionInfoRepo=_sessionInfoRepo - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) AMPEventConfigurer * eventConfigurer;                         //@synthesize eventConfigurer=_eventConfigurer - In the implementation block
@property (nonatomic,readonly) AMPUUIDGenerator * uuidGenerator;                             //@synthesize uuidGenerator=_uuidGenerator - In the implementation block
@property (nonatomic,readonly) AMPTimeProvider * timeProvider;                               //@synthesize timeProvider=_timeProvider - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * loggingQueue;                              //@synthesize loggingQueue=_loggingQueue - In the implementation block
@property (nonatomic,readonly) AMPSessionInfo * sessionInfo;                                 //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,readonly) AMPEventLoggerProvider * loggerProvider;                      //@synthesize loggerProvider=_loggerProvider - In the implementation block
@property (nonatomic,readonly) NSArray * allLoggers;                                         //@synthesize allLoggers=_allLoggers - In the implementation block
@property (nonatomic,readonly) id eventObserver;                                             //@synthesize eventObserver=_eventObserver - In the implementation block
@property (assign,getter=isSessionInProgress,nonatomic) BOOL sessionInProgress;              //@synthesize sessionInProgress=_sessionInProgress - In the implementation block
@property (nonatomic,readonly) BOOL shouldStartNewSession;                                   //@synthesize shouldStartNewSession=_shouldStartNewSession - In the implementation block
-(AMPTimeProvider *)timeProvider;
-(AMPSessionInfoRepository *)sessionInfoRepo;
-(AMPEventConfigurer *)eventConfigurer;
-(NSOperationQueue *)loggingQueue;
-(void)startOrResumeSession;
-(AMPEventLoggerProvider *)loggerProvider;
-(id)eventObserver;
-(void)_didEnterForeground;
-(void)_recordSessionEnd;
-(BOOL)isSessionInProgress;
-(void)setSessionInProgress:(BOOL)arg1 ;
-(BOOL)_shouldStartNewSession;
-(void)_removeSessionEndInfo;
-(NSArray *)allLoggers;
-(void)_saveSessionEndInfo;
-(double)minimumSecondsBetweenSessions;
-(void)_logSessionEndEventForPreviousSession;
-(AMPUUIDGenerator *)uuidGenerator;
-(void)_logSessionStartEvent;
-(long long)_timeSincePreviousSessionEnd;
-(void)_provideObserverWithEvent:(id)arg1 forLoggers:(id)arg2 ;
-(id)initWithMinSecondsBetweenSessions:(double)arg1 sessionInfoRepository:(id)arg2 notificationCenter:(id)arg3 eventConfigurer:(id)arg4 uuidGenerator:(id)arg5 timeProvider:(id)arg6 loggingQueue:(id)arg7 sessionInfo:(id)arg8 loggerProvider:(id)arg9 allLoggers:(NSArray*)arg10 eventObserver:(/*^block*/id)arg11 ;
-(void)startTrackingSession;
-(BOOL)shouldStartNewSession;
-(void)dealloc;
-(AMPSessionInfo *)sessionInfo;
-(NSNotificationCenter *)notificationCenter;
-(void)_startNewSession;
-(void)_didEnterBackground;
@end

