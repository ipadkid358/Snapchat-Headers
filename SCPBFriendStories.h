/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, NSMutableArray, SCPBAdsStoryAdMetadata, SCPBStoryThumbnails, SCPBBroadcastTileMetadata, SCPBBroadcastOfficialStoriesMetadata;

@interface SCPBFriendStories : GPBMessage

@property (nonatomic,copy) NSString * username; 
@property (nonatomic,retain) NSMutableArray * storiesArray; 
@property (nonatomic,readonly) unsigned long long storiesArray_Count; 
@property (nonatomic,copy) NSString * displayName; 
@property (assign,nonatomic) BOOL isLocal; 
@property (nonatomic,copy) NSString * profileDescription; 
@property (nonatomic,copy) NSString * deepLinkURL; 
@property (nonatomic,copy) NSString * sharedId; 
@property (assign,nonatomic) BOOL matureContent; 
@property (nonatomic,retain) SCPBAdsStoryAdMetadata * adPlacementMetadata; 
@property (assign,nonatomic) BOOL hasAdPlacementMetadata; 
@property (nonatomic,retain) SCPBStoryThumbnails * thumbnails; 
@property (assign,nonatomic) BOOL hasThumbnails; 
@property (assign,nonatomic) BOOL allowStoryExplorer; 
@property (assign,nonatomic) BOOL hasCustomDescription; 
@property (assign,nonatomic) BOOL showViewingJit; 
@property (nonatomic,retain) SCPBBroadcastTileMetadata * featuredStory; 
@property (assign,nonatomic) BOOL hasFeaturedStory; 
@property (assign,nonatomic) BOOL isManifestStory; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * publisherId; 
@property (nonatomic,retain) SCPBBroadcastOfficialStoriesMetadata * officialStoriesMetadata; 
@property (assign,nonatomic) BOOL hasOfficialStoriesMetadata; 
@property (assign,nonatomic) int newStoryCount; 
@property (nonatomic,copy) NSString * userId; 
+(id)descriptor;
@end

