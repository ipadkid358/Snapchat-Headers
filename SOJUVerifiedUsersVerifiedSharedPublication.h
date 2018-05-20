/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUVerifiedUsersVerifiedSharedPublication.h>
@class NSString;


@protocol SOJUVerifiedUsersVerifiedSharedPublication <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSString * verifiedUserInfoId; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId; 
@property (nonatomic,copy,readonly) NSString * bitmojiSelfieId; 
@property (nonatomic,copy,readonly) NSString * bitmojiSnapcodeSelfieId; 
@required
-(NSString *)bitmojiAvatarId;
-(NSString *)bitmojiSelfieId;
-(NSString *)bitmojiSnapcodeSelfieId;
-(NSString *)verifiedUserInfoId;
-(NSString *)displayName;
-(NSString *)userId;
-(NSString *)username;

@end


@class NSString;

@interface SOJUVerifiedUsersVerifiedSharedPublication : NSObject <SOJUVerifiedUsersVerifiedSharedPublication> {

	NSString* _username;
	NSString* _userId;
	NSString* _verifiedUserInfoId;
	NSString* _displayName;
	NSString* _bitmojiAvatarId;
	NSString* _bitmojiSelfieId;
	NSString* _bitmojiSnapcodeSelfieId;

}

@property (nonatomic,copy,readonly) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                               //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * verifiedUserInfoId;                   //@synthesize verifiedUserInfoId=_verifiedUserInfoId - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId;                      //@synthesize bitmojiAvatarId=_bitmojiAvatarId - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiSelfieId;                      //@synthesize bitmojiSelfieId=_bitmojiSelfieId - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiSnapcodeSelfieId;              //@synthesize bitmojiSnapcodeSelfieId=_bitmojiSnapcodeSelfieId - In the implementation block
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
-(NSString *)bitmojiSnapcodeSelfieId;
-(NSString *)verifiedUserInfoId;
-(id)initWithUsername:(id)arg1 userId:(id)arg2 verifiedUserInfoId:(id)arg3 displayName:(id)arg4 bitmojiAvatarId:(id)arg5 bitmojiSelfieId:(id)arg6 bitmojiSnapcodeSelfieId:(id)arg7 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)userId;
-(id)toDictionary;
-(NSString *)username;
@end

