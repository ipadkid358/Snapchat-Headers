/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJULensCategoryDatum.h>
@class NSString, NSArray, NSNumber;


@protocol SOJULensCategoryDatum <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * activator; 
@property (nonatomic,copy,readonly) NSString * config; 
@property (nonatomic,copy,readonly) NSString * configChecksum; 
@property (nonatomic,copy,readonly) NSArray * additionalCarouselCategories; 
@property (nonatomic,copy,readonly) NSNumber * additionalCarouselLensesLimitDeprecated; 
@required
-(NSString *)idValue;
-(NSString *)activator;
-(NSString *)configChecksum;
-(NSArray *)additionalCarouselCategories;
-(NSNumber *)additionalCarouselLensesLimitDeprecated;
-(NSString *)name;
-(NSString *)config;

@end


@class NSString, NSArray, NSNumber;

@interface SOJULensCategoryDatum : NSObject <SOJULensCategoryDatum> {

	NSString* _idValue;
	NSString* _name;
	NSString* _activator;
	NSString* _config;
	NSString* _configChecksum;
	NSArray* _additionalCarouselCategories;
	NSNumber* _additionalCarouselLensesLimitDeprecated;

}

@property (nonatomic,copy,readonly) NSString * idValue;                                              //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * activator;                                            //@synthesize activator=_activator - In the implementation block
@property (nonatomic,copy,readonly) NSString * config;                                               //@synthesize config=_config - In the implementation block
@property (nonatomic,copy,readonly) NSString * configChecksum;                                       //@synthesize configChecksum=_configChecksum - In the implementation block
@property (nonatomic,copy,readonly) NSArray * additionalCarouselCategories;                          //@synthesize additionalCarouselCategories=_additionalCarouselCategories - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * additionalCarouselLensesLimitDeprecated;              //@synthesize additionalCarouselLensesLimitDeprecated=_additionalCarouselLensesLimitDeprecated - In the implementation block
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
-(NSString *)idValue;
-(int)additionalCarouselLensesLimitDeprecatedValue;
-(NSString *)activator;
-(NSString *)configChecksum;
-(NSArray *)additionalCarouselCategories;
-(NSNumber *)additionalCarouselLensesLimitDeprecated;
-(id)initWithIdValue:(id)arg1 name:(id)arg2 activator:(id)arg3 config:(id)arg4 configChecksum:(id)arg5 additionalCarouselCategories:(id)arg6 additionalCarouselLensesLimitDeprecated:(id)arg7 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)config;
-(id)toDictionary;
@end

