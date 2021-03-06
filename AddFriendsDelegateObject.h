/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/AddFriendsDelegate.h>

@class NSMutableArray, NSDictionary, User, NSString;

@interface AddFriendsDelegateObject : NSObject <AddFriendsDelegate> {

	NSMutableArray* _addedFriends;
	NSDictionary* _context;
	NSMutableArray* _friendsToInvite;
	NSMutableArray* _removedFriends;
	User* _user;

}

@property (nonatomic,retain) NSMutableArray * addedFriends;                 //@synthesize addedFriends=_addedFriends - In the implementation block
@property (nonatomic,retain) NSMutableArray * friendsToInvite;              //@synthesize friendsToInvite=_friendsToInvite - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedFriends;               //@synthesize removedFriends=_removedFriends - In the implementation block
@property (nonatomic,retain) NSDictionary * context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) User * user;                                   //@synthesize user=_user - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)addedFriends;
-(id)initWithUser:(id)arg1 context:(id)arg2 ;
-(BOOL)isFriendInvited:(id)arg1 ;
-(void)inviteOrUninviteFriend:(id)arg1 context:(id)arg2 ;
-(BOOL)isFriend:(id)arg1 ;
-(BOOL)isFriendWhoAddedYou:(id)arg1 ;
-(void)addOrRemoveFriend:(id)arg1 context:(id)arg2 sourceType:(long long)arg3 pageType:(long long)arg4 fromQuickAction:(BOOL)arg5 ;
-(void)updateAddedFriendsWithNewFriend:(id)arg1 context:(id)arg2 ;
-(void)updateRemovedFriendsWithRemovedFriend:(id)arg1 context:(id)arg2 ;
-(BOOL)isFriendOrInvited:(id)arg1 ;
-(NSMutableArray *)removedFriends;
-(void)addOrRemoveFriend:(id)arg1 context:(id)arg2 sourceType:(long long)arg3 fromQuickAction:(BOOL)arg4 pageType:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(NSMutableArray *)friendsToInvite;
-(void)initContainers;
-(void)setAddedFriends:(NSMutableArray *)arg1 ;
-(void)setFriendsToInvite:(NSMutableArray *)arg1 ;
-(void)setRemovedFriends:(NSMutableArray *)arg1 ;
-(id)friendsToAdd;
-(void)manageAndRemoveFriend:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addMultiFriends:(id)arg1 context:(id)arg2 sourceType:(long long)arg3 pageType:(long long)arg4 callback:(/*^block*/id)arg5 ;
-(void)ignoreFriendRequest:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isAddedFriend:(id)arg1 ;
-(void)acceptFriendRequest:(id)arg1 context:(id)arg2 ;
-(void)addOrRemoveFriend:(id)arg1 context:(id)arg2 pageType:(long long)arg3 sourceType:(long long)arg4 ;
-(void)removeFriend:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDisplay:(id)arg1 forIncomingFriend:(id)arg2 context:(id)arg3 ;
-(BOOL)isFriendWithUsername:(id)arg1 ;
-(BOOL)isFriendOrAddedFriend:(id)arg1 ;
-(BOOL)isRemovedFriends:(id)arg1 ;
-(void)setInvitedFriends:(id)arg1 ;
-(id)init;
-(void)reset;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(User *)user;
-(void)setUser:(User *)arg1 ;
@end

