/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScopeCoordinator.h>
#import <Snapchat/SCGroupManagerListener.h>

@class SCUserSessionScope, NSString;

@interface SCStoriesDOCLegacyUpdateScopeCoordinator : SCScopeCoordinator <SCGroupManagerListener> {

	SCUserSessionScope* _userSessionScope;

}

@property (assign,nonatomic,__weak) SCUserSessionScope * userSessionScope;              //@synthesize userSessionScope=_userSessionScope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didJoinGroupWithId:(id)arg1 ;
-(void)didCreateGroupOnServerWithId:(id)arg1 initialSojuMischief:(id)arg2 ;
-(void)didBeginLeavingGroupWithId:(id)arg1 ;
-(void)didFinishLoadingGroups;
-(void)didChangeInfoForGroupWithId:(id)arg1 ;
-(SCUserSessionScope *)userSessionScope;
-(void)setUserSessionScope:(SCUserSessionScope *)arg1 ;
-(void)_handleFriendRemoved:(id)arg1 ;
-(void)_handlePublicationRemoved:(id)arg1 ;
-(void)_handlePublicationMetadataFetched:(id)arg1 ;
-(void)_handleStoriesClearExpired:(id)arg1 ;
-(id)end;
-(void)begin;
@end

