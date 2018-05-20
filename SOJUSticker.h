/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUSticker.h>
@class NSString, NSArray, NSNumber, NSData;


@protocol SOJUSticker <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * packId; 
@property (nonatomic,copy,readonly) NSString * stickerId; 
@property (nonatomic,copy,readonly) NSString * stickerType; 
@property (nonatomic,copy,readonly) NSArray * capabilities; 
@property (nonatomic,copy,readonly) NSNumber * creationTime; 
@property (nonatomic,copy,readonly) NSString * encKey; 
@property (nonatomic,copy,readonly) NSString * encIv; 
@property (nonatomic,copy,readonly) NSNumber * lastUsedTime; 
@property (nonatomic,copy,readonly) NSString * facecutOriginSnapId; 
@property (nonatomic,copy,readonly) NSString * customStickerType; 
@property (nonatomic,copy,readonly) NSNumber * isAnimated; 
@property (nonatomic,copy,readonly) NSString * externalSrcUrl; 
@property (nonatomic,copy,readonly) NSData * stickerImageData; 
@required
-(NSString *)stickerId;
-(NSString *)packId;
-(NSString *)stickerType;
-(NSString *)externalSrcUrl;
-(NSString *)encKey;
-(NSString *)encIv;
-(NSString *)facecutOriginSnapId;
-(NSString *)customStickerType;
-(NSData *)stickerImageData;
-(NSNumber *)isAnimated;
-(NSNumber *)creationTime;
-(NSNumber *)lastUsedTime;
-(NSArray *)capabilities;

@end


@class NSString, NSArray, NSNumber, NSData;

@interface SOJUSticker : NSObject <SOJUSticker> {

	NSString* _packId;
	NSString* _stickerId;
	NSString* _stickerType;
	NSArray* _capabilities;
	NSNumber* _creationTime;
	NSString* _encKey;
	NSString* _encIv;
	NSNumber* _lastUsedTime;
	NSString* _facecutOriginSnapId;
	NSString* _customStickerType;
	NSNumber* _isAnimated;
	NSString* _externalSrcUrl;
	NSData* _stickerImageData;

}

@property (nonatomic,copy,readonly) NSString * packId;                           //@synthesize packId=_packId - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerId;                        //@synthesize stickerId=_stickerId - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerType;                      //@synthesize stickerType=_stickerType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * capabilities;                      //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * creationTime;                     //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * encKey;                           //@synthesize encKey=_encKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * encIv;                            //@synthesize encIv=_encIv - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastUsedTime;                     //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * facecutOriginSnapId;              //@synthesize facecutOriginSnapId=_facecutOriginSnapId - In the implementation block
@property (nonatomic,copy,readonly) NSString * customStickerType;                //@synthesize customStickerType=_customStickerType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isAnimated;                       //@synthesize isAnimated=_isAnimated - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalSrcUrl;                   //@synthesize externalSrcUrl=_externalSrcUrl - In the implementation block
@property (nonatomic,copy,readonly) NSData * stickerImageData;                   //@synthesize stickerImageData=_stickerImageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
+(id)stickerIdFromStickerWithoutGeoStickerId:(id)arg1 ;
+(id)packIdFromStickerMessageWithoutGeoPackId:(id)arg1 ;
+(id)stickerIdFullFromStickerWithoutGeoStickerId:(id)arg1 ;
+(id)packIdFromSticker:(id)arg1 orMetricsEventInfo:(id)arg2 ;
+(id)stickerIdFromSticker:(id)arg1 ;
+(id)stickerFromBitmoji:(id)arg1 packId:(id)arg2 avatarId:(id)arg3 friendAvatarId:(id)arg4 ;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(long long)lastUsedTimeValue;
-(NSString *)stickerId;
-(long long)stickerTypeEnum;
-(NSString *)packId;
-(NSString *)stickerType;
-(BOOL)isAnimatedValue;
-(NSString *)externalSrcUrl;
-(long long)creationTimeValue;
-(long long)customStickerTypeEnum;
-(NSString *)encKey;
-(NSString *)encIv;
-(NSString *)facecutOriginSnapId;
-(NSString *)customStickerType;
-(NSData *)stickerImageData;
-(id)initWithPackId:(id)arg1 stickerId:(id)arg2 stickerType:(id)arg3 capabilities:(id)arg4 creationTime:(id)arg5 encKey:(id)arg6 encIv:(id)arg7 lastUsedTime:(id)arg8 facecutOriginSnapId:(id)arg9 customStickerType:(id)arg10 isAnimated:(id)arg11 externalSrcUrl:(id)arg12 stickerImageData:(id)arg13 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(BOOL)isFriends;
-(BOOL)isBitmoji;
-(id)initWithProtoBuf:(id)arg1 ;
-(BOOL)hasSenderAvatarChanged:(id)arg1 ;
-(BOOL)isGeo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)isAnimated;
-(id)initWithResponse:(id)arg1 ;
-(NSNumber *)creationTime;
-(id)toDictionary;
-(NSNumber *)lastUsedTime;
-(NSArray *)capabilities;
@end

