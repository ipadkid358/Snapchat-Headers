/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SCFriendsFeedCellAvatarAnimationViewModel : NSObject <NSCopying> {

	double _duration;
	double _delay;
	double _damping;
	double _velocity;
	unsigned long long _options;

}

@property (nonatomic,readonly) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double delay;                            //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double damping;                          //@synthesize damping=_damping - In the implementation block
@property (nonatomic,readonly) double velocity;                         //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
-(id)initWithDuration:(double)arg1 delay:(double)arg2 damping:(double)arg3 velocity:(double)arg4 options:(unsigned long long)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(double)delay;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)velocity;
-(unsigned long long)options;
-(double)damping;
@end

