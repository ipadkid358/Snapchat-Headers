/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSString;

@interface SCSuggestedFriendInformation : NSObject {

	NSString* _userId;
	NSString* _username;
	NSString* _displayName;
	NSString* _storyPrivacy;
	NSString* _bitmojiAvatarId;
	NSString* _bitmojiSelfieId;

}

@property (nonatomic,retain) NSString * userId;                       //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * storyPrivacy;                 //@synthesize storyPrivacy=_storyPrivacy - In the implementation block
@property (nonatomic,retain) NSString * bitmojiAvatarId;              //@synthesize bitmojiAvatarId=_bitmojiAvatarId - In the implementation block
@property (nonatomic,copy) NSString * bitmojiSelfieId;                //@synthesize bitmojiSelfieId=_bitmojiSelfieId - In the implementation block
+(id)initWithFriend:(id)arg1 ;
+(id)initWithSojuSuggestedFriend:(id)arg1 ;
-(NSString *)bitmojiAvatarId;
-(NSString *)bitmojiSelfieId;
-(void)setBitmojiAvatarId:(NSString *)arg1 ;
-(void)setBitmojiSelfieId:(NSString *)arg1 ;
-(NSString *)storyPrivacy;
-(void)setStoryPrivacy:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

