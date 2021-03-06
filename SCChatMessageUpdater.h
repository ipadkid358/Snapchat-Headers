/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatViewLifeCycleListener.h>
#import <Snapchat/SCChatViewModelListener.h>

@class SCChat, SCChatViewModelForChat, SCChatViewModelReducer, FBKVOController, NSMutableSet, NSString;

@interface SCChatMessageUpdater : NSObject <SCChatViewLifeCycleListener, SCChatViewModelListener> {

	SCChat* _chat;
	SCChatViewModelForChat* _chatViewModel;
	SCChatViewModelReducer* _chatViewModelReducer;
	FBKVOController* _kvoController;
	NSMutableSet* _messagesUnderObservation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithChatViewModelReducer:(id)arg1 ;
-(void)setChatViewModel:(id)arg1 ;
-(void)didMessagesChangeAtIndexPaths:(id)arg1 ;
-(void)willViewModelsChange;
-(void)didMessagesAddAtIndexPaths:(id)arg1 ;
-(void)didMessagesDeleteAtIndexPaths:(id)arg1 ;
-(void)didViewModelsChange;
-(void)resetMessagesObservers;
-(void)addObserverIfNeededForIndexPaths:(id)arg1 ;
-(void)addObserverIfNeededForMessageAtIndexPath:(id)arg1 ;
-(void)addObserversForMessage:(id)arg1 ;
-(void)messageDidChange:(id)arg1 forSnap:(id)arg2 ;
-(void)_addObserversForStoryMediaMessage:(id)arg1 ;
-(void)_addObserversForBatchedMediaMessage:(id)arg1 ;
-(void)_addObserversForBaseNoteMediaMessage:(id)arg1 ;
-(void)messageDidChange:(id)arg1 forMessage:(id)arg2 ;
-(void)_addObserversForTextMessage:(id)arg1 ;
-(void)messageDidChange:(id)arg1 forSnapchatterMessage:(id)arg2 ;
-(void)_addObserversForReplyMessage:(id)arg1 ;
-(void)mediaDidChange:(id)arg1 forMedia:(id)arg2 inMessage:(id)arg3 ;
-(void)messageDidChange:(id)arg1 forBaseNoteMessage:(id)arg2 ;
@end

