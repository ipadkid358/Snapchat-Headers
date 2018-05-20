/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCR2StoryThumbnail, NSMutableArray, SCR2GeoLocation, SCR2PlaceLikelihood, NSData, SCR2PlaceDisplayMetadata, SCR2DynamicStoryType, SCR2CompositeStoryId;

@interface SCR2StoryMetadata : GPBMessage

@property (nonatomic,copy) NSString * storyId; 
@property (nonatomic,copy) NSString * thumbnailSnapId; 
@property (nonatomic,retain) SCR2StoryThumbnail * storyThumbnail; 
@property (assign,nonatomic) BOOL hasStoryThumbnail; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) NSMutableArray * subTitlesArray; 
@property (nonatomic,readonly) unsigned long long subTitlesArray_Count; 
@property (nonatomic,copy) NSString * emoji; 
@property (nonatomic,copy) NSString * snippet; 
@property (assign,nonatomic) float storyScore; 
@property (nonatomic,retain) SCR2GeoLocation * location; 
@property (assign,nonatomic) BOOL hasLocation; 
@property (nonatomic,retain) SCR2PlaceLikelihood * place; 
@property (assign,nonatomic) BOOL hasPlace; 
@property (assign,nonatomic) int totalNumSnaps; 
@property (assign,nonatomic) double totalDuration; 
@property (assign,nonatomic) int storyType; 
@property (nonatomic,copy) NSString * logoURL; 
@property (nonatomic,copy) NSData * adPlacementMetadata; 
@property (assign,nonatomic) long long displayTimestampSecs; 
@property (nonatomic,retain) SCR2PlaceDisplayMetadata * placeDisplayMetadata; 
@property (assign,nonatomic) BOOL hasPlaceDisplayMetadata; 
@property (nonatomic,retain) NSMutableArray * topicLabelsArray; 
@property (nonatomic,readonly) unsigned long long topicLabelsArray_Count; 
@property (nonatomic,retain) SCR2DynamicStoryType * dynamicStoryType; 
@property (assign,nonatomic) BOOL hasDynamicStoryType; 
@property (nonatomic,retain) SCR2CompositeStoryId * compositeStoryId; 
@property (assign,nonatomic) BOOL hasCompositeStoryId; 
@property (assign,nonatomic) BOOL isCampusStory; 
@property (nonatomic,copy) NSString * description_p; 
@property (assign,nonatomic) BOOL isSubscribable; 
+(id)descriptor;
@end

