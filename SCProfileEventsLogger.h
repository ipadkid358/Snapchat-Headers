/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface SCProfileEventsLogger : NSObject {

	NSString* _profileSessionId;
	BOOL _profileSessionEnded;
	NSMutableSet* _availableSections;
	double _pageStartTimestamp;

}
+(long long)getPageTypeFromPageName:(id)arg1 ;
+(id)sharedInstance;
-(id)getSessionId;
-(void)logProfilePageView:(long long)arg1 ;
-(void)logProfileUsernamePageExit:(unsigned long long)arg1 nonFriendCountWithDisplayPic:(unsigned long long)arg2 friendAddCount:(unsigned long long)arg3 friendAddCountWithDisplayPic:(unsigned long long)arg4 ;
-(void)logProfileUsernameSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 addedMeCount:(unsigned long long)arg3 addressBookCount:(unsigned long long)arg4 usernameCount:(unsigned long long)arg5 myFriendCount:(unsigned long long)arg6 verifiedUserCount:(unsigned long long)arg7 ;
-(void)logProfileContactPermissionGrant:(long long)arg1 hasVerifiedNumber:(BOOL)arg2 source:(id)arg3 ;
-(void)logProfileContactPermissionDeny:(long long)arg1 hasVerifiedNumber:(BOOL)arg2 source:(id)arg3 ;
-(void)logProfileContactPermissionContinue:(long long)arg1 hasVerifiedNumber:(BOOL)arg2 source:(id)arg3 ;
-(void)logProfileAddFriendsPageExit:(id)arg1 suggestFriendCount:(unsigned long long)arg2 suggestFriendCountWithDisplayPic:(unsigned long long)arg3 suggestFriendAddCount:(unsigned long long)arg4 suggestFriendAddCountWithDisplayPic:(unsigned long long)arg5 ;
-(void)logProfileAddressBookPageView:(id)arg1 source:(id)arg2 hasContactsAccess:(BOOL)arg3 hasVerifiedNumber:(BOOL)arg4 ;
-(void)logProfileMyContactsPageView:(id)arg1 hasContactsAccess:(BOOL)arg2 hasVerifiedNumber:(BOOL)arg3 ;
-(void)logProfileAddressBookEmpty;
-(void)logProfileContactInviteInitiate:(long long)arg1 ;
-(void)logProfileSearchPerform:(long long)arg1 charCount:(unsigned long long)arg2 keyStrokeCount:(unsigned long long)arg3 snapchatterCount:(unsigned long long)arg4 nonSnapchatterCount:(unsigned long long)arg5 friendSearchCount:(unsigned long long)arg6 ;
-(void)logProfileMyFriendsFriendBlock;
-(void)logProfileMyFriendsPageExit:(unsigned long long)arg1 myFriendBlockCount:(unsigned long long)arg2 myFriendReAddCount:(unsigned long long)arg3 myFriendRemoveCount:(unsigned long long)arg4 myFriendNameEditCount:(unsigned long long)arg5 myFriendBlockInSearchCount:(unsigned long long)arg6 myFriendReAddInSearchCount:(unsigned long long)arg7 myFriendRemoveInSearchCount:(unsigned long long)arg8 myFriendNameEditInSearchCount:(unsigned long long)arg9 ;
-(void)logProfileAddressBookPageExit:(id)arg1 snapchatterCount:(unsigned long long)arg2 snapchatterCountWithDisplayPic:(unsigned long long)arg3 nonSnapchatterCount:(unsigned long long)arg4 snapchatterAddCount:(unsigned long long)arg5 snapchatterAddCountWithDisplayPic:(unsigned long long)arg6 snapchatterAddInSearchCount:(unsigned long long)arg7 nonSnapchatterInviteCount:(unsigned long long)arg8 nonSnapchatterInviteInSearchCount:(unsigned long long)arg9 hasVerifiedNumber:(BOOL)arg10 ;
-(void)logProfileMyContactsPageExit:(unsigned long long)arg1 snapchatterCountWithDisplayPic:(unsigned long long)arg2 nonSnapchatterCount:(unsigned long long)arg3 snapchatterAddCount:(unsigned long long)arg4 snapchatterAddCountWithDisplayPic:(unsigned long long)arg5 snapchatterAddInSearchCount:(unsigned long long)arg6 nonSnapchatterInviteCount:(unsigned long long)arg7 nonSnapchatterInviteInSearchCount:(unsigned long long)arg8 hasVerifiedNumber:(BOOL)arg9 ;
-(void)logProfileAddressBookRefresh;
-(void)logProfileSearchClear:(long long)arg1 charCount:(unsigned long long)arg2 ;
-(void)logProfileMainPageExit:(id)arg1 hasProfilePic:(BOOL)arg2 newAddedMeCount:(unsigned long long)arg3 ;
-(void)logFindFriendNumbers:(unsigned long long)arg1 maxNumberLength:(unsigned long long)arg2 ;
-(void)logProfileAddressBookAddContactsFooter:(id)arg1 ;
-(void)logProfilePromptAction:(long long)arg1 ;
-(void)logProfileStorySettingPageview:(long long)arg1 ;
-(void)logProfileAddFriendsPageView:(long long)arg1 page:(long long)arg2 ;
-(void)logProfileAddFriendSearchAction:(long long)arg1 ;
-(void)logProfileAddFriendsPageExitCheetah;
-(void)logProfileMainPageViewWithNewFriendsCount:(long long)arg1 ;
-(void)logProfileSessionEnd;
-(void)addAvailableProfileSection:(id)arg1 ;
-(void)logProfileShareSnapcodeStart:(id)arg1 source:(long long)arg2 ;
-(void)logProfileShareSnapcodeEndWithActivityType:(id)arg1 completed:(BOOL)arg2 errorMessage:(id)arg3 source:(long long)arg4 ;
-(void)logProfileDisplayNameChange:(id)arg1 ;
-(void)logProfileInviteContactStart:(long long)arg1 inviteUrl:(id)arg2 ;
-(void)logProfileInviteContactEnd:(id)arg1 inviteType:(long long)arg2 inviteUrl:(id)arg3 ;
-(void)logPageViewTimeEventStart;
-(void)logDiscoverPairingFailure;
-(void)logBluetoothNumericFailure;
-(void)logPairingSuccess:(BOOL)arg1 userAgent:(id)arg2 ;
-(void)logPageViewTimeEvent:(long long)arg1 ;
-(id)getOrCreateSessionId;
-(long long)getProfilePageTypeFromPageName:(id)arg1 ;
-(long long)getRequestSourceFromFriendSource:(long long)arg1 ;
-(long long)getActionMethod:(id)arg1 ;
-(long long)getVerificationType:(BOOL)arg1 ;
-(void)logProfileAddedMePageView:(id)arg1 ;
-(void)_logProfileAddFriendsPageView:(id)arg1 ;
-(void)logProfileUsernamePageView:(id)arg1 ;
-(void)logProfileMyFriendsPageView:(id)arg1 ;
-(void)logProfileAddressBookSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 snapchatterCount:(unsigned long long)arg3 nonSnapchatterCount:(unsigned long long)arg4 ;
-(void)logProfileMyContactsSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 snapchatterCount:(unsigned long long)arg3 nonSnapchatterCount:(unsigned long long)arg4 ;
-(void)logProfileMyFriendsSearchPerform:(unsigned long long)arg1 keyStrokeCount:(unsigned long long)arg2 friendSearchCount:(unsigned long long)arg3 ;
-(void)logProfileUsernameSearchClear:(unsigned long long)arg1 ;
-(void)logProfileAddressBookSearchClear:(unsigned long long)arg1 ;
-(void)logProfileMyContactsSearchClear:(unsigned long long)arg1 ;
-(void)logProfileMyFriendsSearchClear:(unsigned long long)arg1 ;
-(void)logProfileAddressBookContactPermissionDeny:(BOOL)arg1 source:(id)arg2 ;
-(void)logProfileMyContactsContactPermissionDeny:(BOOL)arg1 ;
-(void)logProfileAddressBookContactPermissionGrant:(BOOL)arg1 source:(id)arg2 ;
-(void)logProfileMyContactsContactPermissionGrant:(BOOL)arg1 ;
-(void)logProfileAddressBookContactPermissionContinue:(BOOL)arg1 source:(id)arg2 ;
-(void)logProfileMyContactsContactPermissionContinue:(BOOL)arg1 ;
-(void)logProfileUsernameFriendRequestSent;
-(void)logProfileAddressBookFriendRequestSent;
-(void)logProfileMyContactsFriendRequestSent;
-(void)logProfileMyFriendsFriendRequestSent;
-(void)logProfileUsernameFriendDelete;
-(void)logProfileAddressBookFriendDelete;
-(void)logProfileMyContactsFriendDelete;
-(void)logProfileMyFriendsFriendDelete;
-(void)logProfileAddressBookContactInviteInitiate;
-(void)logProfileMyContactsContactInviteInitiate;
-(void)_logPageEvent:(long long)arg1 viewTime:(double)arg2 ;
-(void)logProfilePicturesPageView;
-(void)logProfilePicturesTakeNewPictures:(long long)arg1 forUsername:(id)arg2 ;
-(void)logProfilePicturesDeletePictures:(long long)arg1 forUsername:(id)arg2 ;
-(void)logProfilePicturesSharePictures:(id)arg1 withPicture:(BOOL)arg2 forUsername:(id)arg3 ;
-(void)logMiniProfileView:(long long)arg1 page:(id)arg2 viewLocation:(long long)arg3 profileType:(long long)arg4 profileId:(id)arg5 logProfileId:(BOOL)arg6 shouldAttributeViewToOurStory:(BOOL)arg7 ;
-(void)logMiniProfileExit:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4 ;
-(void)logMiniProfileChatButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4 ;
-(void)logMiniProfileSnapButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4 ;
-(void)logMiniProfileCallButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4 ;
-(void)logMiniProfileVideoButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4 ;
-(void)logMiniProfileSettingsGearButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4 ;
-(void)logMiniProfileShareButtonWithFriend:(id)arg1 storyPrivacy:(id)arg2 parentViewController:(id)arg3 activityType:(id)arg4 completed:(BOOL)arg5 errorMessage:(id)arg6 page:(id)arg7 ;
-(void)logMiniProfileSendAccount:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4 ;
-(void)logMiniProfileAddFriendButton:(long long)arg1 page:(id)arg2 profileId:(id)arg3 friendPictureStatus:(id)arg4 viewLocation:(long long)arg5 logProfileId:(BOOL)arg6 shouldAttributeViewToOurStory:(BOOL)arg7 ;
-(void)logMiniProfileCancelButton:(long long)arg1 page:(id)arg2 friend:(id)arg3 friendPictureStatus:(id)arg4 ;
-(void)logProfileFriendRequestNameEdit:(BOOL)arg1 source:(long long)arg2 name:(id)arg3 display:(id)arg4 ;
-(void)logProfileFriendRequestIgnore:(BOOL)arg1 source:(long long)arg2 method:(id)arg3 ;
-(void)logProfileFriendRequestBlock:(BOOL)arg1 source:(long long)arg2 method:(id)arg3 ;
-(void)logProfileFriendRequestAccept:(BOOL)arg1 source:(long long)arg2 ;
-(void)logProfileFriendRequestDelete:(BOOL)arg1 source:(long long)arg2 method:(id)arg3 ;
-(void)logProfileAddedMePageExit:(unsigned long long)arg1 newRequestCount:(unsigned long long)arg2 newRequestCountWithDisplayPic:(unsigned long long)arg3 requestAcceptCount:(unsigned long long)arg4 requestAcceptCountWithDisplayPic:(unsigned long long)arg5 requestBlockCount:(unsigned long long)arg6 requestIngoreCount:(unsigned long long)arg7 requestNameEditCount:(unsigned long long)arg8 ;
-(void)logProfileSaveSnapcodeWithSource:(long long)arg1 isSuccess:(BOOL)arg2 ;
-(void)logProfileShareUsernameStart:(id)arg1 source:(long long)arg2 ;
-(void)logProfileShareUsernameEndWithActivityType:(id)arg1 completed:(BOOL)arg2 errorMessage:(id)arg3 source:(long long)arg4 ;
-(void)logProfileNearbyPageExit:(unsigned long long)arg1 nearbyFriendCountWithDisplayPic:(unsigned long long)arg2 nearbyFriendAddCount:(unsigned long long)arg3 nearbyFriendAddCountWithDisplayPic:(unsigned long long)arg4 ;
-(void)logProfileMyFriendsNameEdit:(id)arg1 display:(id)arg2 ;
-(void)logProfilePhoneVerificationFooter:(long long)arg1 ;
-(void)logProfilePhoneVerificationDialog:(long long)arg1 action:(BOOL)arg2 ;
-(void)logProfileFriendRequestSent:(long long)arg1 ;
-(void)logProfileFriendDelete:(long long)arg1 ;
-(void)logTrophyCasePageViewWithNumberOfTrophies:(unsigned long long)arg1 ;
-(void)logTrophyPopupPageViewWithUnicode:(id)arg1 andTrophyLabel:(id)arg2 ;
-(id)init;
@end

