/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMergedStatusMessageChatViewModel.h>

@interface SCMergedSaveChatViewModel : SCMergedStatusMessageChatViewModel
-(double)heightForStatusMessageLabel;
-(id)textForStatusMessageLabel;
-(BOOL)canMergeMessage:(id)arg1 ;
-(id)_mediaSavesFromMergedMessages;
-(id)_mediaTypeSavedCountFromSaves:(id)arg1 ;
-(id)_usersSavedYourSingleStringWithMediaType:(long long)arg1 singleUserSaved:(BOOL)arg2 userDisplayNames:(id)arg3 mediaSenderDisplayName:(id)arg4 ;
-(id)_usersSavedYourMultipleStringWithMediaType:(long long)arg1 singleUserSaved:(BOOL)arg2 userDisplayNames:(id)arg3 mediaSenderDisplayName:(id)arg4 mediaSavedCount:(int)arg5 ;
-(id)_mediaTypeStringFromServerString:(id)arg1 mediaSavedCount:(long long)arg2 ;
-(id)_youSavedSingleStringWithMediaType:(long long)arg1 mediaSenderDisplayName:(id)arg2 ;
-(id)_youAndUserSavedSingleStringWithMediaType:(long long)arg1 userDisplayName:(id)arg2 mediaSenderDisplayName:(id)arg3 ;
-(id)_youAndUsersSavedSingleStringWithMediaType:(long long)arg1 userDisplayNames:(id)arg2 mediaSenderDisplayName:(id)arg3 ;
-(id)_usersSavedSingleStringWithMediaType:(long long)arg1 singleUserSaved:(BOOL)arg2 userDisplayNames:(id)arg3 mediaSenderDisplayName:(id)arg4 ;
-(id)_mediaSaveFromMessage:(id)arg1 ;
@end
