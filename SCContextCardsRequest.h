/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, NSMutableArray, SCContextGeoLocation, NSMutableDictionary;

@interface SCContextCardsRequest : GPBMessage

@property (nonatomic,copy) NSString * requestId; 
@property (nonatomic,copy) NSString * sessionId; 
@property (assign,nonatomic) int launchSource; 
@property (nonatomic,retain) NSMutableArray * queriesArray; 
@property (nonatomic,readonly) unsigned long long queriesArray_Count; 
@property (nonatomic,retain) SCContextGeoLocation * userLocation; 
@property (assign,nonatomic) BOOL hasUserLocation; 
@property (assign,nonatomic) float devicePixelRatio; 
@property (assign,nonatomic) unsigned contextDepth; 
@property (assign,nonatomic) BOOL debug; 
@property (nonatomic,copy) NSString * strategy; 
@property (nonatomic,retain) NSMutableDictionary * tweakParameters; 
@property (nonatomic,readonly) unsigned long long tweakParameters_Count; 
@property (nonatomic,retain) NSMutableArray * appListGroupPreferencesArray; 
@property (nonatomic,readonly) unsigned long long appListGroupPreferencesArray_Count; 
+(id)descriptor;
-(void)setBooleanTweakForKey:(id)arg1 value:(BOOL)arg2 ;
-(void)setStringTweakForKey:(id)arg1 value:(id)arg2 ;
-(void)setIntTweakForKey:(id)arg1 value:(int)arg2 ;
-(void)setFloatTweakForKey:(id)arg1 value:(float)arg2 ;
@end

