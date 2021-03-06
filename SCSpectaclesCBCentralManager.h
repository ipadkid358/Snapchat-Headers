/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBCentralManager.h>
#import <Snapchat/SCSpectaclesCBCentralManagerEventListener.h>

@protocol SCPerforming;
@class NSMutableSet, SCSpectaclesCBCentralManagerEventListenerAnnouncer, NSString;

@interface SCSpectaclesCBCentralManager : CBCentralManager <SCSpectaclesCBCentralManagerEventListener> {

	NSMutableSet* _hitList;
	SCSpectaclesCBCentralManagerEventListenerAnnouncer* _announcer;
	id<SCPerforming> _performer;

}

@property (nonatomic,readonly) SCSpectaclesCBCentralManagerEventListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,readonly) id<SCPerforming> performer;                                                  //@synthesize performer=_performer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(id<SCPerforming>)performer;
-(SCSpectaclesCBCentralManagerEventListenerAnnouncer *)announcer;
-(id)_initWithAnnouncer:(id)arg1 performer:(id)arg2 options:(id)arg3 ;
-(void)shutdown;
-(void)connectPeripheral:(id)arg1 options:(id)arg2 ;
-(void)cancelPeripheralConnection:(id)arg1 ;
-(void)centralManager:(id)arg1 willRestoreState:(id)arg2 ;
@end

