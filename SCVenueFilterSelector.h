/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, CLLocation, SOJUVenue;

@interface SCVenueFilterSelector : NSObject <NSCopying> {

	BOOL _hasBeenShown;
	BOOL _isFeedbackDisabled;
	NSArray* _venueFilters;
	NSArray* _extraVenues;
	CLLocation* _location;
	double _yOffset;
	long long _selectedIndex;

}

@property (assign,nonatomic) long long selectedIndex;                    //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,readonly) SOJUVenue * selectedFilter; 
@property (nonatomic,copy,readonly) NSArray * venueFilters;              //@synthesize venueFilters=_venueFilters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * extraVenues;               //@synthesize extraVenues=_extraVenues - In the implementation block
@property (nonatomic,retain) CLLocation * location;                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double yOffset;                             //@synthesize yOffset=_yOffset - In the implementation block
@property (assign,nonatomic) BOOL hasBeenShown;                          //@synthesize hasBeenShown=_hasBeenShown - In the implementation block
@property (assign,nonatomic) BOOL isFeedbackDisabled;                    //@synthesize isFeedbackDisabled=_isFeedbackDisabled - In the implementation block
-(NSArray *)venueFilters;
-(SOJUVenue *)selectedFilter;
-(id)initWithSOJUGalleryVenueFilter:(id)arg1 ;
-(void)setIsFeedbackDisabled:(BOOL)arg1 ;
-(id)initWithArrayOfVenueFilters:(id)arg1 extraVenueFilters:(id)arg2 ;
-(id)initWithArrayOfVenueDictionaries:(id)arg1 ;
-(id)venueFilterIds;
-(NSArray *)extraVenues;
-(void)selectFilter:(id)arg1 ;
-(void)selectNextVenue;
-(unsigned long long)selectedVenueIndex;
-(BOOL)hasBeenShown;
-(void)setHasBeenShown:(BOOL)arg1 ;
-(BOOL)isFeedbackDisabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(double)yOffset;
-(void)setYOffset:(double)arg1 ;
@end

