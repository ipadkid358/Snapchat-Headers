/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, SOJUBroadcastMobsModelGeofencedMobStoryExtraData;

@interface SOJUBroadcastMobsModelMobStoryAuthBuilder : NSObject {

	NSString* _storyId;
	NSString* _displayName;
	NSString* _subtext;
	NSString* _rankType;
	NSNumber* _lastPostedTimestamp;
	NSNumber* _createdAt;
	NSString* _creator;
	SOJUBroadcastMobsModelGeofencedMobStoryExtraData* _geostoryExtra;
	NSString* _creatorDisplayName;
	NSNumber* _isExpired;
	NSString* _typeVal;

}
+(id)withJUBroadcastMobsModelMobStoryAuth:(id)arg1 ;
-(id)setTypeValEnum:(long long)arg1 ;
-(id)setTypeVal:(id)arg1 ;
-(id)setRankTypeEnum:(long long)arg1 ;
-(id)setLastPostedTimestampValue:(long long)arg1 ;
-(id)setCreatedAtValue:(long long)arg1 ;
-(id)setIsExpiredValue:(BOOL)arg1 ;
-(id)setSubtext:(id)arg1 ;
-(id)setRankType:(id)arg1 ;
-(id)setLastPostedTimestamp:(id)arg1 ;
-(id)setGeostoryExtra:(id)arg1 ;
-(id)setCreatorDisplayName:(id)arg1 ;
-(id)setStoryId:(id)arg1 ;
-(id)setDisplayName:(id)arg1 ;
-(id)build;
-(id)setCreator:(id)arg1 ;
-(id)setIsExpired:(id)arg1 ;
-(id)setCreatedAt:(id)arg1 ;
@end
