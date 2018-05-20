/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSNumber;

@interface SCProfileV3SeenFriendsController : NSObject {

	NSMutableSet* _addedFriends;
	NSMutableSet* _seenSuggestedFriends;
	NSNumber* _impressionId;

}
-(id)_generateImpressionId;
-(void)_showQuickAddToast:(id)arg1 addedFriends:(id)arg2 placement:(id)arg3 ;
-(void)logRecordedFriends;
-(void)recordSeenFriendSuggestion:(id)arg1 ;
-(BOOL)recordAddedFriendSuggestion:(id)arg1 ;
-(id)init;
@end

