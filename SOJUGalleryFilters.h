/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGalleryFilters.h>
@class NSArray, NSString, NSNumber, SOJUGalleryVenueFilter, SOJUGalleryStreakFilter, SOJUContextFilterMetadata;


@protocol SOJUGalleryFilters <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSArray * visualFilters; 
@property (nonatomic,copy,readonly) NSString * visualFilterSelectedType; 
@property (nonatomic,copy,readonly) NSArray * infoFilters; 
@property (nonatomic,copy,readonly) NSString * infoFilterSelectedType; 
@property (nonatomic,copy,readonly) NSArray * speedMotionFilters; 
@property (nonatomic,copy,readonly) NSString * speedMotionFilterSelectedType; 
@property (nonatomic,copy,readonly) NSNumber * reverseMotionFilterEnabled; 
@property (nonatomic,copy,readonly) NSNumber * reverseMotionFilterSelected; 
@property (nonatomic,copy,readonly) NSArray * geoFilters; 
@property (nonatomic,copy,readonly) NSString * geoFilterSelectedId; 
@property (nonatomic,copy,readonly) SOJUGalleryVenueFilter * venueFilter; 
@property (nonatomic,copy,readonly) NSNumber * venueFilterSelected; 
@property (nonatomic,copy,readonly) SOJUGalleryStreakFilter * streakFilter; 
@property (nonatomic,copy,readonly) NSNumber * streakFilterSelected; 
@property (nonatomic,copy,readonly) SOJUContextFilterMetadata * contextFilters; 
@property (nonatomic,copy,readonly) NSString * contextFilterSelectedId; 
@required
-(NSArray *)visualFilters;
-(NSString *)visualFilterSelectedType;
-(NSArray *)infoFilters;
-(NSString *)infoFilterSelectedType;
-(NSArray *)speedMotionFilters;
-(NSString *)speedMotionFilterSelectedType;
-(NSNumber *)reverseMotionFilterEnabled;
-(NSNumber *)reverseMotionFilterSelected;
-(NSArray *)geoFilters;
-(NSString *)geoFilterSelectedId;
-(SOJUGalleryVenueFilter *)venueFilter;
-(NSNumber *)venueFilterSelected;
-(SOJUGalleryStreakFilter *)streakFilter;
-(NSNumber *)streakFilterSelected;
-(SOJUContextFilterMetadata *)contextFilters;
-(NSString *)contextFilterSelectedId;

@end


@class NSArray, NSString, NSNumber, SOJUGalleryVenueFilter, SOJUGalleryStreakFilter, SOJUContextFilterMetadata;

@interface SOJUGalleryFilters : NSObject <SOJUGalleryFilters> {

	NSArray* _visualFilters;
	NSString* _visualFilterSelectedType;
	NSArray* _infoFilters;
	NSString* _infoFilterSelectedType;
	NSArray* _speedMotionFilters;
	NSString* _speedMotionFilterSelectedType;
	NSNumber* _reverseMotionFilterEnabled;
	NSNumber* _reverseMotionFilterSelected;
	NSArray* _geoFilters;
	NSString* _geoFilterSelectedId;
	SOJUGalleryVenueFilter* _venueFilter;
	NSNumber* _venueFilterSelected;
	SOJUGalleryStreakFilter* _streakFilter;
	NSNumber* _streakFilterSelected;
	SOJUContextFilterMetadata* _contextFilters;
	NSString* _contextFilterSelectedId;

}

@property (nonatomic,copy,readonly) NSArray * visualFilters;                                 //@synthesize visualFilters=_visualFilters - In the implementation block
@property (nonatomic,copy,readonly) NSString * visualFilterSelectedType;                     //@synthesize visualFilterSelectedType=_visualFilterSelectedType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * infoFilters;                                   //@synthesize infoFilters=_infoFilters - In the implementation block
@property (nonatomic,copy,readonly) NSString * infoFilterSelectedType;                       //@synthesize infoFilterSelectedType=_infoFilterSelectedType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * speedMotionFilters;                            //@synthesize speedMotionFilters=_speedMotionFilters - In the implementation block
@property (nonatomic,copy,readonly) NSString * speedMotionFilterSelectedType;                //@synthesize speedMotionFilterSelectedType=_speedMotionFilterSelectedType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * reverseMotionFilterEnabled;                   //@synthesize reverseMotionFilterEnabled=_reverseMotionFilterEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * reverseMotionFilterSelected;                  //@synthesize reverseMotionFilterSelected=_reverseMotionFilterSelected - In the implementation block
@property (nonatomic,copy,readonly) NSArray * geoFilters;                                    //@synthesize geoFilters=_geoFilters - In the implementation block
@property (nonatomic,copy,readonly) NSString * geoFilterSelectedId;                          //@synthesize geoFilterSelectedId=_geoFilterSelectedId - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryVenueFilter * venueFilter;                    //@synthesize venueFilter=_venueFilter - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * venueFilterSelected;                          //@synthesize venueFilterSelected=_venueFilterSelected - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryStreakFilter * streakFilter;                  //@synthesize streakFilter=_streakFilter - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * streakFilterSelected;                         //@synthesize streakFilterSelected=_streakFilterSelected - In the implementation block
@property (nonatomic,copy,readonly) SOJUContextFilterMetadata * contextFilters;              //@synthesize contextFilters=_contextFilters - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextFilterSelectedId;                      //@synthesize contextFilterSelectedId=_contextFilterSelectedId - In the implementation block
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
-(NSArray *)visualFilters;
-(long long)visualFilterSelectedTypeEnum;
-(long long)infoFilterSelectedTypeEnum;
-(long long)speedMotionFilterSelectedTypeEnum;
-(BOOL)reverseMotionFilterEnabledValue;
-(BOOL)reverseMotionFilterSelectedValue;
-(BOOL)venueFilterSelectedValue;
-(BOOL)streakFilterSelectedValue;
-(NSString *)visualFilterSelectedType;
-(NSArray *)infoFilters;
-(NSString *)infoFilterSelectedType;
-(NSArray *)speedMotionFilters;
-(NSString *)speedMotionFilterSelectedType;
-(NSNumber *)reverseMotionFilterEnabled;
-(NSNumber *)reverseMotionFilterSelected;
-(NSArray *)geoFilters;
-(NSString *)geoFilterSelectedId;
-(SOJUGalleryVenueFilter *)venueFilter;
-(NSNumber *)venueFilterSelected;
-(SOJUGalleryStreakFilter *)streakFilter;
-(NSNumber *)streakFilterSelected;
-(SOJUContextFilterMetadata *)contextFilters;
-(NSString *)contextFilterSelectedId;
-(id)initWithVisualFilters:(id)arg1 visualFilterSelectedType:(id)arg2 infoFilters:(id)arg3 infoFilterSelectedType:(id)arg4 speedMotionFilters:(id)arg5 speedMotionFilterSelectedType:(id)arg6 reverseMotionFilterEnabled:(id)arg7 reverseMotionFilterSelected:(id)arg8 geoFilters:(id)arg9 geoFilterSelectedId:(id)arg10 venueFilter:(id)arg11 venueFilterSelected:(id)arg12 streakFilter:(id)arg13 streakFilterSelected:(id)arg14 contextFilters:(id)arg15 contextFilterSelectedId:(id)arg16 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end
