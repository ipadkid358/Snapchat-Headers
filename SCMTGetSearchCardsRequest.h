/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCMTTileSetId, SCMTPoint, NSString, SCMTGeoBox;

@interface SCMTGetSearchCardsRequest : GPBMessage

@property (nonatomic,retain) SCMTTileSetId * tileSetId; 
@property (assign,nonatomic) BOOL hasTileSetId; 
@property (nonatomic,retain) SCMTPoint * userLocation; 
@property (assign,nonatomic) BOOL hasUserLocation; 
@property (nonatomic,retain) SCMTPoint * mapLocation; 
@property (assign,nonatomic) BOOL hasMapLocation; 
@property (assign,nonatomic) double zoom; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,retain) SCMTGeoBox * viewport; 
@property (assign,nonatomic) BOOL hasViewport; 
+(id)descriptor;
@end

