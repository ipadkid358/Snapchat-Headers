/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, SCWeakTimerTarget;

@interface SCWeakTimer : NSObject {

	NSTimer* _timer;
	SCWeakTimerTarget* _target;

}

@property (nonatomic,retain) NSTimer * timer;                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) SCWeakTimerTarget * target;              //@synthesize target=_target - In the implementation block
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 repeats:(BOOL)arg4 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
-(id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
-(void)dealloc;
-(void)invalidate;
-(void)setTarget:(SCWeakTimerTarget *)arg1 ;
-(SCWeakTimerTarget *)target;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
@end
