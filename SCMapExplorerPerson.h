/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMapPerson.h>
#import <Snapchat/SCChatGroupParticipant.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SCXBitmojiSticker, UIColor, NSNumber;

@interface SCMapExplorerPerson : SCMapPerson <SCChatGroupParticipant, NSCopying> {

	NSArray* _locations;
	NSString* _statusId;
	SCXBitmojiSticker* _sticker;
	unsigned long long _pathStyle;
	long long _animationStyle;
	NSString* _locality;

}

@property (nonatomic,readonly) NSArray * locations;                             //@synthesize locations=_locations - In the implementation block
@property (nonatomic,copy,readonly) NSString * statusId;                        //@synthesize statusId=_statusId - In the implementation block
@property (nonatomic,copy,readonly) SCXBitmojiSticker * sticker;                //@synthesize sticker=_sticker - In the implementation block
@property (nonatomic,readonly) unsigned long long pathStyle;                    //@synthesize pathStyle=_pathStyle - In the implementation block
@property (nonatomic,readonly) long long animationStyle;                        //@synthesize animationStyle=_animationStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * locality;                        //@synthesize locality=_locality - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId; 
@property (nonatomic,copy,readonly) NSString * bitmojiSelfieId; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) UIColor * color; 
@property (nonatomic,copy,readonly) NSNumber * talkSessionUserId; 
@property (nonatomic,readonly) unsigned long long mischiefVersion; 
+(id)locationFromSPCGPoint:(id)arg1 ;
+(id)peopleFromSCMEExplorerFriendStatus:(id)arg1 ;
-(unsigned long long)mischiefVersion;
-(NSString *)statusId;
-(id)nameToDisplay;
-(id)nameToDisplayWithUsernameIfNecessary;
-(NSNumber *)talkSessionUserId;
-(id)initWithFriend:(id)arg1 locations:(id)arg2 statusId:(id)arg3 sticker:(id)arg4 pathStyle:(unsigned long long)arg5 animationStyle:(long long)arg6 locality:(id)arg7 ;
-(id)initWithUser:(id)arg1 locations:(id)arg2 statusId:(id)arg3 sticker:(id)arg4 pathStyle:(unsigned long long)arg5 animationStyle:(long long)arg6 locality:(id)arg7 ;
-(unsigned long long)pathStyle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(long long)animationStyle;
-(NSString *)locality;
-(NSArray *)locations;
-(SCXBitmojiSticker *)sticker;
@end

