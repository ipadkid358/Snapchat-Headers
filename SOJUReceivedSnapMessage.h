/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUReceivedSnapMessage.h>
@class SOJUHeader, NSNumber, NSDictionary, NSString, NSArray, SOJUSnapstreakMetadata, SOJUGenericSnap, SOJUMediaUrl, SOJUSnapMetadata;


@protocol SOJUReceivedSnapMessage <NSObject,NSCoding,NSCopying,SOJUConversationMessage>
@property (nonatomic,copy,readonly) SOJUHeader * header; 
@property (nonatomic,copy,readonly) NSNumber * retried; 
@property (nonatomic,copy,readonly) NSDictionary * knownChatSequenceNumbers; 
@property (nonatomic,copy,readonly) NSNumber * mischiefVersion; 
@property (nonatomic,copy,readonly) NSNumber * seqNum; 
@property (nonatomic,copy,readonly) NSNumber * timestamp; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * appEngineTarget; 
@property (nonatomic,copy,readonly) NSNumber * sentTimestamp; 
@property (nonatomic,copy,readonly) NSNumber * deliveredTimestamp; 
@property (nonatomic,copy,readonly) NSNumber * status; 
@property (nonatomic,copy,readonly) NSString * snapId; 
@property (nonatomic,copy,readonly) NSNumber * zipped; 
@property (nonatomic,copy,readonly) NSString * captionTextDeprecated; 
@property (nonatomic,copy,readonly) NSNumber * captionOrientationDeprecated; 
@property (nonatomic,copy,readonly) NSNumber * captionPositionDeprecated; 
@property (nonatomic,copy,readonly) NSNumber * mediaType; 
@property (nonatomic,copy,readonly) NSNumber * displayTime; 
@property (nonatomic,copy,readonly) NSString * filterId; 
@property (nonatomic,copy,readonly) NSString * esId; 
@property (nonatomic,copy,readonly) NSString * egData; 
@property (nonatomic,copy,readonly) NSArray * uvTags; 
@property (nonatomic,copy,readonly) NSNumber * fiVersion; 
@property (nonatomic,copy,readonly) NSString * fiSenderOutAlpha; 
@property (nonatomic,copy,readonly) NSString * fiRecipientOutAlpha; 
@property (nonatomic,copy,readonly) NSNumber * fiSendTimestamp; 
@property (nonatomic,copy,readonly) NSDictionary * fideliusInfo; 
@property (nonatomic,copy,readonly) NSString * sojuNewSnapId; 
@property (nonatomic,copy,readonly) NSString * sojuNewSnapMediaType; 
@property (nonatomic,copy,readonly) NSString * fiSnapKey; 
@property (nonatomic,copy,readonly) NSString * fiSnapIv; 
@property (nonatomic,copy,readonly) NSString * venueId; 
@property (nonatomic,copy,readonly) NSArray * snapAttachments; 
@property (nonatomic,copy,readonly) NSNumber * isInfiniteDuration; 
@property (nonatomic,copy,readonly) SOJUSnapstreakMetadata * snapstreakMetadata; 
@property (nonatomic,copy,readonly) NSNumber * sendStartTimestamp; 
@property (nonatomic,copy,readonly) NSString * fiSenderOutBeta; 
@property (nonatomic,copy,readonly) NSArray * replyMedias; 
@property (nonatomic,copy,readonly) NSNumber * fiSnapReleaseTs; 
@property (nonatomic,copy,readonly) NSString * checksum; 
@property (nonatomic,copy,readonly) NSNumber * fiRetried; 
@property (nonatomic,copy,readonly) SOJUGenericSnap * sojuNewSnap; 
@property (nonatomic,copy,readonly) SOJUMediaUrl * directDownloadUrl; 
@property (nonatomic,copy,readonly) NSString * contextHint; 
@property (nonatomic,copy,readonly) NSString * animatedSnapType; 
@property (nonatomic,copy,readonly) SOJUSnapMetadata * snapMetadata; 
@required
-(NSString *)idValue;
-(NSString *)snapId;
-(NSString *)appEngineTarget;
-(NSNumber *)retried;
-(NSDictionary *)knownChatSequenceNumbers;
-(NSNumber *)mischiefVersion;
-(NSNumber *)sendStartTimestamp;
-(NSDictionary *)fideliusInfo;
-(NSArray *)snapAttachments;
-(NSNumber *)zipped;
-(SOJUSnapMetadata *)snapMetadata;
-(NSArray *)replyMedias;
-(NSString *)esId;
-(NSString *)egData;
-(NSArray *)uvTags;
-(NSNumber *)fiVersion;
-(NSString *)fiSnapKey;
-(NSString *)fiSnapIv;
-(NSString *)fiSenderOutBeta;
-(NSNumber *)fiSnapReleaseTs;
-(NSNumber *)fiRetried;
-(SOJUMediaUrl *)directDownloadUrl;
-(NSString *)filterId;
-(NSString *)fiSenderOutAlpha;
-(NSString *)fiRecipientOutAlpha;
-(NSNumber *)fiSendTimestamp;
-(NSString *)venueId;
-(NSString *)contextHint;
-(NSString *)animatedSnapType;
-(NSNumber *)sentTimestamp;
-(NSNumber *)deliveredTimestamp;
-(NSString *)captionTextDeprecated;
-(NSNumber *)captionOrientationDeprecated;
-(NSNumber *)captionPositionDeprecated;
-(NSString *)sojuNewSnapId;
-(NSString *)sojuNewSnapMediaType;
-(SOJUSnapstreakMetadata *)snapstreakMetadata;
-(SOJUGenericSnap *)sojuNewSnap;
-(NSNumber *)timestamp;
-(NSString *)type;
-(NSNumber *)status;
-(NSString *)checksum;
-(NSNumber *)isInfiniteDuration;
-(SOJUHeader *)header;
-(NSNumber *)mediaType;
-(NSNumber *)seqNum;
-(NSNumber *)displayTime;

@end


@class SOJUHeader, NSNumber, NSDictionary, NSString, NSArray, SOJUSnapstreakMetadata, SOJUGenericSnap, SOJUMediaUrl, SOJUSnapMetadata;

@interface SOJUReceivedSnapMessage : NSObject <SOJUReceivedSnapMessage> {

	SOJUHeader* _header;
	NSNumber* _retried;
	NSDictionary* _knownChatSequenceNumbers;
	NSNumber* _mischiefVersion;
	NSNumber* _seqNum;
	NSNumber* _timestamp;
	NSString* _type;
	NSString* _idValue;
	NSString* _appEngineTarget;
	NSNumber* _sentTimestamp;
	NSNumber* _deliveredTimestamp;
	NSNumber* _status;
	NSString* _snapId;
	NSNumber* _zipped;
	NSString* _captionTextDeprecated;
	NSNumber* _captionOrientationDeprecated;
	NSNumber* _captionPositionDeprecated;
	NSNumber* _mediaType;
	NSNumber* _displayTime;
	NSString* _filterId;
	NSString* _esId;
	NSString* _egData;
	NSArray* _uvTags;
	NSNumber* _fiVersion;
	NSString* _fiSenderOutAlpha;
	NSString* _fiRecipientOutAlpha;
	NSNumber* _fiSendTimestamp;
	NSDictionary* _fideliusInfo;
	NSString* _sojuNewSnapId;
	NSString* _sojuNewSnapMediaType;
	NSString* _fiSnapKey;
	NSString* _fiSnapIv;
	NSString* _venueId;
	NSArray* _snapAttachments;
	NSNumber* _isInfiniteDuration;
	SOJUSnapstreakMetadata* _snapstreakMetadata;
	NSNumber* _sendStartTimestamp;
	NSString* _fiSenderOutBeta;
	NSArray* _replyMedias;
	NSNumber* _fiSnapReleaseTs;
	NSString* _checksum;
	NSNumber* _fiRetried;
	SOJUGenericSnap* _sojuNewSnap;
	SOJUMediaUrl* _directDownloadUrl;
	NSString* _contextHint;
	NSString* _animatedSnapType;
	SOJUSnapMetadata* _snapMetadata;

}

@property (nonatomic,copy,readonly) SOJUHeader * header;                                      //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * retried;                                       //@synthesize retried=_retried - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * knownChatSequenceNumbers;                  //@synthesize knownChatSequenceNumbers=_knownChatSequenceNumbers - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mischiefVersion;                               //@synthesize mischiefVersion=_mischiefVersion - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * seqNum;                                        //@synthesize seqNum=_seqNum - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * idValue;                                       //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * appEngineTarget;                               //@synthesize appEngineTarget=_appEngineTarget - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sentTimestamp;                                 //@synthesize sentTimestamp=_sentTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * deliveredTimestamp;                            //@synthesize deliveredTimestamp=_deliveredTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapId;                                        //@synthesize snapId=_snapId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * zipped;                                        //@synthesize zipped=_zipped - In the implementation block
@property (nonatomic,copy,readonly) NSString * captionTextDeprecated;                         //@synthesize captionTextDeprecated=_captionTextDeprecated - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * captionOrientationDeprecated;                  //@synthesize captionOrientationDeprecated=_captionOrientationDeprecated - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * captionPositionDeprecated;                     //@synthesize captionPositionDeprecated=_captionPositionDeprecated - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mediaType;                                     //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * displayTime;                                   //@synthesize displayTime=_displayTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * filterId;                                      //@synthesize filterId=_filterId - In the implementation block
@property (nonatomic,copy,readonly) NSString * esId;                                          //@synthesize esId=_esId - In the implementation block
@property (nonatomic,copy,readonly) NSString * egData;                                        //@synthesize egData=_egData - In the implementation block
@property (nonatomic,copy,readonly) NSArray * uvTags;                                         //@synthesize uvTags=_uvTags - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fiVersion;                                     //@synthesize fiVersion=_fiVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * fiSenderOutAlpha;                              //@synthesize fiSenderOutAlpha=_fiSenderOutAlpha - In the implementation block
@property (nonatomic,copy,readonly) NSString * fiRecipientOutAlpha;                           //@synthesize fiRecipientOutAlpha=_fiRecipientOutAlpha - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fiSendTimestamp;                               //@synthesize fiSendTimestamp=_fiSendTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * fideliusInfo;                              //@synthesize fideliusInfo=_fideliusInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * sojuNewSnapId;                                 //@synthesize sojuNewSnapId=_sojuNewSnapId - In the implementation block
@property (nonatomic,copy,readonly) NSString * sojuNewSnapMediaType;                          //@synthesize sojuNewSnapMediaType=_sojuNewSnapMediaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * fiSnapKey;                                     //@synthesize fiSnapKey=_fiSnapKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * fiSnapIv;                                      //@synthesize fiSnapIv=_fiSnapIv - In the implementation block
@property (nonatomic,copy,readonly) NSString * venueId;                                       //@synthesize venueId=_venueId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * snapAttachments;                                //@synthesize snapAttachments=_snapAttachments - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isInfiniteDuration;                            //@synthesize isInfiniteDuration=_isInfiniteDuration - In the implementation block
@property (nonatomic,copy,readonly) SOJUSnapstreakMetadata * snapstreakMetadata;              //@synthesize snapstreakMetadata=_snapstreakMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sendStartTimestamp;                            //@synthesize sendStartTimestamp=_sendStartTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * fiSenderOutBeta;                               //@synthesize fiSenderOutBeta=_fiSenderOutBeta - In the implementation block
@property (nonatomic,copy,readonly) NSArray * replyMedias;                                    //@synthesize replyMedias=_replyMedias - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fiSnapReleaseTs;                               //@synthesize fiSnapReleaseTs=_fiSnapReleaseTs - In the implementation block
@property (nonatomic,copy,readonly) NSString * checksum;                                      //@synthesize checksum=_checksum - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fiRetried;                                     //@synthesize fiRetried=_fiRetried - In the implementation block
@property (nonatomic,copy,readonly) SOJUGenericSnap * sojuNewSnap;                            //@synthesize sojuNewSnap=_sojuNewSnap - In the implementation block
@property (nonatomic,copy,readonly) SOJUMediaUrl * directDownloadUrl;                         //@synthesize directDownloadUrl=_directDownloadUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextHint;                                   //@synthesize contextHint=_contextHint - In the implementation block
@property (nonatomic,copy,readonly) NSString * animatedSnapType;                              //@synthesize animatedSnapType=_animatedSnapType - In the implementation block
@property (nonatomic,copy,readonly) SOJUSnapMetadata * snapMetadata;                          //@synthesize snapMetadata=_snapMetadata - In the implementation block
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
-(NSString *)snapId;
-(BOOL)retriedValue;
-(long long)mischiefVersionValue;
-(long long)seqNumValue;
-(long long)timestampValue;
-(NSString *)appEngineTarget;
-(NSNumber *)retried;
-(NSDictionary *)knownChatSequenceNumbers;
-(NSNumber *)mischiefVersion;
-(long long)sendStartTimestampValue;
-(NSNumber *)sendStartTimestamp;
-(NSDictionary *)fideliusInfo;
-(int)mediaTypeValue;
-(NSArray *)snapAttachments;
-(BOOL)zippedValue;
-(int)fiVersionValue;
-(long long)fiSnapReleaseTsValue;
-(BOOL)fiRetriedValue;
-(NSNumber *)zipped;
-(SOJUSnapMetadata *)snapMetadata;
-(NSArray *)replyMedias;
-(NSString *)esId;
-(NSString *)egData;
-(NSArray *)uvTags;
-(NSNumber *)fiVersion;
-(NSString *)fiSnapKey;
-(NSString *)fiSnapIv;
-(NSString *)fiSenderOutBeta;
-(NSNumber *)fiSnapReleaseTs;
-(NSNumber *)fiRetried;
-(SOJUMediaUrl *)directDownloadUrl;
-(NSString *)filterId;
-(long long)sentTimestampValue;
-(BOOL)isInfiniteDurationValue;
-(long long)animatedSnapTypeEnum;
-(long long)fiSendTimestampValue;
-(NSString *)fiSenderOutAlpha;
-(NSString *)fiRecipientOutAlpha;
-(NSNumber *)fiSendTimestamp;
-(NSString *)venueId;
-(NSString *)contextHint;
-(NSString *)animatedSnapType;
-(long long)deliveredTimestampValue;
-(long long)captionOrientationDeprecatedValue;
-(double)captionPositionDeprecatedValue;
-(double)displayTimeValue;
-(NSNumber *)sentTimestamp;
-(NSNumber *)deliveredTimestamp;
-(NSString *)captionTextDeprecated;
-(NSNumber *)captionOrientationDeprecated;
-(NSNumber *)captionPositionDeprecated;
-(NSString *)sojuNewSnapId;
-(NSString *)sojuNewSnapMediaType;
-(SOJUSnapstreakMetadata *)snapstreakMetadata;
-(SOJUGenericSnap *)sojuNewSnap;
-(id)initWithHeader:(id)arg1 retried:(id)arg2 knownChatSequenceNumbers:(id)arg3 mischiefVersion:(id)arg4 seqNum:(id)arg5 timestamp:(id)arg6 type:(id)arg7 idValue:(id)arg8 appEngineTarget:(id)arg9 sentTimestamp:(id)arg10 deliveredTimestamp:(id)arg11 status:(id)arg12 snapId:(id)arg13 zipped:(id)arg14 captionTextDeprecated:(id)arg15 captionOrientationDeprecated:(id)arg16 captionPositionDeprecated:(id)arg17 mediaType:(id)arg18 displayTime:(id)arg19 filterId:(id)arg20 esId:(id)arg21 egData:(id)arg22 uvTags:(id)arg23 fiVersion:(id)arg24 fiSenderOutAlpha:(id)arg25 fiRecipientOutAlpha:(id)arg26 fiSendTimestamp:(id)arg27 fideliusInfo:(id)arg28 sojuNewSnapId:(id)arg29 sojuNewSnapMediaType:(id)arg30 fiSnapKey:(id)arg31 fiSnapIv:(id)arg32 venueId:(id)arg33 snapAttachments:(id)arg34 isInfiniteDuration:(id)arg35 snapstreakMetadata:(id)arg36 sendStartTimestamp:(id)arg37 fiSenderOutBeta:(id)arg38 replyMedias:(id)arg39 fiSnapReleaseTs:(id)arg40 checksum:(id)arg41 fiRetried:(id)arg42 sojuNewSnap:(id)arg43 directDownloadUrl:(id)arg44 contextHint:(id)arg45 animatedSnapType:(id)arg46 snapMetadata:(id)arg47 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)timestamp;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)status;
-(NSString *)checksum;
-(int)statusValue;
-(NSNumber *)isInfiniteDuration;
-(id)toDictionary;
-(SOJUHeader *)header;
-(NSNumber *)mediaType;
-(NSNumber *)seqNum;
-(NSNumber *)displayTime;
@end
