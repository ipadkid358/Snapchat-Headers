/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCSSMClientInfo, SCSSMSearchRequest_Query, NSMutableArray, SCSCORETweaks;

@interface SCSSMSearchRequest : GPBMessage

@property (nonatomic,copy) NSString * requestId; 
@property (assign,nonatomic) long long requestTimestampMs; 
@property (assign,nonatomic) int origin; 
@property (nonatomic,retain) SCSSMClientInfo * clientInfo; 
@property (assign,nonatomic) BOOL hasClientInfo; 
@property (nonatomic,retain) SCSSMSearchRequest_Query * query; 
@property (assign,nonatomic) BOOL hasQuery; 
@property (assign,nonatomic) int debug; 
@property (nonatomic,retain) NSMutableArray * studyInfoArray; 
@property (nonatomic,readonly) unsigned long long studyInfoArray_Count; 
@property (nonatomic,retain) SCSCORETweaks * tweaks; 
@property (assign,nonatomic) BOOL hasTweaks; 
+(id)descriptor;
@end
