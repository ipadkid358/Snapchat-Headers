/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUAuthOauth2AppAccessToken.h>
@class NSString, NSArray, NSNumber;


@protocol SOJUAuthOauth2AppAccessToken <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * value; 
@property (nonatomic,copy,readonly) NSArray * scopes; 
@property (nonatomic,copy,readonly) NSNumber * expiresAtSeconds; 
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSNumber * clientExpiresAtSeconds; 
@property (nonatomic,copy,readonly) NSNumber * clientPrefetchAtSeconds; 
@property (nonatomic,copy,readonly) NSNumber * clientFetchedAtSeconds; 
@required
-(NSNumber *)expiresAtSeconds;
-(NSNumber *)clientExpiresAtSeconds;
-(NSNumber *)clientPrefetchAtSeconds;
-(NSNumber *)clientFetchedAtSeconds;
-(NSString *)value;
-(NSArray *)scopes;
-(NSString *)userId;

@end


@class NSString, NSArray, NSNumber;

@interface SOJUAuthOauth2AppAccessToken : NSObject <SOJUAuthOauth2AppAccessToken> {

	NSString* _value;
	NSArray* _scopes;
	NSNumber* _expiresAtSeconds;
	NSString* _userId;
	NSNumber* _clientExpiresAtSeconds;
	NSNumber* _clientPrefetchAtSeconds;
	NSNumber* _clientFetchedAtSeconds;

}

@property (nonatomic,copy,readonly) NSString * value;                                //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scopes;                                //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * expiresAtSeconds;                     //@synthesize expiresAtSeconds=_expiresAtSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                               //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * clientExpiresAtSeconds;               //@synthesize clientExpiresAtSeconds=_clientExpiresAtSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * clientPrefetchAtSeconds;              //@synthesize clientPrefetchAtSeconds=_clientPrefetchAtSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * clientFetchedAtSeconds;               //@synthesize clientFetchedAtSeconds=_clientFetchedAtSeconds - In the implementation block
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
-(long long)expiresAtSecondsValue;
-(long long)clientExpiresAtSecondsValue;
-(long long)clientPrefetchAtSecondsValue;
-(long long)clientFetchedAtSecondsValue;
-(NSNumber *)expiresAtSeconds;
-(NSNumber *)clientExpiresAtSeconds;
-(NSNumber *)clientPrefetchAtSeconds;
-(NSNumber *)clientFetchedAtSeconds;
-(id)initWithValue:(id)arg1 scopes:(id)arg2 expiresAtSeconds:(id)arg3 userId:(id)arg4 clientExpiresAtSeconds:(id)arg5 clientPrefetchAtSeconds:(id)arg6 clientFetchedAtSeconds:(id)arg7 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)scopes;
-(NSString *)userId;
-(id)toDictionary;
@end

