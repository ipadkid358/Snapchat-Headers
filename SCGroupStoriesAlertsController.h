/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCGroupStoriesAlertsController : NSObject
+(void)warnIfBlockedUsersInPublication:(id)arg1 showSecondaryAction:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)showOutOfGeofenceWarningForPublication:(id)arg1 userSession:(id)arg2 onSettings:(/*^block*/id)arg3 ;
+(void)showMaxGroupStoriesSelectedWarningWithCompletion:(/*^block*/id)arg1 ;
+(void)showFirstTimePostingForPublicationIfNecessary:(id)arg1 userSession:(id)arg2 onAddSnap:(/*^block*/id)arg3 onDetails:(/*^block*/id)arg4 onCancel:(/*^block*/id)arg5 ;
+(void)verifyIntentToLeavePublication:(id)arg1 willBlock:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)_showFirstTimePostingCustomPublication:(id)arg1 onAddSnap:(/*^block*/id)arg2 onDetails:(/*^block*/id)arg3 onCancel:(/*^block*/id)arg4 ;
+(void)_showFirstTimePostingGeoPublication:(id)arg1 userSession:(id)arg2 onAddSnap:(/*^block*/id)arg3 onDetails:(/*^block*/id)arg4 onCancel:(/*^block*/id)arg5 ;
+(void)_showFirstTimePostingPrivatePublication:(id)arg1 onAddSnap:(/*^block*/id)arg2 onDetails:(/*^block*/id)arg3 onCancel:(/*^block*/id)arg4 ;
+(void)_showFirstTimePostingChatPublication:(id)arg1 onAddSnap:(/*^block*/id)arg2 onCancel:(/*^block*/id)arg3 ;
+(id)_firstTimePostingGeoPublicationItems:(id)arg1 hasBlockedFriends:(BOOL)arg2 userSession:(id)arg3 ;
+(id)_descriptionForGeoPublication:(id)arg1 hasBlockedFriends:(BOOL)arg2 ;
+(void)showFirstWatchWarningForPublicationIfNecessary:(id)arg1 userSession:(id)arg2 onWatch:(/*^block*/id)arg3 onDetails:(/*^block*/id)arg4 ;
@end

