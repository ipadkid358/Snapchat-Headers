/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSendViewControllerSendingDelegate <NSObject>
@optional
-(void)leftButtonPressed;
-(id)sendSessionId;
-(void)sendViewControllerWillCancel:(id)arg1;
-(id)customDismissalAnimator;
-(void)sendViewController:(id)arg1 addToTopics:(id)arg2;

@required
-(void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 invitedRecipients:(id)arg3 postToMyStory:(BOOL)arg4 myStoryPrivacyOverride:(id)arg5 officialStories:(id)arg6 sharedStories:(id)arg7 businessIds:(id)arg8 mobStories:(id)arg9 newMobStories:(id)arg10 mischiefs:(id)arg11 businessProfiles:(id)arg12 gallery:(BOOL)arg13 inviteRecipientShown:(long long)arg14 additionalText:(id)arg15;

@end
