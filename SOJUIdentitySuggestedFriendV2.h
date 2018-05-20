/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUIdentitySuggestedFriendV2.h>
@class NSString;


@protocol SOJUIdentitySuggestedFriendV2 <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * storyPrivacy; 
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId; 
@property (nonatomic,copy,readonly) NSString * metadata; 
@property (nonatomic,copy,readonly) NSString * bitmojiSelfieId; 
@property (nonatomic,copy,readonly) NSString * bitmojiSnapcodeSelfieId; 
@required
-(NSString *)bitmojiAvatarId;
-(NSString *)bitmojiSelfieId;
-(NSString *)storyPrivacy;
-(NSString *)bitmojiSnapcodeSelfieId;
-(NSString *)displayName;
-(NSString *)metadata;
-(NSString *)userId;
-(NSString *)username;

@end


@class NSString;

@interface SOJUIdentitySuggestedFriendV2 : NSObject <SOJUIdentitySuggestedFriendV2> {

	NSString* _userId;
	NSString* _username;
	NSString* _displayName;
	NSString* _storyPrivacy;
	NSString* _bitmojiAvatarId;
	NSString* _metadata;
	NSString* _bitmojiSelfieId;
	NSString* _bitmojiSnapcodeSelfieId;

}

@property (nonatomic,copy,readonly) NSString * userId;                               //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyPrivacy;                         //@synthesize storyPrivacy=_storyPrivacy - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId;                      //@synthesize bitmojiAvatarId=_bitmojiAvatarId - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadata;                             //@synthesize metadata=_metadata - In the implementation block
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
-(long long)storyPrivacyEnum;
-(NSString *)storyPrivacy;
-(NSString *)bitmojiSnapcodeSelfieId;
-(id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 storyPrivacy:(id)arg4 bitmojiAvatarId:(id)arg5 metadata:(id)arg6 bitmojiSelfieId:(id)arg7 bitmojiSnapcodeSelfieId:(id)arg8 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)metadata;
-(NSString *)userId;
-(id)toDictionary;
-(NSString *)username;
@end

