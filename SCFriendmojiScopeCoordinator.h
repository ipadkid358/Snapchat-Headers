/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScopeCoordinator.h>

@class SCAuthenticatedNetworkScope, SCScopeExposer;

@interface SCFriendmojiScopeCoordinator : SCScopeCoordinator {

	SCAuthenticatedNetworkScope* _authenticatedNetworkScope;
	SCScopeExposer* _friendmojiScopeExposer;

}

@property (assign,nonatomic,__weak) SCAuthenticatedNetworkScope * authenticatedNetworkScope;              //@synthesize authenticatedNetworkScope=_authenticatedNetworkScope - In the implementation block
@property (nonatomic,retain) SCScopeExposer * friendmojiScopeExposer;                                     //@synthesize friendmojiScopeExposer=_friendmojiScopeExposer - In the implementation block
-(SCAuthenticatedNetworkScope *)authenticatedNetworkScope;
-(void)setAuthenticatedNetworkScope:(SCAuthenticatedNetworkScope *)arg1 ;
-(SCScopeExposer *)friendmojiScopeExposer;
-(void)setFriendmojiScopeExposer:(SCScopeExposer *)arg1 ;
-(void)begin;
@end

