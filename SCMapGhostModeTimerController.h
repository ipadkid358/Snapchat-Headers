/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTimeProfilable.h>

@protocol SCMapGhostModeTimerControllerDelegate;
@class SCUserSession, SCQueuePerformer, NSTimer, NSString;

@interface SCMapGhostModeTimerController : NSObject <SCTimeProfilable> {

	SCUserSession* _userSession;
	SCQueuePerformer* _performer;
	NSTimer* _foregroundTimer;
	double _retryRequestInterval;
	BOOL _forceSync;
	id<SCMapGhostModeTimerControllerDelegate> _delegate;

}

@property (assign) BOOL forceSync;                                                                   //@synthesize forceSync=_forceSync - In the implementation block
@property (assign,nonatomic,__weak) id<SCMapGhostModeTimerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(id)initWithUserSession:(id)arg1 ;
-(void)exitGhostModeIfTimerExpired;
-(void)startTimerWithDuration:(double)arg1 ;
-(void)setForceSync:(BOOL)arg1 ;
-(BOOL)forceSync;
-(void)_exitGhostModeIfTimerExpired;
-(void)_startForegroundTimerWithDuration:(double)arg1 ;
-(void)_exitGhostMode;
-(void)_updateTimerWithRemainingDuration:(double)arg1 ;
-(void)_foregroundTimerDidFire:(id)arg1 ;
-(double)remainingDuration;
-(BOOL)needsSync;
-(void)setDelegate:(id<SCMapGhostModeTimerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCMapGhostModeTimerControllerDelegate>)delegate;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)invalidateTimer;
@end

