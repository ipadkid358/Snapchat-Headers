/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCTIdentityServices <NSObject>
@required
-(id)localParticipantForConvoId:(id)arg1;
-(id)remoteParticipantsForConvoId:(id)arg1;
-(BOOL)isBestFriendConvoId:(id)arg1;
-(id)talkAuthForConvoId:(id)arg1;
-(void)refreshTalkAuthForConvoId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setPushTalkAuth:(id)arg1 convoId:(id)arg2;
-(void)setTalkRPC:(id)arg1;

@end

