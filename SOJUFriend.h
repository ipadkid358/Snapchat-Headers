/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUFriend.h>
@class NSString, NSNumber, NSArray, SOJUSecurityFideliusFriendInfo, NSDictionary;


@protocol SOJUFriend <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSNumber * type; 
@property (nonatomic,copy,readonly) NSString * display; 
@property (nonatomic,copy,readonly) NSString * birthday; 
@property (nonatomic,copy,readonly) NSNumber * ts; 
@property (nonatomic,copy,readonly) NSNumber * reverseTs; 
@property (nonatomic,copy,readonly) NSString * direction; 
@property (nonatomic,copy,readonly) NSString * storyPrivacy; 
@property (nonatomic,copy,readonly) NSNumber * canSeeCustomStories; 
@property (nonatomic,copy,readonly) NSNumber * pendingSnapsCount; 
@property (nonatomic,copy,readonly) NSNumber * expiration; 
@property (nonatomic,copy,readonly) NSNumber * isSharedStory; 
@property (nonatomic,copy,readonly) NSNumber * hasCustomDescription; 
@property (nonatomic,copy,readonly) NSString * sharedStoryId; 
@property (nonatomic,copy,readonly) NSNumber * localStory; 
@property (nonatomic,copy,readonly) NSNumber * ignoredLink; 
@property (nonatomic,copy,readonly) NSNumber * hiddenLink; 
@property (nonatomic,copy,readonly) NSString * addSource; 
@property (nonatomic,copy,readonly) NSString * addSourceType; 
@property (nonatomic,copy,readonly) NSString * friendmojiString; 
@property (nonatomic,copy,readonly) NSNumber * needsLove; 
@property (nonatomic,copy,readonly) NSNumber * autoAdded; 
@property (nonatomic,copy,readonly) NSNumber * sojuNewLink; 
@property (nonatomic,copy,readonly) NSNumber * dontDecayThumbnail; 
@property (nonatomic,copy,readonly) NSString * venue; 
@property (nonatomic,copy,readonly) NSArray * friendmojiSymbols; 
@property (nonatomic,copy,readonly) NSArray * friendmojis; 
@property (nonatomic,copy,readonly) NSNumber * snapStreakCount; 
@property (nonatomic,copy,readonly) NSNumber * snapStreakExpiration; 
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId; 
@property (nonatomic,copy,readonly) NSNumber * potentialHighQualityScore; 
@property (nonatomic,copy,readonly) NSNumber * pendingChatsCount; 
@property (nonatomic,copy,readonly) NSString * bitmojiSelfieId; 
@property (nonatomic,copy,readonly) NSNumber * canBeSharedByFriendsDeprecated; 
@property (nonatomic,copy,readonly) SOJUSecurityFideliusFriendInfo * fideliusInfo; 
@property (nonatomic,copy,readonly) NSString * bitmojiSnapcodeSelfieId; 
@property (nonatomic,copy,readonly) NSDictionary * studySettings; 
@property (nonatomic,copy,readonly) NSNumber * isPopular; 
@property (nonatomic,copy,readonly) NSNumber * isStoryMuted; 
@required
-(NSString *)bitmojiAvatarId;
-(NSString *)bitmojiSelfieId;
-(NSNumber *)ts;
-(NSNumber *)reverseTs;
-(NSString *)storyPrivacy;
-(NSNumber *)canSeeCustomStories;
-(NSNumber *)pendingSnapsCount;
-(NSNumber *)isSharedStory;
-(NSString *)sharedStoryId;
-(NSNumber *)localStory;
-(NSNumber *)ignoredLink;
-(NSNumber *)hiddenLink;
-(NSString *)addSource;
-(NSString *)addSourceType;
-(NSString *)friendmojiString;
-(NSNumber *)needsLove;
-(NSNumber *)autoAdded;
-(NSNumber *)sojuNewLink;
-(NSNumber *)dontDecayThumbnail;
-(NSArray *)friendmojiSymbols;
-(NSArray *)friendmojis;
-(NSNumber *)snapStreakCount;
-(NSNumber *)snapStreakExpiration;
-(NSNumber *)potentialHighQualityScore;
-(NSNumber *)pendingChatsCount;
-(NSNumber *)canBeSharedByFriendsDeprecated;
-(SOJUSecurityFideliusFriendInfo *)fideliusInfo;
-(NSString *)bitmojiSnapcodeSelfieId;
-(NSDictionary *)studySettings;
-(NSNumber *)isPopular;
-(NSNumber *)isStoryMuted;
-(NSString *)name;
-(NSString *)display;
-(NSNumber *)type;
-(NSString *)direction;
-(NSString *)birthday;
-(NSString *)userId;
-(NSNumber *)hasCustomDescription;
-(NSNumber *)expiration;
-(NSString *)venue;

@end


@class NSString, NSNumber, NSArray, SOJUSecurityFideliusFriendInfo, NSDictionary;

@interface SOJUFriend : NSObject <SOJUFriend> {

	NSString* _name;
	NSString* _userId;
	NSNumber* _type;
	NSString* _display;
	NSString* _birthday;
	NSNumber* _ts;
	NSNumber* _reverseTs;
	NSString* _direction;
	NSString* _storyPrivacy;
	NSNumber* _canSeeCustomStories;
	NSNumber* _pendingSnapsCount;
	NSNumber* _expiration;
	NSNumber* _isSharedStory;
	NSNumber* _hasCustomDescription;
	NSString* _sharedStoryId;
	NSNumber* _localStory;
	NSNumber* _ignoredLink;
	NSNumber* _hiddenLink;
	NSString* _addSource;
	NSString* _addSourceType;
	NSString* _friendmojiString;
	NSNumber* _needsLove;
	NSNumber* _autoAdded;
	NSNumber* _sojuNewLink;
	NSNumber* _dontDecayThumbnail;
	NSString* _venue;
	NSArray* _friendmojiSymbols;
	NSArray* _friendmojis;
	NSNumber* _snapStreakCount;
	NSNumber* _snapStreakExpiration;
	NSString* _bitmojiAvatarId;
	NSNumber* _potentialHighQualityScore;
	NSNumber* _pendingChatsCount;
	NSString* _bitmojiSelfieId;
	NSNumber* _canBeSharedByFriendsDeprecated;
	SOJUSecurityFideliusFriendInfo* _fideliusInfo;
	NSString* _bitmojiSnapcodeSelfieId;
	NSDictionary* _studySettings;
	NSNumber* _isPopular;
	NSNumber* _isStoryMuted;

}

@property (nonatomic,copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                                          //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * display;                                         //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) NSString * birthday;                                        //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ts;                                              //@synthesize ts=_ts - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * reverseTs;                                       //@synthesize reverseTs=_reverseTs - In the implementation block
@property (nonatomic,copy,readonly) NSString * direction;                                       //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyPrivacy;                                    //@synthesize storyPrivacy=_storyPrivacy - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * canSeeCustomStories;                             //@synthesize canSeeCustomStories=_canSeeCustomStories - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * pendingSnapsCount;                               //@synthesize pendingSnapsCount=_pendingSnapsCount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * expiration;                                      //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isSharedStory;                                   //@synthesize isSharedStory=_isSharedStory - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hasCustomDescription;                            //@synthesize hasCustomDescription=_hasCustomDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharedStoryId;                                   //@synthesize sharedStoryId=_sharedStoryId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * localStory;                                      //@synthesize localStory=_localStory - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ignoredLink;                                     //@synthesize ignoredLink=_ignoredLink - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hiddenLink;                                      //@synthesize hiddenLink=_hiddenLink - In the implementation block
@property (nonatomic,copy,readonly) NSString * addSource;                                       //@synthesize addSource=_addSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * addSourceType;                                   //@synthesize addSourceType=_addSourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendmojiString;                                //@synthesize friendmojiString=_friendmojiString - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * needsLove;                                       //@synthesize needsLove=_needsLove - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * autoAdded;                                       //@synthesize autoAdded=_autoAdded - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sojuNewLink;                                     //@synthesize sojuNewLink=_sojuNewLink - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * dontDecayThumbnail;                              //@synthesize dontDecayThumbnail=_dontDecayThumbnail - In the implementation block
@property (nonatomic,copy,readonly) NSString * venue;                                           //@synthesize venue=_venue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friendmojiSymbols;                                //@synthesize friendmojiSymbols=_friendmojiSymbols - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friendmojis;                                      //@synthesize friendmojis=_friendmojis - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * snapStreakCount;                                 //@synthesize snapStreakCount=_snapStreakCount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * snapStreakExpiration;                            //@synthesize snapStreakExpiration=_snapStreakExpiration - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId;                                 //@synthesize bitmojiAvatarId=_bitmojiAvatarId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * potentialHighQualityScore;                       //@synthesize potentialHighQualityScore=_potentialHighQualityScore - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * pendingChatsCount;                               //@synthesize pendingChatsCount=_pendingChatsCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiSelfieId;                                 //@synthesize bitmojiSelfieId=_bitmojiSelfieId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * canBeSharedByFriendsDeprecated;                  //@synthesize canBeSharedByFriendsDeprecated=_canBeSharedByFriendsDeprecated - In the implementation block
@property (nonatomic,copy,readonly) SOJUSecurityFideliusFriendInfo * fideliusInfo;              //@synthesize fideliusInfo=_fideliusInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiSnapcodeSelfieId;                         //@synthesize bitmojiSnapcodeSelfieId=_bitmojiSnapcodeSelfieId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * studySettings;                               //@synthesize studySettings=_studySettings - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isPopular;                                       //@synthesize isPopular=_isPopular - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isStoryMuted;                                    //@synthesize isStoryMuted=_isStoryMuted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)bitmojiAvatarId;
-(NSString *)bitmojiSelfieId;
-(id)toJson;
-(long long)typeEnum;
-(long long)tsValue;
-(long long)reverseTsValue;
-(long long)storyPrivacyEnum;
-(BOOL)canSeeCustomStoriesValue;
-(int)pendingSnapsCountValue;
-(long long)expirationValue;
-(BOOL)isSharedStoryValue;
-(BOOL)hasCustomDescriptionValue;
-(BOOL)localStoryValue;
-(BOOL)ignoredLinkValue;
-(BOOL)hiddenLinkValue;
-(long long)addSourceTypeEnum;
-(BOOL)needsLoveValue;
-(BOOL)autoAddedValue;
-(BOOL)sojuNewLinkValue;
-(BOOL)dontDecayThumbnailValue;
-(int)snapStreakCountValue;
-(long long)snapStreakExpirationValue;
-(int)potentialHighQualityScoreValue;
-(int)pendingChatsCountValue;
-(BOOL)canBeSharedByFriendsDeprecatedValue;
-(BOOL)isPopularValue;
-(BOOL)isStoryMutedValue;
-(NSNumber *)ts;
-(NSNumber *)reverseTs;
-(NSString *)storyPrivacy;
-(NSNumber *)canSeeCustomStories;
-(NSNumber *)pendingSnapsCount;
-(NSNumber *)isSharedStory;
-(NSString *)sharedStoryId;
-(NSNumber *)localStory;
-(NSNumber *)ignoredLink;
-(NSNumber *)hiddenLink;
-(NSString *)addSource;
-(NSString *)addSourceType;
-(NSString *)friendmojiString;
-(NSNumber *)needsLove;
-(NSNumber *)autoAdded;
-(NSNumber *)sojuNewLink;
-(NSNumber *)dontDecayThumbnail;
-(NSArray *)friendmojiSymbols;
-(NSArray *)friendmojis;
-(NSNumber *)snapStreakCount;
-(NSNumber *)snapStreakExpiration;
-(NSNumber *)potentialHighQualityScore;
-(NSNumber *)pendingChatsCount;
-(NSNumber *)canBeSharedByFriendsDeprecated;
-(SOJUSecurityFideliusFriendInfo *)fideliusInfo;
-(NSString *)bitmojiSnapcodeSelfieId;
-(NSDictionary *)studySettings;
-(NSNumber *)isPopular;
-(NSNumber *)isStoryMuted;
-(id)initWithName:(id)arg1 userId:(id)arg2 type:(id)arg3 display:(id)arg4 birthday:(id)arg5 ts:(id)arg6 reverseTs:(id)arg7 direction:(id)arg8 storyPrivacy:(id)arg9 canSeeCustomStories:(id)arg10 pendingSnapsCount:(id)arg11 expiration:(id)arg12 isSharedStory:(id)arg13 hasCustomDescription:(id)arg14 sharedStoryId:(id)arg15 localStory:(id)arg16 ignoredLink:(id)arg17 hiddenLink:(id)arg18 addSource:(id)arg19 addSourceType:(id)arg20 friendmojiString:(id)arg21 needsLove:(id)arg22 autoAdded:(id)arg23 sojuNewLink:(id)arg24 dontDecayThumbnail:(id)arg25 venue:(id)arg26 friendmojiSymbols:(id)arg27 friendmojis:(id)arg28 snapStreakCount:(id)arg29 snapStreakExpiration:(id)arg30 bitmojiAvatarId:(id)arg31 potentialHighQualityScore:(id)arg32 pendingChatsCount:(id)arg33 bitmojiSelfieId:(id)arg34 canBeSharedByFriendsDeprecated:(id)arg35 fideliusInfo:(id)arg36 bitmojiSnapcodeSelfieId:(id)arg37 studySettings:(id)arg38 isPopular:(id)arg39 isStoryMuted:(id)arg40 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(NSString *)display;
-(NSNumber *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)direction;
-(NSString *)birthday;
-(NSString *)userId;
-(NSNumber *)hasCustomDescription;
-(id)toDictionary;
-(int)typeValue;
-(NSNumber *)expiration;
-(NSString *)venue;
@end

