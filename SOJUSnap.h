/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUSnap.h>
@class NSString, NSNumber, SOJUSnapMetadata, NSArray;


@protocol SOJUSnap <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSNumber * st; 
@property (nonatomic,copy,readonly) NSNumber * m; 
@property (nonatomic,copy,readonly) NSNumber * ts; 
@property (nonatomic,copy,readonly) NSNumber * sts; 
@property (nonatomic,copy,readonly) NSNumber * zipped; 
@property (nonatomic,copy,readonly) NSNumber * pts; 
@property (nonatomic,copy,readonly) NSNumber * orientation; 
@property (nonatomic,copy,readonly) SOJUSnapMetadata * snapMetadata; 
@property (nonatomic,copy,readonly) NSNumber * sendStartTimestamp; 
@property (nonatomic,copy,readonly) NSArray * replyMedias; 
@property (nonatomic,copy,readonly) NSNumber * seqNum; 
@required
-(NSString *)idValue;
-(NSNumber *)sendStartTimestamp;
-(NSNumber *)ts;
-(NSNumber *)sts;
-(NSNumber *)zipped;
-(SOJUSnapMetadata *)snapMetadata;
-(NSArray *)replyMedias;
-(NSNumber *)orientation;
-(NSNumber *)pts;
-(NSNumber *)seqNum;
-(NSNumber *)st;
-(NSNumber *)m;

@end


@class NSString, NSNumber, SOJUSnapMetadata, NSArray;

@interface SOJUSnap : NSObject <SOJUSnap> {

	NSString* _idValue;
	NSNumber* _st;
	NSNumber* _m;
	NSNumber* _ts;
	NSNumber* _sts;
	NSNumber* _zipped;
	NSNumber* _pts;
	NSNumber* _orientation;
	SOJUSnapMetadata* _snapMetadata;
	NSNumber* _sendStartTimestamp;
	NSArray* _replyMedias;
	NSNumber* _seqNum;

}

@property (nonatomic,copy,readonly) NSString * idValue;                           //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * st;                                //@synthesize st=_st - In the implementation block
@property (m,nonatomic,copy,readonly) NSNumber * m;                               //@synthesize m=_m - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ts;                                //@synthesize ts=_ts - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sts;                               //@synthesize sts=_sts - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * zipped;                            //@synthesize zipped=_zipped - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * pts;                               //@synthesize pts=_pts - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * orientation;                       //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,copy,readonly) SOJUSnapMetadata * snapMetadata;              //@synthesize snapMetadata=_snapMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sendStartTimestamp;                //@synthesize sendStartTimestamp=_sendStartTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSArray * replyMedias;                        //@synthesize replyMedias=_replyMedias - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * seqNum;                            //@synthesize seqNum=_seqNum - In the implementation block
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
-(NSString *)idValue;
-(int)orientationValue;
-(long long)seqNumValue;
-(long long)sendStartTimestampValue;
-(NSNumber *)sendStartTimestamp;
-(long long)tsValue;
-(NSNumber *)ts;
-(long long)orientationEnum;
-(int)stValue;
-(int)mValue;
-(long long)stsValue;
-(BOOL)zippedValue;
-(long long)ptsValue;
-(NSNumber *)sts;
-(NSNumber *)zipped;
-(SOJUSnapMetadata *)snapMetadata;
-(NSArray *)replyMedias;
-(id)initWithIdValue:(id)arg1 st:(id)arg2 m:(id)arg3 ts:(id)arg4 sts:(id)arg5 zipped:(id)arg6 pts:(id)arg7 orientation:(id)arg8 snapMetadata:(id)arg9 sendStartTimestamp:(id)arg10 replyMedias:(id)arg11 seqNum:(id)arg12 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)pts;
-(id)toDictionary;
-(NSNumber *)seqNum;
-(NSNumber *)st;
-(NSNumber *)m;
@end

