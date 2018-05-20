/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSOperationQueue, NSNotificationCenter;

@interface SCAppStateTracker : NSObject {

	NSUserDefaults* _userDefaults;
	NSOperationQueue* _mainQueue;
	long long _previousSessionApplicationState;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;                                 //@synthesize userDefaults=_userDefaults - In the implementation block
@property (assign,nonatomic,__weak) NSOperationQueue * mainQueue;                           //@synthesize mainQueue=_mainQueue - In the implementation block
@property (assign,nonatomic) long long applicationState; 
@property (assign,nonatomic) long long previousSessionApplicationState;                     //@synthesize previousSessionApplicationState=_previousSessionApplicationState - In the implementation block
@property (assign,nonatomic,__weak) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
-(id)initWithUserDefaults:(id)arg1 mainQueue:(id)arg2 notificationCenter:(id)arg3 ;
-(void)setPreviousSessionAppState:(long long)arg1 ;
-(void)_applicationEnteredForeground;
-(void)_applicationEnteredBackground;
-(long long)_appStateFromSerializedString:(id)arg1 ;
-(id)_serializedAppState:(long long)arg1 ;
-(void)startTrackingApplication:(id)arg1 ;
-(long long)previousSessionApplicationState;
-(void)setMainQueue:(NSOperationQueue *)arg1 ;
-(void)setPreviousSessionApplicationState:(long long)arg1 ;
-(void)dealloc;
-(long long)applicationState;
-(NSOperationQueue *)mainQueue;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setApplicationState:(long long)arg1 ;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(id)initWithDefaults;
@end

