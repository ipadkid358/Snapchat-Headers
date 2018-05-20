/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCTV3LocalParticipantState, NSArray, NSString;

@interface SCTV3StateOfTheWorld : NSObject {

	BOOL _isFullscreen;
	BOOL _isExpandedLocalMedia;
	BOOL _isLocalFullscreen;
	SCTV3LocalParticipantState* _localParticipantState;
	NSArray* _remoteParticipantStates;
	NSArray* _sortedActiveUsersInCall;
	long long _callingMedia;
	NSString* _caller;

}

@property (readonly) SCTV3LocalParticipantState * localParticipantState;              //@synthesize localParticipantState=_localParticipantState - In the implementation block
@property (readonly) NSArray * remoteParticipantStates;                               //@synthesize remoteParticipantStates=_remoteParticipantStates - In the implementation block
@property (readonly) NSArray * sortedActiveUsersInCall;                               //@synthesize sortedActiveUsersInCall=_sortedActiveUsersInCall - In the implementation block
@property (readonly) long long callingMedia;                                          //@synthesize callingMedia=_callingMedia - In the implementation block
@property (readonly) NSString * caller;                                               //@synthesize caller=_caller - In the implementation block
@property (readonly) BOOL isFullscreen;                                               //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (readonly) BOOL isExpandedLocalMedia;                                       //@synthesize isExpandedLocalMedia=_isExpandedLocalMedia - In the implementation block
@property (readonly) BOOL isLocalFullscreen;                                          //@synthesize isLocalFullscreen=_isLocalFullscreen - In the implementation block
+(id)stateWithLocalParticipantState:(id)arg1 remoteParticipantStates:(id)arg2 sortedActiveUsersInCall:(id)arg3 callingMedia:(long long)arg4 caller:(id)arg5 isFullscreen:(BOOL)arg6 isExpandedLocalMedia:(BOOL)arg7 isLocalFullscreen:(BOOL)arg8 ;
-(long long)callingMedia;
-(BOOL)isExpandedLocalMedia;
-(SCTV3LocalParticipantState *)localParticipantState;
-(NSArray *)remoteParticipantStates;
-(id)participantStateForUsername:(id)arg1 ;
-(id)initWithLocalParticipantState:(id)arg1 remoteParticipantStates:(id)arg2 sortedActiveUsersInCall:(id)arg3 callingMedia:(long long)arg4 caller:(id)arg5 isFullscreen:(BOOL)arg6 isExpandedLocalMedia:(BOOL)arg7 isLocalFullscreen:(BOOL)arg8 ;
-(BOOL)isLocalFullscreen;
-(NSArray *)sortedActiveUsersInCall;
-(unsigned long long)callPromptTypeWithAttachedCallPromptType:(unsigned long long)arg1 whileDisplayingMessageOnPrompt:(BOOL)arg2 ;
-(unsigned long long)localPublishedMedia;
-(BOOL)shouldAttachLocalMediaPaneWithAttachedCallPromptType:(unsigned long long)arg1 whileDisplayingMessageOnPrompt:(BOOL)arg2 ;
-(unsigned long long)localMediaToShow;
-(id)description;
-(BOOL)isFullscreen;
-(NSString *)caller;
@end
