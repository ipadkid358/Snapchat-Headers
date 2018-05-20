/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTV3SessionWrapperListener.h>
#import <Snapchat/SCTCallingController.h>
#import <Snapchat/SCTV3HeadlessSession.h>

@protocol SCTV3HeadlessSession <NSObject>
@required
-(unsigned long long)processNotification:(id)arg1 senderUsername:(id)arg2;
-(long long)processRingingTimeout:(id)arg1;
-(id)getPublishersForNotification:(id)arg1;
-(void)endCall;
-(id)callingController;
-(void)applyPayload:(id)arg1 senderUsername:(id)arg2;

@end


@protocol SCTV3HeadlessCallServices;
@class NSString, SCTV3SessionWrapper;

@interface SCTV3HeadlessSession : NSObject <SCTV3SessionWrapperListener, SCTCallingController, SCTV3HeadlessSession> {

	NSString* _convoId;
	id<SCTV3HeadlessCallServices> _headlessCallServices;
	SCTV3SessionWrapper* _sessionWrapper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updatePublishedMedia:(unsigned long long)arg1 ;
-(void)startCall:(unsigned long long)arg1 ;
-(unsigned long long)processNotification:(id)arg1 senderUsername:(id)arg2 ;
-(long long)processRingingTimeout:(id)arg1 ;
-(id)getPublishersForNotification:(id)arg1 ;
-(void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3 ;
-(void)unmuteIfNeeded;
-(void)endCall;
-(id)callingController;
-(void)applyPayload:(id)arg1 senderUsername:(id)arg2 ;
-(id)initWithConvoId:(id)arg1 headlessCallServices:(id)arg2 sessionWrapper:(id)arg3 ;
-(void)dealloc;
@end
