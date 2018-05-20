/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUSubscriptionSubscribedEntity.h>
@class NSString, NSNumber;


@protocol SOJUSubscriptionSubscribedEntity <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * entityId; 
@property (nonatomic,copy,readonly) NSString * entityType; 
@property (nonatomic,copy,readonly) NSNumber * lastUpdatedTimestamp; 
@required
-(NSNumber *)lastUpdatedTimestamp;
-(NSString *)entityType;
-(NSString *)entityId;

@end


@class NSString, NSNumber;

@interface SOJUSubscriptionSubscribedEntity : NSObject <SOJUSubscriptionSubscribedEntity> {

	NSString* _entityId;
	NSString* _entityType;
	NSNumber* _lastUpdatedTimestamp;

}

@property (nonatomic,copy,readonly) NSString * entityId;                          //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityType;                        //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastUpdatedTimestamp;              //@synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp - In the implementation block
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
-(long long)entityTypeEnum;
-(long long)lastUpdatedTimestampValue;
-(NSNumber *)lastUpdatedTimestamp;
-(id)initWithEntityId:(id)arg1 entityType:(id)arg2 lastUpdatedTimestamp:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSString *)entityType;
-(NSString *)entityId;
@end

