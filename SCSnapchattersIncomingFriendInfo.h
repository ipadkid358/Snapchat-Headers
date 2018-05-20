/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCSnapchattersIncomingFriendInfo : NSObject <NSCopying> {

	BOOL _isFriendRequestIgnored;
	unsigned _pendingSnapCount;
	unsigned _pendingChatCount;
	unsigned _potentialHighQualityScore;
	NSString* _addSource;
	double _addedByFriendTimestamp;

}

@property (nonatomic,readonly) unsigned pendingSnapCount;                       //@synthesize pendingSnapCount=_pendingSnapCount - In the implementation block
@property (nonatomic,readonly) unsigned pendingChatCount;                       //@synthesize pendingChatCount=_pendingChatCount - In the implementation block
@property (nonatomic,readonly) unsigned potentialHighQualityScore;              //@synthesize potentialHighQualityScore=_potentialHighQualityScore - In the implementation block
@property (nonatomic,copy,readonly) NSString * addSource;                       //@synthesize addSource=_addSource - In the implementation block
@property (nonatomic,readonly) double addedByFriendTimestamp;                   //@synthesize addedByFriendTimestamp=_addedByFriendTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL isFriendRequestIgnored;                     //@synthesize isFriendRequestIgnored=_isFriendRequestIgnored - In the implementation block
-(NSString *)addSource;
-(unsigned)potentialHighQualityScore;
-(double)addedByFriendTimestamp;
-(id)initWithPendingSnapCount:(unsigned)arg1 pendingChatCount:(unsigned)arg2 potentialHighQualityScore:(unsigned)arg3 addSource:(id)arg4 addedByFriendTimestamp:(double)arg5 isFriendRequestIgnored:(BOOL)arg6 ;
-(unsigned)pendingSnapCount;
-(unsigned)pendingChatCount;
-(BOOL)isFriendRequestIgnored;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
