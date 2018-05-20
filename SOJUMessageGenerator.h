/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class SCExperimentManager;

@interface SOJUMessageGenerator : NSObject {

	SCExperimentManager* _experimentManager;

}
-(id)initWithExperimentManager:(id)arg1 ;
-(id)createMessageFromChatMessage:(id)arg1 modifyConversation:(id)arg2 ;
-(id)createReleaseTypeReleaseMessageForParticipant:(id)arg1 modifyConversation:(id)arg2 atTime:(id)arg3 ;
-(id)createV2TypeReleaseMessageForParticipant:(id)arg1 modifyConversation:(id)arg2 releaseType:(long long)arg3 knownChatSequenceNumbers:(NSDictionary*)arg4 ;
-(id)createPresenceMessageForConversation:(id)arg1 sender:(id)arg2 recipients:(id)arg3 legacyPresences:(id)arg4 extendedPresences:(id)arg5 presencesMetadata:(id)arg6 time:(id)arg7 ;
-(id)createVolatileMessageForSender:(id)arg1 conversation:(id)arg2 talkCorePayload:(id)arg3 time:(id)arg4 ;
-(id)createConnectedCallMessageForSender:(id)arg1 conversation:(id)arg2 audio:(BOOL)arg3 time:(id)arg4 ;
-(id)createMessageStateMessageForMessageId:(id)arg1 modifyConversation:(id)arg2 withParticipant:(id)arg3 messageState:(long long)arg4 version:(unsigned long long)arg5 originalMessageSender:(id)arg6 originalMessageSeqNum:(id)arg7 time:(id)arg8 ;
-(id)createMessagePreservationMessageForMessageId:(id)arg1 modifyConversation:(id)arg2 withParticipant:(id)arg3 preserved:(BOOL)arg4 time:(id)arg5 originalMessageSeqNum:(id)arg6 ;
-(id)createMessageEraseMessageForMessageId:(id)arg1 messageSeqNum:(id)arg2 modifyConversation:(id)arg3 withParticipant:(id)arg4 time:(id)arg5 ;
-(id)createSnapStateMessageForSender:(id)arg1 modifyConversation:(id)arg2 snapId:(id)arg3 snapSeqNum:(id)arg4 chatMediaId:(id)arg5 state:(long long)arg6 replayState:(long long)arg7 screenshotCount:(id)arg8 screenCaptureShotCount:(id)arg9 screenCaptureRecordingCount:(id)arg10 time:(id)arg11 ;
-(id)regenerateSequenceNumberForMessage:(id)arg1 inConversation:(id)arg2 ;
-(id)createCashRainMessage:(id)arg1 conversation:(id)arg2 ;
-(id)bumpSeqNumIfNecessaryForSender:(id)arg1 forConversation:(id)arg2 messageType:(long long)arg3 ;
-(id)nextSeqNumForSender:(id)arg1 conversation:(id)arg2 messageType:(long long)arg3 ;
-(id)_conversation:(id)arg1 createHeaderForSender:(id)arg2 ;
-(id)_createBodyFromChatMessage:(id)arg1 ;
-(id)createV3TypeReleaseMessageForParticipant:(id)arg1 modifyConversation:(id)arg2 atTime:(id)arg3 ;
-(id)_conversation:(id)arg1 createHeaderForSender:(id)arg2 recipients:(id)arg3 ;
-(id)createV2SnapStateMessageForSnapId:(id)arg1 conversation:(id)arg2 sender:(id)arg3 viewed:(BOOL)arg4 replayState:(long long)arg5 screenshotCount:(long long)arg6 screenCaptureShotCount:(long long)arg7 screenCaptureRecordingCount:(long long)arg8 viewedDate:(id)arg9 ;
-(id)snapStateSnapIdFromLocalSnapId:(id)arg1 ;
-(id)_updateSequenceNumberInMessage:(id)arg1 conversation:(id)arg2 ;
-(id)_createSignedPayloadFromConversation:(id)arg1 ;
-(id)_createMediaFromChatMediaContent:(id)arg1 ;
-(id)_createSOJUMediasFromChatMediaContents:(id)arg1 ;
-(id)_bumpChatSeqNumForSender:(id)arg1 forConversation:(id)arg2 ;
-(id)_bumpStateUpdateSeqNumForSender:(id)arg1 forConversation:(id)arg2 ;
@end

