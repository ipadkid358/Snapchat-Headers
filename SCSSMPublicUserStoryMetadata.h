/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCSSMStoryThumbnail, NSMutableArray, SCSSMImpalaStoryMetadata;

@interface SCSSMPublicUserStoryMetadata : GPBMessage

@property (nonatomic,copy) NSString * userId; 
@property (nonatomic,retain) SCSSMStoryThumbnail * storyThumbnail; 
@property (assign,nonatomic) BOOL hasStoryThumbnail; 
@property (nonatomic,retain) NSMutableArray * candidateThumbnailsArray; 
@property (nonatomic,readonly) unsigned long long candidateThumbnailsArray_Count; 
@property (nonatomic,copy) NSString * displayName; 
@property (assign,nonatomic) long long displayTimestampSecs; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * emoji; 
@property (nonatomic,copy) NSString * emojiSafe; 
@property (assign,nonatomic) BOOL isPopular; 
@property (assign,nonatomic) BOOL isOfficial; 
@property (assign,nonatomic) BOOL isFollowed; 
@property (nonatomic,copy) NSString * bitmojiAvatarId; 
@property (nonatomic,copy) NSString * bitmojiAvatarSelfieId; 
@property (assign,nonatomic) int totalNumSnaps; 
@property (assign,nonatomic) double totalDurationSecs; 
@property (nonatomic,retain) NSMutableArray * postSubscribeSuggestionsArray; 
@property (nonatomic,readonly) unsigned long long postSubscribeSuggestionsArray_Count; 
@property (nonatomic,retain) SCSSMImpalaStoryMetadata * impalaStoryMetadata; 
@property (assign,nonatomic) BOOL hasImpalaStoryMetadata; 
@property (assign,nonatomic) int brandFriendliness; 
+(id)descriptor;
@end
