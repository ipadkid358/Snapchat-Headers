/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTV3SessionWrapperListener.h>
#import <Snapchat/SCTV3CallingControllerDelegate.h>
#import <Snapchat/SCTalkSession.h>

@protocol SCTalkV3DependenciesProvider, SCTCameraServices, SCTIdentityServices, SCTPhoneCallServices, SCTV3PresenceBarVC;
@class NSString, SCTV3AudioManager, SCTV3SessionWrapper, SCTV3UIController, SCTV3FullscreenController, SCTV3CallingController, SCTV3CameraManager, SCTV3SpeechActivityListenerAnnouncer;

@interface SCTalkV3Session : NSObject <SCTV3SessionWrapperListener, SCTV3CallingControllerDelegate, SCTalkSession> {

	NSString* _ownUsername;
	id<SCTalkV3DependenciesProvider> _deps;
	SCTV3AudioManager* _audioManager;
	id<SCTCameraServices> _cameraServices;
	id<SCTIdentityServices> _identityServices;
	id<SCTPhoneCallServices> _phoneCallServices;
	SCTV3SessionWrapper* _sessionWrapper;
	BOOL _sessionWrapperDisposed;
	SCTV3UIController* _uiController;
	id<SCTV3PresenceBarVC> _presenceController;
	SCTV3FullscreenController* _fullscreenController;
	SCTV3CallingController* _callingController;
	BOOL _shouldActivateCallingControllerOnCreation;
	SCTV3CameraManager* _cameraManager;
	BOOL _isMonologue;
	BOOL _exisitingUsersTooltipShown;
	NSString* _convoId;
	SCTV3SpeechActivityListenerAnnouncer* _speechActivityAnnouncer;

}

@property (readonly) NSString * convoId;                                                          //@synthesize convoId=_convoId - In the implementation block
@property (readonly) SCTV3SpeechActivityListenerAnnouncer * speechActivityAnnouncer;              //@synthesize speechActivityAnnouncer=_speechActivityAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setChatSource:(long long)arg1 ;
-(void)processTypingActivity:(unsigned long long)arg1 ;
-(void)refreshParticipants;
-(void)setCellViewPosition:(long long)arg1 ;
-(BOOL)_isGroupConversation;
-(void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3 ;
-(void)sessionWrapperDisposed:(id)arg1 ;
-(void)sessionWrapper:(id)arg1 updatedSpeechActivity:(id)arg2 ;
-(NSString *)convoId;
-(id)convoIdForCallingController:(id)arg1 ;
-(id)localSessionStateForCallingController:(id)arg1 ;
-(id)sessionStateForCallingController:(id)arg1 ;
-(id)speechActivityAnnouncerForCallingController:(id)arg1 ;
-(id)callingController;
-(id)initWithConvoId:(id)arg1 ownUsername:(id)arg2 dependencies:(id)arg3 sessionWrapper:(id)arg4 audioManager:(id)arg5 cameraServices:(id)arg6 identityServices:(id)arg7 phoneCallServices:(id)arg8 talkManager:(id)arg9 ;
-(void)_toggleExistingUsersTooltipIfRequired;
-(id)_setupPresenceBarIfNeeded;
-(BOOL)_inChatDependenciesReady;
-(id)_participantPresencesFromParticipants:(id)arg1 ;
-(BOOL)_isAnyParticipantPresent;
-(id)presenceController;
-(BOOL)TECHDEBT_expandedLocalMediaMode;
-(BOOL)TECHDEBT_callInProgress;
-(BOOL)isCallingSupported;
-(id)TECHDEBT_getPresentUsers;
-(SCTV3SpeechActivityListenerAnnouncer *)speechActivityAnnouncer;
-(void)dealloc;
-(NSString *)description;
-(void)deactivate;
-(void)activate;
-(void)background;
@end
