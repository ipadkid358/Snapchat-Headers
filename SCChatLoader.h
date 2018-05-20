/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTimeProfilable.h>

@class SCUserSession, FBKVOController, NSString;

@interface SCChatLoader : NSObject <SCTimeProfilable> {

	SCUserSession* _userSession;
	FBKVOController* _observeController;

}

@property (nonatomic,retain) FBKVOController * observeController;              //@synthesize observeController=_observeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(FBKVOController *)observeController;
-(void)setObserveController:(FBKVOController *)arg1 ;
-(void)loadRecentMediaMessagesWithOrderedChats:(id)arg1 ;
-(void)_loadUnviewedChatStacksWithLimit:(long long)arg1 orderedChats:(id)arg2 ;
-(void)_networkReachabilityDidChange;
-(BOOL)_firstBatchOfMediaMessagesLoadedInChat:(id)arg1 ;
-(void)loadRecentMediaMessages;
-(id)init;
-(void)dealloc;
-(void)setUserSession:(id)arg1 ;
-(void)_addObservers;
-(void)_removeObservers;
@end

