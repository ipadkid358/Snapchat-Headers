/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBaseMessage.h>

@class Friend;

@interface SCSnapchatterMessage : SCBaseMessage {

	Friend* _snapchatter;
	BOOL _addFriendTapped;
	long long _loadState;

}

@property (assign,nonatomic) BOOL addFriendTapped;              //@synthesize addFriendTapped=_addFriendTapped - In the implementation block
@property (assign,nonatomic) long long loadState;               //@synthesize loadState=_loadState - In the implementation block
-(id)snapchatter;
-(void)setLoadState:(long long)arg1 ;
-(id)sendJSON;
-(id)initWithUsername:(id)arg1 dictionary:(id)arg2 ;
-(void)resetSessionState;
-(void)toggleSnapchatter:(id)arg1 ;
-(long long)scaMessageType;
-(id)initWithSender:(id)arg1 recipient:(id)arg2 snapchatter:(id)arg3 ;
-(id)logEventName;
-(BOOL)shouldNotifyUserOfFailure;
-(void)setAddFriendTapped:(BOOL)arg1 ;
-(BOOL)addFriendTapped;
-(id)initWithSender:(id)arg1 recipient:(id)arg2 snapchatter:(id)arg3 releaseSentToSelf:(BOOL)arg4 ;
-(void)_fetchSnapchatter;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)loadState;
-(long long)messageType;
-(long long)notificationType;
@end

