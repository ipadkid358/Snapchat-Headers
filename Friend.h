/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Snapchat/SCSortableRecipient.h>
#import <Snapchat/SCEventFriend.h>

@class NSNumber, NSDate, NSString, NSSet, NSArray, SOJUSecurityFideliusFriendInfo;

@interface Friend : NSObject <NSCoding, SCSortableRecipient, SCEventFriend> {

	NSString* _formattedName;
	NSNumber* _isOfficial;
	BOOL _isSuggestedFriend;
	BOOL _isVerified;
	BOOL _newLink;
	BOOL _ignored;
	BOOL _hidden;
	BOOL _isRecommended;
	BOOL _canSeeCustomStories;
	BOOL _needsLoveCandidate;
	BOOL _isSharedStory;
	BOOL _hasCustomDescriptionForSharedStory;
	BOOL _sharedLocalStory;
	BOOL _unVerifiedByServer;
	BOOL _shouldSendClearTextKey;
	BOOL _isPopular;
	BOOL _isMuted;
	BOOL _autoAdded;
	long long _type;
	long long _snapStreakCount;
	long long _snapStreakFilterLastUsed;
	NSNumber* _score;
	NSDate* _lastInteractionTimestamp;
	NSDate* _friendAddedAt;
	NSDate* _friendRequestSentAt;
	NSString* _atomicName;
	NSString* _userId;
	NSString* _display;
	NSString* _suggestionToken;
	NSString* _suggestReasonDisplay;
	NSString* _searchDisplayReason;
	NSSet* _atomicSearchKeywords;
	NSNumber* _contactBasedRecommendationScore;
	NSArray* _friendmojis;
	NSDate* _birthdayDate;
	NSString* _snaptagUrl;
	NSString* _sharedStoryDescription;
	NSString* _sharedStoryId;
	NSString* _sharedStoryVenue;
	NSString* _storyPrivacy;
	NSString* _bitmojiAvatarId;
	NSString* _bitmojiSelfieId;
	SOJUSecurityFideliusFriendInfo* _fideliusInfo;
	unsigned long long _pendingSnapCount;
	unsigned long long _pendingChatCount;
	unsigned long long _potentialHighQualityScore;
	NSNumber* _timestamp;
	NSString* _birthday;
	NSDate* _expiration;

}

@property (copy) NSString * birthday;                                          //@synthesize birthday=_birthday - In the implementation block
@property (assign) BOOL autoAdded;                                             //@synthesize autoAdded=_autoAdded - In the implementation block
@property (retain) NSDate * expiration;                                        //@synthesize expiration=_expiration - In the implementation block
@property (assign) BOOL isSharedStory;                                         //@synthesize isSharedStory=_isSharedStory - In the implementation block
@property (copy) NSString * atomicName;                                        //@synthesize atomicName=_atomicName - In the implementation block
@property (copy) NSString * userId;                                            //@synthesize userId=_userId - In the implementation block
@property (copy) NSString * display;                                           //@synthesize display=_display - In the implementation block
@property (copy) NSString * suggestionToken;                                   //@synthesize suggestionToken=_suggestionToken - In the implementation block
@property (copy) NSString * suggestReasonDisplay;                              //@synthesize suggestReasonDisplay=_suggestReasonDisplay - In the implementation block
@property (assign) BOOL isSuggestedFriend;                                     //@synthesize isSuggestedFriend=_isSuggestedFriend - In the implementation block
@property (copy) NSString * searchDisplayReason;                               //@synthesize searchDisplayReason=_searchDisplayReason - In the implementation block
@property (assign) BOOL isVerified;                                            //@synthesize isVerified=_isVerified - In the implementation block
@property (retain) NSSet * atomicSearchKeywords;                               //@synthesize atomicSearchKeywords=_atomicSearchKeywords - In the implementation block
@property (assign) BOOL newLink;                                               //@synthesize newLink=_newLink - In the implementation block
@property (assign) BOOL ignored;                                               //@synthesize ignored=_ignored - In the implementation block
@property (assign) BOOL hidden;                                                //@synthesize hidden=_hidden - In the implementation block
@property (assign) BOOL isRecommended;                                         //@synthesize isRecommended=_isRecommended - In the implementation block
@property (retain) NSNumber * contactBasedRecommendationScore;                 //@synthesize contactBasedRecommendationScore=_contactBasedRecommendationScore - In the implementation block
@property (assign) BOOL canSeeCustomStories;                                   //@synthesize canSeeCustomStories=_canSeeCustomStories - In the implementation block
@property (assign) BOOL needsLoveCandidate;                                    //@synthesize needsLoveCandidate=_needsLoveCandidate - In the implementation block
@property (retain) NSArray * friendmojis;                                      //@synthesize friendmojis=_friendmojis - In the implementation block
@property (retain) NSDate * birthdayDate;                                      //@synthesize birthdayDate=_birthdayDate - In the implementation block
@property (retain) NSString * snaptagUrl;                                      //@synthesize snaptagUrl=_snaptagUrl - In the implementation block
@property (copy) NSString * sharedStoryDescription;                            //@synthesize sharedStoryDescription=_sharedStoryDescription - In the implementation block
@property (assign) BOOL hasCustomDescriptionForSharedStory;                    //@synthesize hasCustomDescriptionForSharedStory=_hasCustomDescriptionForSharedStory - In the implementation block
@property (copy) NSString * sharedStoryId;                                     //@synthesize sharedStoryId=_sharedStoryId - In the implementation block
@property (copy) NSString * sharedStoryVenue;                                  //@synthesize sharedStoryVenue=_sharedStoryVenue - In the implementation block
@property (assign) BOOL sharedLocalStory;                                      //@synthesize sharedLocalStory=_sharedLocalStory - In the implementation block
@property (copy) NSString * storyPrivacy;                                      //@synthesize storyPrivacy=_storyPrivacy - In the implementation block
@property (copy) NSString * bitmojiAvatarId;                                   //@synthesize bitmojiAvatarId=_bitmojiAvatarId - In the implementation block
@property (copy) NSString * bitmojiSelfieId;                                   //@synthesize bitmojiSelfieId=_bitmojiSelfieId - In the implementation block
@property (readonly) BOOL unVerifiedByServer;                                  //@synthesize unVerifiedByServer=_unVerifiedByServer - In the implementation block
@property (retain) SOJUSecurityFideliusFriendInfo * fideliusInfo;              //@synthesize fideliusInfo=_fideliusInfo - In the implementation block
@property (assign) BOOL shouldSendClearTextKey;                                //@synthesize shouldSendClearTextKey=_shouldSendClearTextKey - In the implementation block
@property (assign,nonatomic) BOOL isPopular;                                   //@synthesize isPopular=_isPopular - In the implementation block
@property (assign,nonatomic) BOOL isMuted;                                     //@synthesize isMuted=_isMuted - In the implementation block
@property (assign) unsigned long long pendingSnapCount;                        //@synthesize pendingSnapCount=_pendingSnapCount - In the implementation block
@property (assign) unsigned long long pendingChatCount;                        //@synthesize pendingChatCount=_pendingChatCount - In the implementation block
@property (assign) unsigned long long potentialHighQualityScore;               //@synthesize potentialHighQualityScore=_potentialHighQualityScore - In the implementation block
@property (retain) NSNumber * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long type;                                             //@synthesize type=_type - In the implementation block
@property (assign) long long snapStreakCount;                                  //@synthesize snapStreakCount=_snapStreakCount - In the implementation block
@property (assign) long long snapStreakFilterLastUsed;                         //@synthesize snapStreakFilterLastUsed=_snapStreakFilterLastUsed - In the implementation block
@property (retain) NSNumber * score;                                           //@synthesize score=_score - In the implementation block
@property (copy) NSDate * lastInteractionTimestamp;                            //@synthesize lastInteractionTimestamp=_lastInteractionTimestamp - In the implementation block
@property (retain) NSDate * friendAddedAt;                                     //@synthesize friendAddedAt=_friendAddedAt - In the implementation block
@property (retain) NSDate * friendRequestSentAt;                               //@synthesize friendRequestSentAt=_friendRequestSentAt - In the implementation block
+(id)firstNameForName:(id)arg1 ;
+(id)friendWithAddedFriend:(id)arg1 ;
+(id)friendWithSuggestedFriend:(id)arg1 ;
+(BOOL)isSnapStreakExpiringEmoji:(id)arg1 ;
-(NSString *)bitmojiAvatarId;
-(NSString *)bitmojiSelfieId;
-(void)setBitmojiAvatarId:(NSString *)arg1 ;
-(void)setBitmojiSelfieId:(NSString *)arg1 ;
-(NSString *)storyPrivacy;
-(BOOL)canSeeCustomStories;
-(BOOL)isSharedStory;
-(NSString *)sharedStoryId;
-(BOOL)autoAdded;
-(NSArray *)friendmojis;
-(long long)snapStreakCount;
-(unsigned long long)potentialHighQualityScore;
-(SOJUSecurityFideliusFriendInfo *)fideliusInfo;
-(BOOL)isPopular;
-(void)setStoryPrivacy:(NSString *)arg1 ;
-(void)setCanSeeCustomStories:(BOOL)arg1 ;
-(void)setIsSharedStory:(BOOL)arg1 ;
-(void)setSharedStoryId:(NSString *)arg1 ;
-(void)setAutoAdded:(BOOL)arg1 ;
-(void)setFriendmojis:(NSArray *)arg1 ;
-(void)setSnapStreakCount:(long long)arg1 ;
-(void)setPotentialHighQualityScore:(unsigned long long)arg1 ;
-(void)setFideliusInfo:(SOJUSecurityFideliusFriendInfo *)arg1 ;
-(void)setIsPopular:(BOOL)arg1 ;
-(BOOL)isRecommended;
-(BOOL)isOfficial;
-(NSDate *)lastInteractionTimestamp;
-(void)setLastInteractionTimestamp:(NSDate *)arg1 ;
-(NSString *)suggestReasonDisplay;
-(BOOL)shouldSendClearTextKey;
-(unsigned long long)pendingSnapCount;
-(unsigned long long)pendingChatCount;
-(NSNumber *)contactBasedRecommendationScore;
-(BOOL)isRecentlyAddedFriend;
-(id)nameToDisplay;
-(BOOL)matchesByUsername:(id)arg1 ;
-(BOOL)matchesByDisplayName:(id)arg1 ;
-(BOOL)matchesForOfficialStorySearch:(id)arg1 ;
-(BOOL)matchesPrefix:(id)arg1 ;
-(BOOL)matchesByPartialName:(id)arg1 ;
-(BOOL)matchesByDisplayAndUserNames:(id)arg1 ;
-(unsigned long long)matchType:(id)arg1 ;
-(void)setNewLink:(BOOL)arg1 ;
-(void)setPendingSnapCount:(unsigned long long)arg1 ;
-(void)setPendingChatCount:(unsigned long long)arg1 ;
-(BOOL)newLink;
-(id)initWithSoju:(id)arg1 ;
-(id)initWithFriend:(id)arg1 ;
-(void)setSuggestReasonDisplay:(NSString *)arg1 ;
-(void)setFriendRequestSentAt:(NSDate *)arg1 ;
-(void)setFriendAddedAt:(NSDate *)arg1 ;
-(void)setHasCustomDescriptionForSharedStory:(BOOL)arg1 ;
-(void)setSharedStoryVenue:(NSString *)arg1 ;
-(void)setSharedLocalStory:(BOOL)arg1 ;
-(void)setNeedsLoveCandidate:(BOOL)arg1 ;
-(void)setIsRecommended:(BOOL)arg1 ;
-(void)setContactBasedRecommendationScore:(NSNumber *)arg1 ;
-(void)setIsSuggestedFriend:(BOOL)arg1 ;
-(BOOL)hasCustomDescriptionForSharedStory;
-(NSString *)sharedStoryVenue;
-(BOOL)sharedLocalStory;
-(BOOL)needsLoveCandidate;
-(long long)snapStreakFilterLastUsed;
-(void)setSnapStreakFilterLastUsed:(long long)arg1 ;
-(void)_initNewFriendFields;
-(id)initDummyUserWithUsername:(id)arg1 displayName:(id)arg2 userId:(id)arg3 ;
-(void)setIsVerified:(BOOL)arg1 ;
-(void)setSearchKeywords:(id)arg1 ;
-(id)initDummyUserWithUsername:(id)arg1 displayName:(id)arg2 userId:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5 ;
-(id)initDummyUserWithUsername:(id)arg1 displayName:(id)arg2 userId:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5 isPopular:(BOOL)arg6 ;
-(id)initTempFriendWithUsername:(id)arg1 displayName:(id)arg2 ;
-(NSString *)atomicName;
-(void)setAtomicName:(NSString *)arg1 ;
-(NSString *)snaptagUrl;
-(NSDate *)friendAddedAt;
-(NSDate *)friendRequestSentAt;
-(void)setSnaptagUrl:(NSString *)arg1 ;
-(void)setShouldSendClearTextKey:(BOOL)arg1 ;
-(BOOL)isEqualToFriend:(id)arg1 ;
-(BOOL)keywordMatchesCleanedQuery:(id)arg1 ;
-(void)setAtomicSearchKeywords:(NSSet *)arg1 ;
-(NSSet *)atomicSearchKeywords;
-(id)searchKeywords;
-(void)setSearchDisplayReason:(NSString *)arg1 ;
-(BOOL)hasBirthdayToday;
-(id)getFriendmojisWithoutSnapStreakMojis;
-(id)getSnapStreakExpiringTimeStamp;
-(id)getBirthday;
-(id)initWithFindFriendsContact:(id)arg1 ;
-(id)initWithSuggestedFriend:(id)arg1 ;
-(id)initFromVerifiedUserSearchResultWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 friendmoji:(id)arg4 searchKeywords:(id)arg5 ;
-(id)initUnverifiedUserWithUsername:(id)arg1 ;
-(id)initTempFriendWithUsername:(id)arg1 ;
-(BOOL)matchesByDisplayFirstName:(id)arg1 ;
-(BOOL)matchesByDisplayLastName:(id)arg1 ;
-(id)firstNameToDisplay;
-(BOOL)isRecentlyAdded;
-(id)updateWithFriend:(id)arg1 ;
-(BOOL)hasFriendmoji;
-(void)setSnapStreakMetadataWithExpiryTime:(id)arg1 withCount:(long long)arg2 ;
-(void)removeSnapStreak;
-(BOOL)isInvitedFriend;
-(BOOL)isCurrentFriend;
-(void)clearCachedIsOfficialValue;
-(id)asBitmojiUser;
-(BOOL)isSuggestedFriend;
-(NSString *)searchDisplayReason;
-(NSString *)sharedStoryDescription;
-(void)setSharedStoryDescription:(NSString *)arg1 ;
-(BOOL)unVerifiedByServer;
-(id)javascriptRepresentation;
-(id)initWithJavascriptRepresentation:(id)arg1 ;
-(BOOL)matches:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)timestamp;
-(void)setName:(id)arg1 ;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)identifier;
-(NSString *)display;
-(void)setType:(long long)arg1 ;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(long long)type;
-(id)duplicate;
-(id)initWithName:(id)arg1 ;
-(BOOL)hidden;
-(void)setScore:(NSNumber *)arg1 ;
-(NSString *)birthday;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)ignored;
-(void)setIgnored:(BOOL)arg1 ;
-(void)setBirthday:(NSString *)arg1 ;
-(id)toDictionary;
-(NSNumber *)score;
-(BOOL)isMuted;
-(BOOL)isVerified;
-(BOOL)hasDisplay;
-(void)setDisplay:(NSString *)arg1 ;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isSubscribable;
-(id)getKey;
-(void)setExpiration:(NSDate *)arg1 ;
-(NSDate *)expiration;
-(NSDate *)birthdayDate;
-(void)setBirthdayDate:(NSDate *)arg1 ;
-(void)setSuggestionToken:(NSString *)arg1 ;
-(NSString *)suggestionToken;
@end
