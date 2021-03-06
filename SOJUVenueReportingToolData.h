/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUVenueReportingToolData.h>
@class NSString, NSArray, NSNumber;


@protocol SOJUVenueReportingToolData <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * selectedVenueId; 
@property (nonatomic,copy,readonly) NSArray * venueFilters; 
@property (nonatomic,copy,readonly) NSNumber * snapLat; 
@property (nonatomic,copy,readonly) NSNumber * snapLon; 
@required
-(NSString *)selectedVenueId;
-(NSArray *)venueFilters;
-(NSNumber *)snapLat;
-(NSNumber *)snapLon;

@end


@class NSString, NSArray, NSNumber;

@interface SOJUVenueReportingToolData : NSObject <SOJUVenueReportingToolData> {

	NSString* _selectedVenueId;
	NSArray* _venueFilters;
	NSNumber* _snapLat;
	NSNumber* _snapLon;

}

@property (nonatomic,copy,readonly) NSString * selectedVenueId;              //@synthesize selectedVenueId=_selectedVenueId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * venueFilters;                  //@synthesize venueFilters=_venueFilters - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * snapLat;                      //@synthesize snapLat=_snapLat - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * snapLon;                      //@synthesize snapLon=_snapLon - In the implementation block
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
-(NSString *)selectedVenueId;
-(NSArray *)venueFilters;
-(double)snapLatValue;
-(double)snapLonValue;
-(NSNumber *)snapLat;
-(NSNumber *)snapLon;
-(id)initWithSelectedVenueId:(id)arg1 venueFilters:(id)arg2 snapLat:(id)arg3 snapLon:(id)arg4 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end

