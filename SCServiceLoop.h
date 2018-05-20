/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class NSMutableDictionary, NSMutableSet;

@interface SCServiceLoop : NSObject {

	NSMutableDictionary* _scheduledServices;
	NSMutableDictionary* _runningServices;
	NSMutableDictionary* _willBeSuspendedServices;
	NSMutableSet* _invalidatedServices;
	id<SCPerforming> _performer;
	long long _scheduled;
	NSMutableDictionary* _changeHandlers;

}
+(id)sharedInstance;
-(void)endCurrentTermAndContinueService:(id)arg1 whenNotified:(id)arg2 ;
-(void)unobserveServiceForObserveContext:(id)arg1 fromDealloc:(BOOL)arg2 ;
-(void)_scheduleServicesAndNotifyObserversForItem:(id)arg1 ;
-(void)_suspendServiceWithUUID:(id)arg1 ;
-(void)_performWithStatus:(unsigned long long)arg1 service:(id)arg2 observeSet:(id)arg3 ;
-(void)resumeService:(id)arg1 whenNotified:(id)arg2 ;
-(void)invalidateService:(id)arg1 ;
-(void)suspendService:(id)arg1 ;
-(void)setWhenNotified:(id)arg1 forScheduledService:(id)arg2 ;
-(void)suspendAllServices;
-(id)observeService:(id)arg1 queue:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(void)performNotifierChanges:(/*^block*/id)arg1 ;
-(id)init;
@end

