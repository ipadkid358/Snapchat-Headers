/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScopeCoordinator.h>

@class SCStoriesDataScope, SCFriendsFeedServiceScope;

@interface SCStoriesUFSLinkCoordinator : SCScopeCoordinator {

	SCStoriesDataScope* _storiesDataScope;
	SCFriendsFeedServiceScope* _friendsFeedServiceScope;

}

@property (assign,nonatomic,__weak) SCStoriesDataScope * storiesDataScope;                            //@synthesize storiesDataScope=_storiesDataScope - In the implementation block
@property (assign,nonatomic,__weak) SCFriendsFeedServiceScope * friendsFeedServiceScope;              //@synthesize friendsFeedServiceScope=_friendsFeedServiceScope - In the implementation block
-(SCStoriesDataScope *)storiesDataScope;
-(void)setStoriesDataScope:(SCStoriesDataScope *)arg1 ;
-(SCFriendsFeedServiceScope *)friendsFeedServiceScope;
-(void)setFriendsFeedServiceScope:(SCFriendsFeedServiceScope *)arg1 ;
-(id)end;
-(void)begin;
@end

