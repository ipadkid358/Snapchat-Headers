/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesArSegmentationFilter.h>
@class SOJUContextFilterSkyItem, SOJUPurikuraPatternItem;


@protocol SOJUUnlockablesArSegmentationFilter <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SOJUContextFilterSkyItem * sky; 
@property (nonatomic,copy,readonly) SOJUPurikuraPatternItem * portrait; 
@required
-(SOJUContextFilterSkyItem *)sky;
-(SOJUPurikuraPatternItem *)portrait;

@end


@class SOJUContextFilterSkyItem, SOJUPurikuraPatternItem, NSString;

@interface SOJUUnlockablesArSegmentationFilter : NSObject <SOJUUnlockablesArSegmentationFilter> {

	SOJUContextFilterSkyItem* _sky;
	SOJUPurikuraPatternItem* _portrait;

}

@property (nonatomic,copy,readonly) SOJUContextFilterSkyItem * sky;                  //@synthesize sky=_sky - In the implementation block
@property (nonatomic,copy,readonly) SOJUPurikuraPatternItem * portrait;              //@synthesize portrait=_portrait - In the implementation block
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
-(SOJUContextFilterSkyItem *)sky;
-(SOJUPurikuraPatternItem *)portrait;
-(id)initWithSky:(id)arg1 portrait:(id)arg2 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end

