/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:01 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class WeatherContext, ConceptContext, KeywordContext, VenueContext, UserContext, NSString;

@interface ContextualServiceResponse : GPBMessage

@property (nonatomic,retain) WeatherContext * weatherContext; 
@property (assign,nonatomic) BOOL hasWeatherContext; 
@property (nonatomic,retain) ConceptContext * conceptContext; 
@property (assign,nonatomic) BOOL hasConceptContext; 
@property (nonatomic,retain) KeywordContext * keywordContext; 
@property (assign,nonatomic) BOOL hasKeywordContext; 
@property (nonatomic,retain) VenueContext * venueContext; 
@property (assign,nonatomic) BOOL hasVenueContext; 
@property (nonatomic,retain) UserContext * userContext; 
@property (assign,nonatomic) BOOL hasUserContext; 
@property (nonatomic,copy) NSString * debugHtml; 
+(id)descriptor;
@end

