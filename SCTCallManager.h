/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXProviderDelegate.h>
#import <Snapchat/SCTV3HeadlessCallServicesDelegate.h>

@protocol SCTCallManagerListener, SCTCallKitAudioServices;
@class CXProvider, CXCallController, NSMutableDictionary, NSString;

@interface SCTCallManager : NSObject <CXProviderDelegate, SCTV3HeadlessCallServicesDelegate> {

	CXProvider* _provider;
	CXCallController* _callController;
	id<SCTCallManagerListener> _listener;
	id<SCTCallKitAudioServices> _callKitAudioServices;
	NSMutableDictionary* _calls;
	/*^block*/id _audioActivatedCallback;
	/*^block*/id _audioDeactivatedCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_appVisibilityChanged:(id)arg1 ;
-(id)_callForHandle:(id)arg1 ;
-(void)_endCall:(id)arg1 ;
-(id)_callForConvoId:(id)arg1 ;
-(void)performAction:(id)arg1 errorLog:(id)arg2 ;
-(void)_requestCallKitAudioSession;
-(void)headlessCallServices:(id)arg1 didUpdateCallMedia:(unsigned long long)arg2 ;
-(void)callDidEndForHeadlessCallServices:(id)arg1 ;
-(id)initWithListener:(id)arg1 callKitAudioServices:(id)arg2 ;
-(void)reportIncomingCallFromSender:(id)arg1 soundName:(id)arg2 conversationID:(id)arg3 isVideo:(BOOL)arg4 ;
-(void)reportEndedCallNotification:(id)arg1 ;
-(void)createOutgoingCallToFriend:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)createOutgoingCallToGroupWithIdentifier:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)dealloc;
-(void)providerDidReset:(id)arg1 ;
-(void)provider:(id)arg1 performStartCallAction:(id)arg2 ;
-(void)provider:(id)arg1 performAnswerCallAction:(id)arg2 ;
-(void)provider:(id)arg1 performEndCallAction:(id)arg2 ;
-(void)provider:(id)arg1 performSetMutedCallAction:(id)arg2 ;
-(void)provider:(id)arg1 didActivateAudioSession:(id)arg2 ;
-(void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2 ;
@end

