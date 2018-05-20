/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCSnapchattersSnapchatterBasicSummary, SCSnapchattersSnapchatterStreakInfoSummary, NSString;

@interface SCSnapchattersSnapchatterSummary : NSObject <NSCopying> {

	BOOL _isStoryMuted;
	BOOL _isFriendshipPending;
	SCSnapchattersSnapchatterBasicSummary* _basicSummary;
	SCSnapchattersSnapchatterStreakInfoSummary* _streakInfo;
	NSString* _friendmojis;
	double _addedFriendTimestamp;
	double _reverseAddedFriendTimestamp;
	double _birthday;

}

@property (nonatomic,copy,readonly) SCSnapchattersSnapchatterBasicSummary * basicSummary;                 //@synthesize basicSummary=_basicSummary - In the implementation block
@property (nonatomic,copy,readonly) SCSnapchattersSnapchatterStreakInfoSummary * streakInfo;              //@synthesize streakInfo=_streakInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendmojis;                                               //@synthesize friendmojis=_friendmojis - In the implementation block
@property (nonatomic,readonly) double addedFriendTimestamp;                                               //@synthesize addedFriendTimestamp=_addedFriendTimestamp - In the implementation block
@property (nonatomic,readonly) double reverseAddedFriendTimestamp;                                        //@synthesize reverseAddedFriendTimestamp=_reverseAddedFriendTimestamp - In the implementation block
@property (nonatomic,readonly) double birthday;                                                           //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,readonly) BOOL isStoryMuted;                                                         //@synthesize isStoryMuted=_isStoryMuted - In the implementation block
@property (nonatomic,readonly) BOOL isFriendshipPending;                                                  //@synthesize isFriendshipPending=_isFriendshipPending - In the implementation block
-(NSString *)friendmojis;
-(BOOL)isStoryMuted;
-(id)initWithBasicSummary:(id)arg1 streakInfo:(id)arg2 friendmojis:(id)arg3 addedFriendTimestamp:(double)arg4 reverseAddedFriendTimestamp:(double)arg5 birthday:(double)arg6 isStoryMuted:(BOOL)arg7 isFriendshipPending:(BOOL)arg8 ;
-(SCSnapchattersSnapchatterBasicSummary *)basicSummary;
-(SCSnapchattersSnapchatterStreakInfoSummary *)streakInfo;
-(double)addedFriendTimestamp;
-(double)reverseAddedFriendTimestamp;
-(BOOL)isFriendshipPending;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)birthday;
@end

