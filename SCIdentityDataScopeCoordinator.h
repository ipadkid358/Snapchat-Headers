/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScopeCoordinator.h>

@class SCUserSessionScope, SCUserStorageScope, SCFriendmojiScope, SCFriendsFeedServiceScope, SCScopeExposer;

@interface SCIdentityDataScopeCoordinator : SCScopeCoordinator {

	SCUserSessionScope* _userSessionScope;
	SCUserStorageScope* _userStorageScope;
	SCFriendmojiScope* _friendmojiScope;
	SCFriendsFeedServiceScope* _friendsFeedServiceScope;
	SCScopeExposer* _identityDataScopeExposer;

}

@property (assign,nonatomic,__weak) SCUserSessionScope * userSessionScope;                            //@synthesize userSessionScope=_userSessionScope - In the implementation block
@property (assign,nonatomic,__weak) SCUserStorageScope * userStorageScope;                            //@synthesize userStorageScope=_userStorageScope - In the implementation block
@property (assign,nonatomic,__weak) SCFriendmojiScope * friendmojiScope;                              //@synthesize friendmojiScope=_friendmojiScope - In the implementation block
@property (assign,nonatomic,__weak) SCFriendsFeedServiceScope * friendsFeedServiceScope;              //@synthesize friendsFeedServiceScope=_friendsFeedServiceScope - In the implementation block
@property (nonatomic,retain) SCScopeExposer * identityDataScopeExposer;                               //@synthesize identityDataScopeExposer=_identityDataScopeExposer - In the implementation block
-(SCUserSessionScope *)userSessionScope;
-(SCUserStorageScope *)userStorageScope;
-(void)setUserSessionScope:(SCUserSessionScope *)arg1 ;
-(void)setUserStorageScope:(SCUserStorageScope *)arg1 ;
-(SCFriendsFeedServiceScope *)friendsFeedServiceScope;
-(void)setFriendsFeedServiceScope:(SCFriendsFeedServiceScope *)arg1 ;
-(SCFriendmojiScope *)friendmojiScope;
-(void)setFriendmojiScope:(SCFriendmojiScope *)arg1 ;
-(SCScopeExposer *)identityDataScopeExposer;
-(void)setIdentityDataScopeExposer:(SCScopeExposer *)arg1 ;
-(void)begin;
@end

