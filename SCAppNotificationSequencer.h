/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCAppNotificationProviderDelegate.h>
#import <Snapchat/SCTPhoneCallListener.h>

@protocol SCAppNotificationSequencerDelegate, SCInAppNotificationDisplayProtocol;
@class NSTimer, NSDate, NSMutableArray, SCAppNotification, SCUserSession, NSString;

@interface SCAppNotificationSequencer : NSObject <SCAppNotificationProviderDelegate, SCTPhoneCallListener> {

	NSTimer* _requeryPolicyTimer;
	NSTimer* _currentNotificationTimer;
	NSDate* _currentNotificationExpectedEndTime;
	NSMutableArray* _highPriorityNotifications;
	NSMutableArray* _notifications;
	double _pausedNotificationTimeRemaining;
	SCAppNotification* _pausedNotification;
	SCAppNotification* _activeNotification;
	id<SCAppNotificationSequencerDelegate> _delegate;
	id<SCInAppNotificationDisplayProtocol> _displayProtocol;
	SCUserSession* _userSession;

}

@property (nonatomic,readonly) SCAppNotification * activeNotification;                                   //@synthesize activeNotification=_activeNotification - In the implementation block
@property (nonatomic,__weak,readonly) id<SCAppNotificationSequencerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCInAppNotificationDisplayProtocol> displayProtocol;              //@synthesize displayProtocol=_displayProtocol - In the implementation block
@property (nonatomic,retain) SCUserSession * userSession;                                                //@synthesize userSession=_userSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didApplicationStateChange:(BOOL)arg1 withCurrentNotifications:(id)arg2 ;
-(void)hideNotification:(id)arg1 ;
-(BOOL)canDisplayNotification:(id)arg1 ;
-(void)displayNotification:(id)arg1 ;
-(void)onPhoneActivityChanged:(BOOL)arg1 ;
-(void)pauseTimer;
-(id<SCInAppNotificationDisplayProtocol>)displayProtocol;
-(void)requeryPolicy:(id)arg1 ;
-(SCAppNotification *)activeNotification;
-(void)displayNextNotification;
-(id)dequeueNextNotification;
-(void)updateActiveNotificationProperty:(id)arg1 withInterruption:(BOOL)arg2 ;
-(void)displayNotification:(id)arg1 forInterval:(double)arg2 ;
-(void)expireActiveNotification:(id)arg1 ;
-(void)suppressActiveNotification;
-(void)verifyWhetherAnyPendingNotificationsShouldBeRevoked;
-(void)clearAllNotifications;
-(void)setDisplayProtocol:(id<SCInAppNotificationDisplayProtocol>)arg1 ;
-(id<SCAppNotificationSequencerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(void)enqueueNotification:(id)arg1 ;
-(void)resumeTimer;
@end
