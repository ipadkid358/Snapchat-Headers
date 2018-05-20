/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SOJUHeader, NSNumber, NSDictionary, NSString, SOJUHereAuth;

@interface SOJUPresenceMessageBuilder : NSObject {

	SOJUHeader* _header;
	NSNumber* _retried;
	NSDictionary* _knownChatSequenceNumbers;
	NSNumber* _mischiefVersion;
	NSNumber* _seqNum;
	NSNumber* _timestamp;
	NSString* _type;
	NSString* _idValue;
	NSString* _appEngineTarget;
	NSDictionary* _presences;
	NSNumber* _supportsHere;
	NSNumber* _receivingVideo;
	SOJUHereAuth* _hereAuth;
	NSDictionary* _extendedPresences;
	NSDictionary* _presencesMetadata;

}
+(id)withJUPresenceMessage:(id)arg1 ;
-(id)setIdValue:(id)arg1 ;
-(id)setRetriedValue:(BOOL)arg1 ;
-(id)setMischiefVersionValue:(long long)arg1 ;
-(id)setSeqNumValue:(long long)arg1 ;
-(id)setTimestampValue:(long long)arg1 ;
-(id)setTypeEnum:(long long)arg1 ;
-(id)setRetried:(id)arg1 ;
-(id)setKnownChatSequenceNumbers:(id)arg1 ;
-(id)setMischiefVersion:(id)arg1 ;
-(id)setAppEngineTarget:(id)arg1 ;
-(id)setSupportsHereValue:(BOOL)arg1 ;
-(id)setReceivingVideoValue:(BOOL)arg1 ;
-(id)setPresences:(id)arg1 ;
-(id)setSupportsHere:(id)arg1 ;
-(id)setReceivingVideo:(id)arg1 ;
-(id)setHereAuth:(id)arg1 ;
-(id)setExtendedPresences:(id)arg1 ;
-(id)setPresencesMetadata:(id)arg1 ;
-(id)setType:(id)arg1 ;
-(id)setTimestamp:(id)arg1 ;
-(id)build;
-(id)setSeqNum:(id)arg1 ;
-(id)setHeader:(id)arg1 ;
@end

