/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUHereAuth.h>
@class NSString, NSNumber;


@protocol SOJUHereAuth <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * scopeId; 
@property (nonatomic,copy,readonly) NSNumber * userId; 
@property (nonatomic,copy,readonly) NSString * salt; 
@property (nonatomic,copy,readonly) NSNumber * expires; 
@property (nonatomic,copy,readonly) NSString * signature; 
@property (nonatomic,copy,readonly) NSString * chatToken; 
@property (nonatomic,copy,readonly) NSString * mac; 
@required
-(NSString *)scopeId;
-(NSString *)chatToken;
-(NSNumber *)userId;
-(NSString *)signature;
-(NSString *)salt;
-(NSString *)mac;
-(NSNumber *)expires;

@end


@class NSString, NSNumber;

@interface SOJUHereAuth : NSObject <SOJUHereAuth> {

	NSString* _scopeId;
	NSNumber* _userId;
	NSString* _salt;
	NSNumber* _expires;
	NSString* _signature;
	NSString* _chatToken;
	NSString* _mac;

}

@property (nonatomic,copy,readonly) NSString * scopeId;                //@synthesize scopeId=_scopeId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * userId;                 //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * salt;                   //@synthesize salt=_salt - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * expires;                //@synthesize expires=_expires - In the implementation block
@property (nonatomic,copy,readonly) NSString * signature;              //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy,readonly) NSString * chatToken;              //@synthesize chatToken=_chatToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * mac;                    //@synthesize mac=_mac - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(NSString *)scopeId;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(long long)userIdValue;
-(long long)expiresValue;
-(NSString *)chatToken;
-(id)initWithScopeId:(id)arg1 userId:(id)arg2 salt:(id)arg3 expires:(id)arg4 signature:(id)arg5 chatToken:(id)arg6 mac:(id)arg7 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)userId;
-(id)toDictionary;
-(NSString *)signature;
-(NSString *)salt;
-(NSString *)mac;
-(NSNumber *)expires;
@end

