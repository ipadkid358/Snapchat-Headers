/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCFilterableProtocol <NSObject>
@optional
-(BOOL)matchesByUsername:(id)arg1;
-(BOOL)matchesByDisplayName:(id)arg1;
-(BOOL)matchesForOfficialStorySearch:(id)arg1;
-(BOOL)matchesPrefix:(id)arg1;
-(BOOL)matchesByPartialName:(id)arg1;
-(BOOL)matchesByDisplayAndUserNames:(id)arg1;
-(BOOL)matchesByFriendmoji:(id)arg1 friendmojiPresenter:(id)arg2;
-(BOOL)matchesByContainingRelevance:(id)arg1;
-(unsigned long long)matchType:(id)arg1;
-(BOOL)matches:(id)arg1;

@end

