/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCAddFriendsSnapchattersDataMutating.h>

@class Friends;

@interface SCFriendsFeedAddFriendsTabAdaptedSnapchattersActionHandler : NSObject <SCAddFriendsSnapchattersDataMutating> {

	Friends* _friends;

}
-(id)initWithFriends:(id)arg1 ;
-(void)handleSnapchatterFriendsUpdateRequest:(id)arg1 ;
-(void)handleSnapchatterFriendsSuggestRequest:(id)arg1 ;
-(void)_addSnapchatter:(id)arg1 addSource:(long long)arg2 section:(long long)arg3 cellIndex:(long long)arg4 ;
-(void)_hideSuggestedSnapchatter:(id)arg1 ;
@end
