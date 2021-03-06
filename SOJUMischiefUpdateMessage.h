/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUMischiefUpdateMessage.h>
@class SOJUMessageBody, NSString, NSDictionary, SOJUHeader, NSNumber, NSArray, SOJUIdentityMischiefMetadata;


@protocol SOJUMischiefUpdateMessage <NSObject,NSCoding,NSCopying,SOJUChatMessage>
@property (nonatomic,copy,readonly) SOJUMessageBody * body; 
@property (nonatomic,copy,readonly) NSString * chatMessageId; 
@property (nonatomic,copy,readonly) NSDictionary * savedState; 
@property (nonatomic,copy,readonly) NSDictionary * preservations; 
@property (nonatomic,copy,readonly) NSDictionary * lastReleasedSeqNum; 
@property (nonatomic,copy,readonly) SOJUHeader * header; 
@property (nonatomic,copy,readonly) NSNumber * retried; 
@property (nonatomic,copy,readonly) NSDictionary * knownChatSequenceNumbers; 
@property (nonatomic,copy,readonly) NSNumber * mischiefVersion; 
@property (nonatomic,copy,readonly) NSNumber * seqNum; 
@property (nonatomic,copy,readonly) NSNumber * timestamp; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * appEngineTarget; 
@property (nonatomic,copy,readonly) NSString * mischiefUpdateMessageType; 
@property (nonatomic,copy,readonly) NSString * originParticipantId; 
@property (nonatomic,copy,readonly) NSArray * participantsIds; 
@property (nonatomic,copy,readonly) NSString * sojuNewMischiefName; 
@property (nonatomic,copy,readonly) SOJUIdentityMischiefMetadata * mischiefMetadataResult; 
@required
-(NSString *)idValue;
-(NSString *)appEngineTarget;
-(NSNumber *)retried;
-(NSDictionary *)knownChatSequenceNumbers;
-(NSNumber *)mischiefVersion;
-(NSString *)chatMessageId;
-(NSDictionary *)savedState;
-(NSDictionary *)preservations;
-(NSDictionary *)lastReleasedSeqNum;
-(NSString *)mischiefUpdateMessageType;
-(NSString *)originParticipantId;
-(NSArray *)participantsIds;
-(NSString *)sojuNewMischiefName;
-(SOJUIdentityMischiefMetadata *)mischiefMetadataResult;
-(NSNumber *)timestamp;
-(NSString *)type;
-(SOJUMessageBody *)body;
-(SOJUHeader *)header;
-(NSNumber *)seqNum;

@end


@class SOJUMessageBody, NSString, NSDictionary, SOJUHeader, NSNumber, NSArray, SOJUIdentityMischiefMetadata;

@interface SOJUMischiefUpdateMessage : NSObject <SOJUMischiefUpdateMessage> {

	SOJUMessageBody* _body;
	NSString* _chatMessageId;
	NSDictionary* _savedState;
	NSDictionary* _preservations;
	NSDictionary* _lastReleasedSeqNum;
	SOJUHeader* _header;
	NSNumber* _retried;
	NSDictionary* _knownChatSequenceNumbers;
	NSNumber* _mischiefVersion;
	NSNumber* _seqNum;
	NSNumber* _timestamp;
	NSString* _type;
	NSString* _idValue;
	NSString* _appEngineTarget;
	NSString* _mischiefUpdateMessageType;
	NSString* _originParticipantId;
	NSArray* _participantsIds;
	NSString* _sojuNewMischiefName;
	SOJUIdentityMischiefMetadata* _mischiefMetadataResult;

}

@property (nonatomic,copy,readonly) SOJUMessageBody * body;                                             //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * chatMessageId;                                           //@synthesize chatMessageId=_chatMessageId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * savedState;                                          //@synthesize savedState=_savedState - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * preservations;                                       //@synthesize preservations=_preservations - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * lastReleasedSeqNum;                                  //@synthesize lastReleasedSeqNum=_lastReleasedSeqNum - In the implementation block
@property (nonatomic,copy,readonly) SOJUHeader * header;                                                //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * retried;                                                 //@synthesize retried=_retried - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * knownChatSequenceNumbers;                            //@synthesize knownChatSequenceNumbers=_knownChatSequenceNumbers - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mischiefVersion;                                         //@synthesize mischiefVersion=_mischiefVersion - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * seqNum;                                                  //@synthesize seqNum=_seqNum - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * idValue;                                                 //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * appEngineTarget;                                         //@synthesize appEngineTarget=_appEngineTarget - In the implementation block
@property (nonatomic,copy,readonly) NSString * mischiefUpdateMessageType;                               //@synthesize mischiefUpdateMessageType=_mischiefUpdateMessageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * originParticipantId;                                     //@synthesize originParticipantId=_originParticipantId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * participantsIds;                                          //@synthesize participantsIds=_participantsIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * sojuNewMischiefName;                                     //@synthesize sojuNewMischiefName=_sojuNewMischiefName - In the implementation block
@property (nonatomic,copy,readonly) SOJUIdentityMischiefMetadata * mischiefMetadataResult;              //@synthesize mischiefMetadataResult=_mischiefMetadataResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(long long)typeEnum;
-(NSString *)idValue;
-(BOOL)retriedValue;
-(long long)mischiefVersionValue;
-(long long)seqNumValue;
-(long long)timestampValue;
-(NSString *)appEngineTarget;
-(NSNumber *)retried;
-(NSDictionary *)knownChatSequenceNumbers;
-(NSNumber *)mischiefVersion;
-(NSString *)chatMessageId;
-(NSDictionary *)savedState;
-(NSDictionary *)preservations;
-(NSDictionary *)lastReleasedSeqNum;
-(long long)mischiefUpdateMessageTypeEnum;
-(NSString *)mischiefUpdateMessageType;
-(NSString *)originParticipantId;
-(NSArray *)participantsIds;
-(NSString *)sojuNewMischiefName;
-(SOJUIdentityMischiefMetadata *)mischiefMetadataResult;
-(id)initWithBody:(id)arg1 chatMessageId:(id)arg2 savedState:(id)arg3 preservations:(id)arg4 lastReleasedSeqNum:(id)arg5 header:(id)arg6 retried:(id)arg7 knownChatSequenceNumbers:(id)arg8 mischiefVersion:(id)arg9 seqNum:(id)arg10 timestamp:(id)arg11 type:(id)arg12 idValue:(id)arg13 appEngineTarget:(id)arg14 mischiefUpdateMessageType:(id)arg15 originParticipantId:(id)arg16 participantsIds:(id)arg17 sojuNewMischiefName:(id)arg18 mischiefMetadataResult:(id)arg19 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)timestamp;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SOJUMessageBody *)body;
-(id)toDictionary;
-(SOJUHeader *)header;
-(NSNumber *)seqNum;
@end

