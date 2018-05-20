/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, GPBInt32Array, NSMutableArray, SCMT1LocalTime;

@interface SCMT1TypeDef : GPBMessage

@property (assign,nonatomic) int id_p; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * description_p; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int permissions; 
@property (assign,nonatomic) long long validDuration; 
@property (assign,nonatomic) long long lockDuration; 
@property (assign,nonatomic) int clusteringPolicy; 
@property (nonatomic,retain) GPBInt32Array * assetIdsArray; 
@property (nonatomic,readonly) unsigned long long assetIdsArray_Count; 
@property (nonatomic,retain) NSMutableArray * assetIdProbabilitiesArray; 
@property (nonatomic,readonly) unsigned long long assetIdProbabilitiesArray_Count; 
@property (nonatomic,retain) SCMT1LocalTime * startTime; 
@property (assign,nonatomic) BOOL hasStartTime; 
@property (nonatomic,retain) SCMT1LocalTime * endTime; 
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) BOOL isEnabled; 
@property (assign,nonatomic) BOOL isDarkTest; 
@property (assign,nonatomic) int propPriority; 
@property (assign,nonatomic) int propCondition; 
+(id)descriptor;
@end
