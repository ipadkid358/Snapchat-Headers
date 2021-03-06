/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:06 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface AFNetworkActivityIndicatorManager : NSObject {

	BOOL _enabled;
	BOOL _networkActivityIndicatorVisible;
	double _activationDelay;
	double _completionDelay;
	long long _activityCount;
	NSTimer* _activationDelayTimer;
	NSTimer* _completionDelayTimer;
	/*^block*/id _networkActivityActionBlock;
	long long _currentState;

}

@property (assign,nonatomic) long long activityCount;                                                                    //@synthesize activityCount=_activityCount - In the implementation block
@property (nonatomic,retain) NSTimer * activationDelayTimer;                                                             //@synthesize activationDelayTimer=_activationDelayTimer - In the implementation block
@property (nonatomic,retain) NSTimer * completionDelayTimer;                                                             //@synthesize completionDelayTimer=_completionDelayTimer - In the implementation block
@property (getter=isNetworkActivityOccurring,nonatomic,readonly) BOOL networkActivityOccurring; 
@property (nonatomic,copy) id networkActivityActionBlock;                                                                //@synthesize networkActivityActionBlock=_networkActivityActionBlock - In the implementation block
@property (assign,nonatomic) long long currentState;                                                                     //@synthesize currentState=_currentState - In the implementation block
@property (assign,getter=isNetworkActivityIndicatorVisible,nonatomic) BOOL networkActivityIndicatorVisible;              //@synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double activationDelay;                                                                     //@synthesize activationDelay=_activationDelay - In the implementation block
@property (assign,nonatomic) double completionDelay;                                                                     //@synthesize completionDelay=_completionDelay - In the implementation block
+(id)sharedManager;
-(void)networkRequestDidStart:(id)arg1 ;
-(void)networkRequestDidFinish:(id)arg1 ;
-(void)setActivationDelay:(double)arg1 ;
-(void)setCompletionDelay:(double)arg1 ;
-(void)setNetworkActivityActionBlock:(id)arg1 ;
-(long long)activityCount;
-(id)networkActivityActionBlock;
-(void)updateCurrentStateForNetworkActivityChange;
-(void)incrementActivityCount;
-(void)decrementActivityCount;
-(void)cancelActivationDelayTimer;
-(void)cancelCompletionDelayTimer;
-(void)startActivationDelayTimer;
-(void)startCompletionDelayTimer;
-(BOOL)isNetworkActivityOccurring;
-(double)activationDelay;
-(void)activationDelayTimerFired;
-(void)setActivationDelayTimer:(NSTimer *)arg1 ;
-(NSTimer *)activationDelayTimer;
-(NSTimer *)completionDelayTimer;
-(double)completionDelay;
-(void)completionDelayTimerFired;
-(void)setCompletionDelayTimer:(NSTimer *)arg1 ;
-(void)setNetworkingActivityActionWithBlock:(/*^block*/id)arg1 ;
-(void)setActivityCount:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 ;
-(BOOL)isNetworkActivityIndicatorVisible;
-(long long)currentState;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setCurrentState:(long long)arg1 ;
@end

