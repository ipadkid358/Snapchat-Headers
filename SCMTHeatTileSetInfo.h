/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCMTHeatmapGradient;

@interface SCMTHeatTileSetInfo : GPBMessage

@property (assign,nonatomic) double heatFromTime; 
@property (assign,nonatomic) double heatToTime; 
@property (assign,nonatomic) double lastSnapTime; 
@property (assign,nonatomic) int totalHeatmapPoints; 
@property (nonatomic,retain) SCMTHeatmapGradient * heatmapGradient; 
@property (assign,nonatomic) BOOL hasHeatmapGradient; 
@property (assign,nonatomic) float heatNormalizationPeak; 
@property (assign,nonatomic) float fuzzNormalizationPeak; 
@property (assign,nonatomic) float heatPointBaseRadius; 
+(id)descriptor;
@end
