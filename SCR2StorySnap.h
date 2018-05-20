/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCR2SnapMediaInfo, NSMutableArray, NSMutableDictionary, SCR2SnapPivotInfo, SCR2SnapCreatorInfo, NSData, SCR2MultiSnapExtension;

@interface SCR2StorySnap : GPBMessage

@property (nonatomic,copy) NSString * rawSnapId; 
@property (nonatomic,copy) NSString * sharedStorySubmissionId; 
@property (nonatomic,retain) SCR2SnapMediaInfo * mediaInfo; 
@property (assign,nonatomic) BOOL hasMediaInfo; 
@property (assign,nonatomic) long long creationTimestampMs; 
@property (assign,nonatomic) long long expirationTimestampMs; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) NSMutableArray * subTitlesArray; 
@property (nonatomic,readonly) unsigned long long subTitlesArray_Count; 
@property (nonatomic,retain) NSMutableDictionary * debugMap; 
@property (nonatomic,readonly) unsigned long long debugMap_Count; 
@property (nonatomic,retain) NSMutableArray * attachedStoryIdArray; 
@property (nonatomic,readonly) unsigned long long attachedStoryIdArray_Count; 
@property (nonatomic,retain) SCR2SnapPivotInfo * pivotInfo; 
@property (assign,nonatomic) BOOL hasPivotInfo; 
@property (nonatomic,retain) SCR2SnapCreatorInfo * creatorInfo; 
@property (assign,nonatomic) BOOL hasCreatorInfo; 
@property (nonatomic,copy) NSString * attachmentURL; 
@property (assign,nonatomic) BOOL suppressContext; 
@property (nonatomic,copy) NSData * audioStitchData; 
@property (nonatomic,retain) SCR2MultiSnapExtension * multiSnapExtension; 
@property (assign,nonatomic) BOOL hasMultiSnapExtension; 
@property (assign,nonatomic) BOOL hasLensFilter; 
@property (nonatomic,copy) NSString * snapSource; 
@property (nonatomic,copy) NSString * lensId; 
@property (assign,nonatomic) BOOL hasSnappablesMetadata; 
+(id)descriptor;
@end
