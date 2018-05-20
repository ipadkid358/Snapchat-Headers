/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMyContributionStories.h>

@class NSString, Story, NSSet;

@interface SCMyGroupStories : SCMyContributionStories {

	NSString* _publicationId;
	NSString* _displayName;
	NSString* _creatorId;
	BOOL _ignoreNonFriendsForRecentSort;
	BOOL _geofenceOn;
	long long _storyType;
	BOOL _cacheLoaded;
	Story* _cache_mostRecentFriendPostedStory;
	Story* _cache_mostRecentSelfPostedStory;
	BOOL _cache_creatorIs1stDegree;
	BOOL _cache_creatorIsCurrentUser;
	BOOL _isCreatorCopy;
	NSSet* _storyWhitelist;

}

@property (nonatomic,readonly) Story * mostRecentSelfPostedStory; 
@property (nonatomic,readonly) Story * mostRecentFriendPostedStory; 
@property (nonatomic,readonly) Story * mostRecentPostedStory; 
@property (nonatomic,readonly) NSString * mostRecentFriendPosterDisplayName; 
@property (nonatomic,readonly) NSString * mostRecentPosterDisplayName; 
@property (nonatomic,readonly) BOOL mostRecentPosterIsCurrentUser; 
@property (nonatomic,readonly) BOOL isGeoStory; 
@property (nonatomic,readonly) BOOL isCustomStory; 
@property (nonatomic,readonly) BOOL creatorIs1stDegree; 
@property (nonatomic,readonly) BOOL creatorIsCurrentUser; 
@property (nonatomic,readonly) NSString * mischiefId; 
@property (nonatomic,readonly) long long geoStoryPrivacyType; 
+(id)uniqueStoriesIdForGroupStoryPublicationId:(id)arg1 ;
-(NSString *)mischiefId;
-(BOOL)isGeoStory;
-(BOOL)isCustomStory;
-(BOOL)isShareable;
-(void)_updateCache;
-(long long)groupStoryType;
-(BOOL)containsStory:(id)arg1 ;
-(id)friendsFeedId;
-(BOOL)missingMetadata;
-(long long)geoStoryPrivacyType;
-(void)fetchMedia:(id)arg1 userInitiated:(BOOL)arg2 ;
-(BOOL)isNormalFriendStories;
-(void)setStories:(id)arg1 ;
-(Story *)mostRecentPostedStory;
-(BOOL)creatorIsCurrentUser;
-(Story *)mostRecentSelfPostedStory;
-(BOOL)replyEnabledForStory:(id)arg1 ;
-(id)storiesCreatedByBlockedUsersIgnoringWhitelist:(BOOL)arg1 ;
-(void)whitelistCurrentStories;
-(Story *)mostRecentFriendPostedStory;
-(BOOL)creatorIs1stDegree;
-(id)initWithSOJUFriendStories:(id)arg1 ;
-(void)mergePublicationForCreatorCopy:(id)arg1 ;
-(id)initWithPublicationId:(id)arg1 creatorId:(id)arg2 displayName:(id)arg3 geofenced:(BOOL)arg4 storyArray:(id)arg5 ;
-(BOOL)expireWhenEmpty;
-(id)storyForClientId:(id)arg1 ;
-(id)uniqueStoriesId;
-(void)updateWithGroupChat:(id)arg1 ;
-(void)updateWithPublicationId:(id)arg1 ;
-(void)updateWithGroupStories:(id)arg1 isDelta:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateWithSOJUBroadcastMobsModelAuthMetadata:(id)arg1 ;
-(void)updateWithSOJUBroadcastMobsModelMetadata:(id)arg1 ;
-(BOOL)containsStoryFromFriend;
-(BOOL)hasUnviewedGroupStories;
-(BOOL)containsStoryFromBlockedUserIgnoringWhitelist:(BOOL)arg1 ;
-(void)_fetchMedia:(id)arg1 userInitiated:(BOOL)arg2 inMyStoriesSection:(BOOL)arg3 ;
-(BOOL)_isMyStoriesSectionGroupStory;
-(void)_clearExpiredStoriesWithResultHandler:(/*^block*/id)arg1 isMyStoriesSection:(BOOL)arg2 ;
-(void)clearExpiredStoriesWithResultHandler:(/*^block*/id)arg1 ;
-(id)mostRecentUnviewedStoryId;
-(id)mostRecentUnviewedStoryTimestamp;
-(id)_groupStoryPublication;
-(BOOL)mostRecentPosterIsCurrentUser;
-(BOOL)_replyEnabledForFriend:(id)arg1 ;
-(id)mergedUsername;
-(void)updateWithStoriesArray:(id)arg1 ;
-(NSString *)mostRecentFriendPosterDisplayName;
-(NSString *)mostRecentPosterDisplayName;
-(BOOL)canDeleteStorySnaps;
-(id)storySpecificTypeString;
-(long long)storySpecificTypeForLogging;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(id)username;
-(BOOL)isSaveable;
-(id)userDisplayName;
-(long long)storyType;
@end

