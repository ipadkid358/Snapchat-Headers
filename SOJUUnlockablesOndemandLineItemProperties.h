/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandLineItemProperties.h>
@class NSString;


@protocol SOJUUnlockablesOndemandLineItemProperties <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * usageType; 
@property (nonatomic,copy,readonly) NSString * purchaserTimezone; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * sponsoredBrandName; 
@property (nonatomic,copy,readonly) NSString * geoStoryName; 
@required
-(NSString *)purchaserTimezone;
-(NSString *)sponsoredBrandName;
-(NSString *)geoStoryName;
-(NSString *)displayName;
-(NSString *)usageType;

@end


@class NSString;

@interface SOJUUnlockablesOndemandLineItemProperties : NSObject <SOJUUnlockablesOndemandLineItemProperties> {

	NSString* _usageType;
	NSString* _purchaserTimezone;
	NSString* _displayName;
	NSString* _sponsoredBrandName;
	NSString* _geoStoryName;

}

@property (nonatomic,copy,readonly) NSString * usageType;                       //@synthesize usageType=_usageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * purchaserTimezone;               //@synthesize purchaserTimezone=_purchaserTimezone - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sponsoredBrandName;              //@synthesize sponsoredBrandName=_sponsoredBrandName - In the implementation block
@property (nonatomic,copy,readonly) NSString * geoStoryName;                    //@synthesize geoStoryName=_geoStoryName - In the implementation block
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
-(long long)usageTypeEnum;
-(NSString *)purchaserTimezone;
-(NSString *)sponsoredBrandName;
-(NSString *)geoStoryName;
-(id)initWithUsageType:(id)arg1 purchaserTimezone:(id)arg2 displayName:(id)arg3 sponsoredBrandName:(id)arg4 geoStoryName:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)usageType;
-(id)toDictionary;
@end

