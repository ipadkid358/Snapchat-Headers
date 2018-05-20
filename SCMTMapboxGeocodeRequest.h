/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, NSMutableArray, SCMTMapboxGeocodeRequest_Coordinate, GPBEnumArray, SCMTMapboxGeocodeRequest_BoundingBox;

@interface SCMTMapboxGeocodeRequest : GPBMessage

@property (nonatomic,copy) NSString * query; 
@property (assign,nonatomic) int mode; 
@property (nonatomic,retain) NSMutableArray * countriesArray; 
@property (nonatomic,readonly) unsigned long long countriesArray_Count; 
@property (nonatomic,retain) SCMTMapboxGeocodeRequest_Coordinate * proximity; 
@property (assign,nonatomic) BOOL hasProximity; 
@property (nonatomic,retain) GPBEnumArray * typesArray; 
@property (nonatomic,readonly) unsigned long long typesArray_Count; 
@property (assign,nonatomic) BOOL autocomplete; 
@property (nonatomic,retain) SCMTMapboxGeocodeRequest_BoundingBox * bbox; 
@property (assign,nonatomic) BOOL hasBbox; 
@property (assign,nonatomic) int limit; 
@property (nonatomic,copy) NSString * language; 
@property (assign,nonatomic) int reverseMode; 
+(id)descriptor;
@end
