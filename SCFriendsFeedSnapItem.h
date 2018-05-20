/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCFriendsFeedSnapItemState, NSString;

@interface SCFriendsFeedSnapItem : NSObject <NSCopying> {

	BOOL _hasAudio;
	long long _snapSequenceNumber;
	SCFriendsFeedSnapItemState* _snapItemState;
	NSString* _snapMessageId;

}

@property (nonatomic,readonly) BOOL hasAudio;                                                //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,readonly) long long snapSequenceNumber;                                 //@synthesize snapSequenceNumber=_snapSequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) SCFriendsFeedSnapItemState * snapItemState;              //@synthesize snapItemState=_snapItemState - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapMessageId;                                //@synthesize snapMessageId=_snapMessageId - In the implementation block
-(SCFriendsFeedSnapItemState *)snapItemState;
-(id)initWithHasAudio:(BOOL)arg1 snapSequenceNumber:(long long)arg2 snapItemState:(id)arg3 snapMessageId:(id)arg4 ;
-(long long)snapSequenceNumber;
-(NSString *)snapMessageId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAudio;
@end

