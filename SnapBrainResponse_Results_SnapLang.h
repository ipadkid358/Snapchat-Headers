/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:01 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SnapBrainResponse_Results_SnapLang_NER, NSMutableArray, SnapBrainResponse_Results_SnapLang_SensitiveLanguage, SnapBrainResponse_Results_SnapLang_Language, SnapBrainResponse_Results_SnapLang_Sentiment, NSString, GPBStringDoubleDictionary, SnapBrainResponse_Results_SnapLang_ReviewSentiment;

@interface SnapBrainResponse_Results_SnapLang : GPBMessage

@property (nonatomic,retain) SnapBrainResponse_Results_SnapLang_NER * ner; 
@property (assign,nonatomic) BOOL hasNer; 
@property (nonatomic,retain) NSMutableArray * newsKeywordsArray; 
@property (nonatomic,readonly) unsigned long long newsKeywordsArray_Count; 
@property (nonatomic,retain) SnapBrainResponse_Results_SnapLang_SensitiveLanguage * sensitiveLanguage; 
@property (assign,nonatomic) BOOL hasSensitiveLanguage; 
@property (nonatomic,retain) NSMutableArray * brandsArray; 
@property (nonatomic,readonly) unsigned long long brandsArray_Count; 
@property (nonatomic,retain) SnapBrainResponse_Results_SnapLang_Language * language; 
@property (assign,nonatomic) BOOL hasLanguage; 
@property (nonatomic,retain) SnapBrainResponse_Results_SnapLang_Sentiment * sentiment; 
@property (assign,nonatomic) BOOL hasSentiment; 
@property (nonatomic,retain) NSMutableArray * emojisArray; 
@property (nonatomic,readonly) unsigned long long emojisArray_Count; 
@property (nonatomic,copy) NSString * normalizer; 
@property (nonatomic,retain) GPBStringDoubleDictionary * emotion; 
@property (nonatomic,readonly) unsigned long long emotion_Count; 
@property (nonatomic,retain) NSMutableArray * posArray; 
@property (nonatomic,readonly) unsigned long long posArray_Count; 
@property (nonatomic,retain) SnapBrainResponse_Results_SnapLang_ReviewSentiment * reviewSentiment; 
@property (assign,nonatomic) BOOL hasReviewSentiment; 
+(id)descriptor;
@end
