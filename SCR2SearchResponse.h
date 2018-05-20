/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, NSMutableArray, NSMutableDictionary, SCR2ErrorBar, SCR2RequestTrace;

@interface SCR2SearchResponse : GPBMessage

@property (nonatomic,copy) NSString * requestId; 
@property (nonatomic,copy) NSString * searchSessionId; 
@property (nonatomic,copy) NSString * searchSessionQueryId; 
@property (nonatomic,copy) NSString * queryText; 
@property (nonatomic,retain) NSMutableArray * sectionsArray; 
@property (nonatomic,readonly) unsigned long long sectionsArray_Count; 
@property (nonatomic,retain) NSMutableDictionary * debugMap; 
@property (nonatomic,readonly) unsigned long long debugMap_Count; 
@property (nonatomic,retain) NSMutableArray * searchConfigResponsesArray; 
@property (nonatomic,readonly) unsigned long long searchConfigResponsesArray_Count; 
@property (nonatomic,retain) NSMutableArray * pageFooterArray; 
@property (nonatomic,readonly) unsigned long long pageFooterArray_Count; 
@property (nonatomic,retain) SCR2ErrorBar * errorBar; 
@property (assign,nonatomic) BOOL hasErrorBar; 
@property (nonatomic,retain) SCR2RequestTrace * trace; 
@property (assign,nonatomic) BOOL hasTrace; 
+(id)descriptor;
@end

