/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:01 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCR2StorySnap, SCR2GcsMedia, SCR2TrainingInfo, SCR2ContextInfo, SCR2SnapRenderingInfo;

@interface SCR2DomoSnap : GPBMessage

@property (nonatomic,copy) NSString * domoSnapId; 
@property (nonatomic,retain) SCR2StorySnap * snap; 
@property (assign,nonatomic) BOOL hasSnap; 
@property (nonatomic,retain) SCR2GcsMedia * gcsMedia; 
@property (assign,nonatomic) BOOL hasGcsMedia; 
@property (assign,nonatomic) int mediaFormat; 
@property (nonatomic,retain) SCR2TrainingInfo * trainingInfo; 
@property (assign,nonatomic) BOOL hasTrainingInfo; 
@property (nonatomic,retain) SCR2ContextInfo * contextInfo; 
@property (assign,nonatomic) BOOL hasContextInfo; 
@property (nonatomic,retain) SCR2SnapRenderingInfo * renderingInfo; 
@property (assign,nonatomic) BOOL hasRenderingInfo; 
+(id)descriptor;
@end
