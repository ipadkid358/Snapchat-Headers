/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGeoGeoLocation.h>
@class NSNumber;


@protocol SOJUGeoGeoLocation <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSNumber * timestamp; 
@property (nonatomic,copy,readonly) NSNumber * lat; 
@property (nonatomic,copy,readonly) NSNumber * lon; 
@property (nonatomic,copy,readonly) NSNumber * altitude; 
@property (nonatomic,copy,readonly) NSNumber * horizontalAccuracy; 
@property (nonatomic,copy,readonly) NSNumber * speed; 
@required
-(NSNumber *)timestamp;
-(NSNumber *)speed;
-(NSNumber *)altitude;
-(NSNumber *)lat;
-(NSNumber *)lon;
-(NSNumber *)horizontalAccuracy;

@end


@class NSNumber, NSString;

@interface SOJUGeoGeoLocation : NSObject <SOJUGeoGeoLocation> {

	NSNumber* _timestamp;
	NSNumber* _lat;
	NSNumber* _lon;
	NSNumber* _altitude;
	NSNumber* _horizontalAccuracy;
	NSNumber* _speed;

}

@property (nonatomic,copy,readonly) NSNumber * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lat;                             //@synthesize lat=_lat - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lon;                             //@synthesize lon=_lon - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * speed;                           //@synthesize speed=_speed - In the implementation block
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
-(double)latValue;
-(double)timestampValue;
-(double)altitudeValue;
-(double)speedValue;
-(double)lonValue;
-(double)horizontalAccuracyValue;
-(id)initWithTimestamp:(id)arg1 lat:(id)arg2 lon:(id)arg3 altitude:(id)arg4 horizontalAccuracy:(id)arg5 speed:(id)arg6 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)speed;
-(NSNumber *)altitude;
-(NSNumber *)lat;
-(NSNumber *)lon;
-(id)toDictionary;
-(NSNumber *)horizontalAccuracy;
@end
