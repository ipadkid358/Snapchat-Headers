/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUIdentityMischiefParticipant.h>
@class NSString, NSNumber;


@protocol SOJUIdentityMischiefParticipant <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * display; 
@property (nonatomic,copy,readonly) NSString * color; 
@property (nonatomic,copy,readonly) NSNumber * joinTimestamp; 
@property (nonatomic,copy,readonly) NSNumber * videoChatUserId; 
@property (nonatomic,copy,readonly) NSNumber * mischiefVersion; 
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId; 
@property (nonatomic,copy,readonly) NSString * bitmojiSelfieId; 
@property (nonatomic,copy,readonly) NSString * bitmojiSnapcodeSelfieId; 
@property (nonatomic,copy,readonly) NSString * colorHex; 
@required
-(NSString *)bitmojiAvatarId;
-(NSString *)bitmojiSelfieId;
-(NSNumber *)mischiefVersion;
-(NSString *)bitmojiSnapcodeSelfieId;
-(NSNumber *)joinTimestamp;
-(NSNumber *)videoChatUserId;
-(NSString *)colorHex;
-(NSString *)display;
-(NSString *)color;
-(NSString *)userId;
-(NSString *)username;

@end


@class NSString, NSNumber;

@interface SOJUIdentityMischiefParticipant : NSObject <SOJUIdentityMischiefParticipant> {

	NSString* _userId;
	NSString* _username;
	NSString* _display;
	NSString* _color;
	NSNumber* _joinTimestamp;
	NSNumber* _videoChatUserId;
	NSNumber* _mischiefVersion;
	NSString* _bitmojiAvatarId;
	NSString* _bitmojiSelfieId;
	NSString* _bitmojiSnapcodeSelfieId;
	NSString* _colorHex;

}

@property (nonatomic,copy,readonly) NSString * userId;                               //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * display;                              //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) NSString * color;                                //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * joinTimestamp;                        //@synthesize joinTimestamp=_joinTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * videoChatUserId;                      //@synthesize videoChatUserId=_videoChatUserId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mischiefVersion;                      //@synthesize mischiefVersion=_mischiefVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId;                      //@synthesize bitmojiAvatarId=_bitmojiAvatarId - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiSelfieId;                      //@synthesize bitmojiSelfieId=_bitmojiSelfieId - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiSnapcodeSelfieId;              //@synthesize bitmojiSnapcodeSelfieId=_bitmojiSnapcodeSelfieId - In the implementation block
@property (nonatomic,copy,readonly) NSString * colorHex;                             //@synthesize colorHex=_colorHex - In the implementation block
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
-(NSString *)bitmojiAvatarId;
-(NSString *)bitmojiSelfieId;
-(id)toJson;
-(long long)mischiefVersionValue;
-(NSNumber *)mischiefVersion;
-(NSString *)bitmojiSnapcodeSelfieId;
-(long long)joinTimestampValue;
-(long long)videoChatUserIdValue;
-(NSNumber *)joinTimestamp;
-(NSNumber *)videoChatUserId;
-(NSString *)colorHex;
-(id)initWithUserId:(id)arg1 username:(id)arg2 display:(id)arg3 color:(id)arg4 joinTimestamp:(id)arg5 videoChatUserId:(id)arg6 mischiefVersion:(id)arg7 bitmojiAvatarId:(id)arg8 bitmojiSelfieId:(id)arg9 bitmojiSnapcodeSelfieId:(id)arg10 colorHex:(id)arg11 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)display;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)color;
-(NSString *)userId;
-(id)toDictionary;
-(NSString *)username;
@end

