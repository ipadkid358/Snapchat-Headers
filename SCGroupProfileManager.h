/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGroupManagerListener.h>

@class SCUnifiedProfileSession, SCGroupProfileManagerListenerAnnouncer, NSString;

@interface SCGroupProfileManager : NSObject <SCGroupManagerListener> {

	SCUnifiedProfileSession* _profileSession;
	SCGroupProfileManagerListenerAnnouncer* _announcer;

}

@property (nonatomic,readonly) SCGroupProfileManagerListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCGroupProfileManagerListenerAnnouncer *)announcer;
-(void)didJoinGroupWithId:(id)arg1 ;
-(void)didCreateGroupOnServerWithId:(id)arg1 initialSojuMischief:(id)arg2 ;
-(void)didBeginLeavingGroupWithId:(id)arg1 ;
-(void)didFinishLoadingGroups;
-(void)didChangeInfoForGroupWithId:(id)arg1 ;
-(id)initWithProfileSession:(id)arg1 ;
@end
