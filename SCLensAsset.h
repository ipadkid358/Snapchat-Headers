/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLensAsset.h>
@class NSString, NSURL, NSData;


@protocol SCLensAsset <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * signature; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long requestTiming; 
@property (nonatomic,readonly) long long scale; 
@property (nonatomic,readonly) long long preloadLimit; 
@property (nonatomic,copy,readonly) NSString * originalFilename; 
@property (nonatomic,copy,readonly) NSString * encodedBitmoji; 
@property (nonatomic,copy,readonly) NSString * avatarId; 
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSData * encryptionKey; 
@property (nonatomic,copy,readonly) NSData * encryptionIv; 
@required
-(NSString *)avatarId;
-(NSData *)encryptionIv;
-(long long)requestTiming;
-(long long)preloadLimit;
-(NSString *)encodedBitmoji;
-(NSString *)identifier;
-(NSURL *)url;
-(long long)type;
-(long long)scale;
-(NSString *)originalFilename;
-(NSString *)userId;
-(NSData *)encryptionKey;
-(NSString *)signature;

@end


@class NSString, NSURL, NSData;

@interface SCLensAsset : NSObject <SCLensAsset> {

	NSString* _identifier;
	NSURL* _url;
	NSString* _signature;
	long long _type;
	long long _requestTiming;
	long long _scale;
	long long _preloadLimit;
	NSString* _originalFilename;
	NSString* _encodedBitmoji;
	NSString* _avatarId;
	NSString* _userId;
	NSData* _encryptionKey;
	NSData* _encryptionIv;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * signature;                     //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long requestTiming;                       //@synthesize requestTiming=_requestTiming - In the implementation block
@property (nonatomic,readonly) long long scale;                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) long long preloadLimit;                        //@synthesize preloadLimit=_preloadLimit - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalFilename;              //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy,readonly) NSString * encodedBitmoji;                //@synthesize encodedBitmoji=_encodedBitmoji - In the implementation block
@property (nonatomic,copy,readonly) NSString * avatarId;                      //@synthesize avatarId=_avatarId - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                        //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSData * encryptionKey;                   //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,copy,readonly) NSData * encryptionIv;                    //@synthesize encryptionIv=_encryptionIv - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)avatarId;
-(NSData *)encryptionIv;
-(long long)requestTiming;
-(long long)preloadLimit;
-(NSString *)encodedBitmoji;
-(id)initWithIdentifier:(id)arg1 url:(id)arg2 signature:(id)arg3 type:(long long)arg4 requestTiming:(long long)arg5 scale:(long long)arg6 preloadLimit:(long long)arg7 originalFilename:(id)arg8 encodedBitmoji:(id)arg9 avatarId:(id)arg10 userId:(id)arg11 encryptionKey:(id)arg12 encryptionIv:(id)arg13 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(NSURL *)url;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)scale;
-(NSString *)originalFilename;
-(NSString *)userId;
-(NSData *)encryptionKey;
-(NSString *)signature;
@end

