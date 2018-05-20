/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCMTPoint, NSMutableArray;

@interface SCMTPlacePoi : GPBMessage

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SCMTPoint * markerPoint; 
@property (assign,nonatomic) BOOL hasMarkerPoint; 
@property (assign,nonatomic) int numSnaps; 
@property (nonatomic,retain) NSMutableArray * geoFenceArray; 
@property (nonatomic,readonly) unsigned long long geoFenceArray_Count; 
@property (nonatomic,copy) NSString * thumbnailURL; 
@property (assign,nonatomic) BOOL geofilterOnly; 
@property (nonatomic,retain) NSMutableArray * geofilterIdsArray; 
@property (nonatomic,readonly) unsigned long long geofilterIdsArray_Count; 
+(id)descriptor;
@end
