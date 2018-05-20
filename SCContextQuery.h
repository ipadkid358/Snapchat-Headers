/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCContextImageQuery, NSString, SCContextGeoLocation, SCContextGroupMessageIdentifier, SCContextOurStoryIdentifier, NSMutableArray, SCContextVenueOverrides, SCContextUnlockablesData, SCContextContextHint;

@interface SCContextQuery : GPBMessage

@property (nonatomic,retain) SCContextImageQuery * imageQuery; 
@property (assign,nonatomic) BOOL hasImageQuery; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) SCContextGeoLocation * location; 
@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) long long time; 
@property (nonatomic,copy) NSString * venueId; 
@property (nonatomic,readonly) int contextualizedMessageIdOneOfCase; 
@property (nonatomic,copy) NSString * storyId; 
@property (nonatomic,copy) NSString * snapId; 
@property (nonatomic,retain) SCContextGroupMessageIdentifier * groupMessageId; 
@property (nonatomic,copy) NSString * sharedStorySubmissionId; 
@property (nonatomic,retain) SCContextOurStoryIdentifier * ourStoryId; 
@property (nonatomic,retain) NSMutableArray * moreContextArray; 
@property (nonatomic,readonly) unsigned long long moreContextArray_Count; 
@property (nonatomic,retain) SCContextVenueOverrides * overrides; 
@property (assign,nonatomic) BOOL hasOverrides; 
@property (nonatomic,retain) SCContextUnlockablesData * unlockablesData; 
@property (assign,nonatomic) BOOL hasUnlockablesData; 
@property (nonatomic,copy) NSString * captionText; 
@property (nonatomic,copy) NSString * attachmentURL; 
@property (nonatomic,copy) NSString * mapPoiId; 
@property (nonatomic,retain) SCContextContextHint * hint; 
@property (assign,nonatomic) BOOL hasHint; 
+(id)descriptor;
@end
