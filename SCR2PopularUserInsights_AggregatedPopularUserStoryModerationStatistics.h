/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class GPBStringInt32Dictionary;

@interface SCR2PopularUserInsights_AggregatedPopularUserStoryModerationStatistics : GPBMessage

@property (assign,nonatomic) int storyModerationCount; 
@property (assign,nonatomic) double averageRating; 
@property (assign,nonatomic) int nsfwCount; 
@property (assign,nonatomic) int offensiveCount; 
@property (assign,nonatomic) int merchandisePromotionCount; 
@property (nonatomic,retain) GPBStringInt32Dictionary * categoryCount; 
@property (nonatomic,readonly) unsigned long long categoryCount_Count; 
@property (nonatomic,retain) GPBStringInt32Dictionary * languageCount; 
@property (nonatomic,readonly) unsigned long long languageCount_Count; 
+(id)descriptor;
@end

