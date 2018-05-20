/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCMTPoint, SCMTGeoBox, SCMTThumbnail, SCStoryManifest, SCMTPointOfInterest_DiscoverInfo;

@interface SCMTSearchCards_PoiRow : GPBMessage

@property (nonatomic,copy) NSString * id_p; 
@property (nonatomic,retain) SCMTPoint * latlng; 
@property (assign,nonatomic) BOOL hasLatlng; 
@property (assign,nonatomic) double zoom; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,copy) NSString * titleFmt; 
@property (nonatomic,copy) NSString * subtitleFmt; 
@property (nonatomic,retain) SCMTGeoBox * boundingBox; 
@property (assign,nonatomic) BOOL hasBoundingBox; 
@property (nonatomic,retain) SCMTThumbnail * thumb; 
@property (assign,nonatomic) BOOL hasThumb; 
@property (nonatomic,retain) SCStoryManifest * manifest; 
@property (assign,nonatomic) BOOL hasManifest; 
@property (nonatomic,retain) SCMTPointOfInterest_DiscoverInfo * discoverInfo; 
@property (assign,nonatomic) BOOL hasDiscoverInfo; 
+(id)descriptor;
@end
