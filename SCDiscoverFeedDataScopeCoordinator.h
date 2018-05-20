/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScopeCoordinator.h>

@class SCIdentityDataScope, SCStoriesDataScope, SCScopeExposer;

@interface SCDiscoverFeedDataScopeCoordinator : SCScopeCoordinator {

	SCIdentityDataScope* _identityDataScope;
	SCStoriesDataScope* _storiesDataScope;
	SCScopeExposer* _discoverFeedDataScopeExposer;

}

@property (assign,nonatomic,__weak) SCIdentityDataScope * identityDataScope;              //@synthesize identityDataScope=_identityDataScope - In the implementation block
@property (assign,nonatomic,__weak) SCStoriesDataScope * storiesDataScope;                //@synthesize storiesDataScope=_storiesDataScope - In the implementation block
@property (nonatomic,retain) SCScopeExposer * discoverFeedDataScopeExposer;               //@synthesize discoverFeedDataScopeExposer=_discoverFeedDataScopeExposer - In the implementation block
-(SCIdentityDataScope *)identityDataScope;
-(SCStoriesDataScope *)storiesDataScope;
-(void)setIdentityDataScope:(SCIdentityDataScope *)arg1 ;
-(void)setStoriesDataScope:(SCStoriesDataScope *)arg1 ;
-(SCScopeExposer *)discoverFeedDataScopeExposer;
-(void)setDiscoverFeedDataScopeExposer:(SCScopeExposer *)arg1 ;
-(void)begin;
@end

