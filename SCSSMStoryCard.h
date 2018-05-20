/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCCORECompositeStoryId, SCSSMOurStoryCard, SCSSMPublisherStoryCard, SCSSMPublicUserStoryCard, SCSSMMapTileCard, SCSSMPromotedStoryCard, SCSSMMomentStoryCard, SCSSMCognacCard, SCSSMSoloStoryCard, SCSSMJaguarClientLogging, SCSSMClientRankingFeatures, SCSSMClientDisplayInfo, SCSSMCardDebugInfo;

@interface SCSSMStoryCard : GPBMessage

@property (nonatomic,copy) NSString * storyId; 
@property (nonatomic,retain) SCCORECompositeStoryId * compositeStoryId; 
@property (assign,nonatomic) BOOL hasCompositeStoryId; 
@property (assign,nonatomic) unsigned long long storyDedupeFp; 
@property (assign,nonatomic) unsigned long long storyCacheFp; 
@property (nonatomic,readonly) int cardOneOfCase; 
@property (nonatomic,retain) SCSSMOurStoryCard * ourStoryCard; 
@property (nonatomic,retain) SCSSMPublisherStoryCard * publisherStoryCard; 
@property (nonatomic,retain) SCSSMPublicUserStoryCard * publicUserStoryCard; 
@property (nonatomic,retain) SCSSMMapTileCard * mapTileCard; 
@property (nonatomic,retain) SCSSMPromotedStoryCard * promotedStoryCard; 
@property (nonatomic,retain) SCSSMMomentStoryCard * momentStoryCard; 
@property (nonatomic,retain) SCSSMCognacCard * cognacCard; 
@property (nonatomic,retain) SCSSMSoloStoryCard * soloStoryCard; 
@property (assign,nonatomic) int storySubtype; 
@property (assign,nonatomic) float tileAspectRatio; 
@property (nonatomic,copy) NSString * tileDominantColor; 
@property (assign,nonatomic) BOOL isSubscribed; 
@property (assign,nonatomic) BOOL isFeatured; 
@property (nonatomic,copy) NSString * featuredBannerText; 
@property (nonatomic,retain) SCSSMJaguarClientLogging * jaguarClientLogging; 
@property (assign,nonatomic) BOOL hasJaguarClientLogging; 
@property (assign,nonatomic) float score; 
@property (assign,nonatomic) BOOL rankShouldBeFixed; 
@property (assign,nonatomic) BOOL notModerated; 
@property (nonatomic,retain) SCSSMClientRankingFeatures * clientRankingFeatures; 
@property (assign,nonatomic) BOOL hasClientRankingFeatures; 
@property (nonatomic,retain) SCSSMClientDisplayInfo * clientDisplayInfo; 
@property (assign,nonatomic) BOOL hasClientDisplayInfo; 
@property (assign,nonatomic) int hideAfterWatch; 
@property (assign,nonatomic) long long latestUpdateTimestampSecs; 
@property (assign,nonatomic) BOOL hasUpnextRecommendation; 
@property (nonatomic,retain) SCSSMCardDebugInfo * debugInfo; 
@property (assign,nonatomic) BOOL hasDebugInfo; 
+(id)descriptor;
@end
