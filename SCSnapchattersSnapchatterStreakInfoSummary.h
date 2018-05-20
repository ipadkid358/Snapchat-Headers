/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SCSnapchattersSnapchatterStreakInfoSummary : NSObject <NSCopying> {

	long long _count;
	double _expirationTimestamp;

}

@property (nonatomic,readonly) long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double expirationTimestamp;              //@synthesize expirationTimestamp=_expirationTimestamp - In the implementation block
-(double)expirationTimestamp;
-(id)initWithCount:(long long)arg1 expirationTimestamp:(double)arg2 ;
-(long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

