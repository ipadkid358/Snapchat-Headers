/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCFriendEventListener.h>
#import <Snapchat/SCAddFriendsSnapchattersDataFetching.h>
#import <Snapchat/SCAddFriendsSnapchattersDataTracking.h>

@class User, Friends, SCSearchEventListenerAnnouncer, NSString;

@interface SCFriendsFeedAddFriendsTabAdaptedSnapchattersDataProvider : NSObject <SCFriendEventListener, SCAddFriendsSnapchattersDataFetching, SCAddFriendsSnapchattersDataTracking> {

	User* _user;
	Friends* _friends;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)incomingFriendsDidUpdate:(id)arg1 updateType:(unsigned long long)arg2 context:(id)arg3 ;
-(void)outgoingFriendsDidUpdate:(id)arg1 updateType:(unsigned long long)arg2 context:(id)arg3 ;
-(void)suggestedFriendsDidUpdate:(id)arg1 updateType:(unsigned long long)arg2 context:(id)arg3 ;
-(void)friendActionDidStart:(unsigned long long)arg1 ;
-(void)friendActionDidFail:(unsigned long long)arg1 ;
-(id)snapchattersWithUserId:(id)arg1 ;
-(id)inProcessingSnapchatterIds;
-(id)incomingSnapchatters;
-(id)suggestedSnapchatters;
-(id)contactSnapchatters;
-(void)_didRemoveFriendIds:(id)arg1 ;
-(void)_announceStateRefreshEvent;
-(id)initWithUser:(id)arg1 friends:(id)arg2 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

