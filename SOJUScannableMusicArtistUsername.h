/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUScannableMusicArtistUsername.h>
@class NSString, NSNumber;


@protocol SOJUScannableMusicArtistUsername <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * aName; 
@property (nonatomic,copy,readonly) NSString * uName; 
@property (nonatomic,copy,readonly) NSString * uId; 
@property (nonatomic,copy,readonly) NSString * emoji; 
@property (nonatomic,copy,readonly) NSNumber * disabled; 
@required
-(NSString *)aName;
-(NSString *)uName;
-(NSString *)uId;
-(NSString *)emoji;
-(NSNumber *)disabled;

@end


@class NSString, NSNumber;

@interface SOJUScannableMusicArtistUsername : NSObject <SOJUScannableMusicArtistUsername> {

	NSString* _aName;
	NSString* _uName;
	NSString* _uId;
	NSString* _emoji;
	NSNumber* _disabled;

}

@property (nonatomic,copy,readonly) NSString * aName;                 //@synthesize aName=_aName - In the implementation block
@property (nonatomic,copy,readonly) NSString * uName;                 //@synthesize uName=_uName - In the implementation block
@property (nonatomic,copy,readonly) NSString * uId;                   //@synthesize uId=_uId - In the implementation block
@property (nonatomic,copy,readonly) NSString * emoji;                 //@synthesize emoji=_emoji - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * disabled;              //@synthesize disabled=_disabled - In the implementation block
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
-(BOOL)disabledValue;
-(NSString *)aName;
-(NSString *)uName;
-(NSString *)uId;
-(id)initWithAName:(id)arg1 uName:(id)arg2 uId:(id)arg3 emoji:(id)arg4 disabled:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)emoji;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)disabled;
-(id)toDictionary;
@end

