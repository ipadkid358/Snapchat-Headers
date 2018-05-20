/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUVolatileMessage.h>
@class SOJUHeader, NSNumber, NSDictionary, NSString;


@protocol SOJUVolatileMessage <NSObject,NSCoding,NSCopying,SOJUConversationMessage>
@property (nonatomic,copy,readonly) SOJUHeader * header; 
@property (nonatomic,copy,readonly) NSNumber * retried; 
@property (nonatomic,copy,readonly) NSDictionary * knownChatSequenceNumbers; 
@property (nonatomic,copy,readonly) NSNumber * mischiefVersion; 
@property (nonatomic,copy,readonly) NSNumber * seqNum; 
@property (nonatomic,copy,readonly) NSNumber * timestamp; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * appEngineTarget; 
@property (nonatomic,copy,readonly) NSString * talkCorePayload; 
@required
-(NSString *)idValue;
-(NSString *)appEngineTarget;
-(NSNumber *)retried;
-(NSDictionary *)knownChatSequenceNumbers;
-(NSNumber *)mischiefVersion;
-(NSString *)talkCorePayload;
-(NSNumber *)timestamp;
-(NSString *)type;
-(SOJUHeader *)header;
-(NSNumber *)seqNum;

@end


@class SOJUHeader, NSNumber, NSDictionary, NSString;

@interface SOJUVolatileMessage : NSObject <SOJUVolatileMessage> {

	SOJUHeader* _header;
	NSNumber* _retried;
	NSDictionary* _knownChatSequenceNumbers;
	NSNumber* _mischiefVersion;
	NSNumber* _seqNum;
	NSNumber* _timestamp;
	NSString* _type;
	NSString* _idValue;
	NSString* _appEngineTarget;
	NSString* _talkCorePayload;

}

@property (nonatomic,copy,readonly) SOJUHeader * header;                                  //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * retried;                                   //@synthesize retried=_retried - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * knownChatSequenceNumbers;              //@synthesize knownChatSequenceNumbers=_knownChatSequenceNumbers - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mischiefVersion;                           //@synthesize mischiefVersion=_mischiefVersion - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * seqNum;                                    //@synthesize seqNum=_seqNum - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * idValue;                                   //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * appEngineTarget;                           //@synthesize appEngineTarget=_appEngineTarget - In the implementation block
@property (nonatomic,copy,readonly) NSString * talkCorePayload;                           //@synthesize talkCorePayload=_talkCorePayload - In the implementation block
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
-(NSString *)talkCorePayload;
-(id)initWithHeader:(id)arg1 retried:(id)arg2 knownChatSequenceNumbers:(id)arg3 mischiefVersion:(id)arg4 seqNum:(id)arg5 timestamp:(id)arg6 type:(id)arg7 idValue:(id)arg8 appEngineTarget:(id)arg9 talkCorePayload:(id)arg10 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)timestamp;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(SOJUHeader *)header;
-(NSNumber *)seqNum;
@end

