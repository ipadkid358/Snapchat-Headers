/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUBroadcastMobsModelGeofencedMobStoryExtraData.h>
@class SOJUBroadcastMobsModelLocation, NSNumber, NSString;


@protocol SOJUBroadcastMobsModelGeofencedMobStoryExtraData <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SOJUBroadcastMobsModelLocation * center; 
@property (nonatomic,copy,readonly) NSNumber * radius; 
@property (nonatomic,copy,readonly) NSString * privacyType; 
@required
-(NSString *)privacyType;
-(SOJUBroadcastMobsModelLocation *)center;
-(NSNumber *)radius;

@end


@class SOJUBroadcastMobsModelLocation, NSNumber, NSString;

@interface SOJUBroadcastMobsModelGeofencedMobStoryExtraData : NSObject <SOJUBroadcastMobsModelGeofencedMobStoryExtraData> {

	SOJUBroadcastMobsModelLocation* _center;
	NSNumber* _radius;
	NSString* _privacyType;

}

@property (nonatomic,copy,readonly) SOJUBroadcastMobsModelLocation * center;              //@synthesize center=_center - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * radius;                                    //@synthesize radius=_radius - In the implementation block
@property (nonatomic,copy,readonly) NSString * privacyType;                               //@synthesize privacyType=_privacyType - In the implementation block
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
-(long long)privacyTypeEnum;
-(NSString *)privacyType;
-(double)radiusValue;
-(id)initWithCenter:(id)arg1 radius:(id)arg2 privacyType:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(SOJUBroadcastMobsModelLocation *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)radius;
-(id)toDictionary;
@end

