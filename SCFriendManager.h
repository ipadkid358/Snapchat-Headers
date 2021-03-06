/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCFriendManager <NSObject>
@required
-(id)userIdForUsername:(id)arg1;
-(BOOL)isFriendWithUser:(id)arg1;
-(BOOL)friendHasDisplayName:(id)arg1;
-(id)displayNameForUsername:(id)arg1;
-(BOOL)isUsernameBlocked:(id)arg1;
-(BOOL)isRecentlyAddedFriend:(id)arg1;
-(void)updateRecentsWithUsername:(id)arg1 timestamp:(id)arg2;
-(id)dateFriendAdded:(id)arg1;
-(id)dateFriendRequested:(id)arg1;
-(void)generateInteractionEventsForStreakFriends;
-(id)recentsWithGroups:(id)arg1;
-(id)getRecents;
-(id)avatarForUsername:(id)arg1 userSession:(id)arg2;

@end

