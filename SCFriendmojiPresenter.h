/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCFriendmojiRegistry, SCExpiringStreakLogger;
@class SCCurrentDateProvider;

@interface SCFriendmojiPresenter : NSObject {

	id<SCFriendmojiRegistry> _friendmojiRegistry;
	id<SCExpiringStreakLogger> _expiringStreakLogger;
	SCCurrentDateProvider* _currentDateProvider;

}
-(id)_displayStringForFriend:(id)arg1 friendmojiFilter:(/*^block*/id)arg2 ;
-(id)_displayStringForSnapchatter:(id)arg1 friendmojiFilter:(/*^block*/id)arg2 ;
-(id)_displayStringForFriendmojis:(id)arg1 isFriendBirthday:(BOOL)arg2 streakLength:(long long)arg3 friendUserId:(id)arg4 friendUsername:(id)arg5 friendmojiFilter:(/*^block*/id)arg6 ;
-(id)_streakStringForStreakWithLength:(long long)arg1 expiration:(id)arg2 friendUserId:(id)arg3 friendUsername:(id)arg4 ;
-(id)initWithFriendmojiRegistry:(id)arg1 expiringStreakLogger:(id)arg2 currentDateProvider:(id)arg3 ;
-(id)friendmojiInfoForFriend:(id)arg1 ;
-(id)friendmojiDisplayStringForFriend:(id)arg1 ;
-(id)friendmojiStreakStringForFriend:(id)arg1 ;
-(id)friendmojiDisplayStringWithoutStreakEmojiForFriend:(id)arg1 ;
-(id)officialFriendmojiDisplayStringForFriend:(id)arg1 ;
-(id)friendmojiDisplayStringForSnapchatter:(id)arg1 ;
-(BOOL)isDisplayStringForExpiringStreak:(id)arg1 ;
-(id)toggleExpiringStreakEmoji:(id)arg1 ;
@end

