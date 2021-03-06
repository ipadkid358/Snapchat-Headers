/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCVideoChatAnimationTimingFunction;

@interface SCTV3Animation : NSObject {

	SCVideoChatAnimationTimingFunction* _timingFunction;
	double _fromInterval;
	double _toInterval;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) double fromInterval;              //@synthesize fromInterval=_fromInterval - In the implementation block
@property (nonatomic,readonly) double toInterval;                //@synthesize toInterval=_toInterval - In the implementation block
@property (nonatomic,readonly) id completion;                    //@synthesize completion=_completion - In the implementation block
+(void)setSpeed:(double)arg1 ;
-(id)initWithCurve:(unsigned long long)arg1 fromInterval:(double)arg2 toInterval:(double)arg3 completion:(/*^block*/id)arg4 ;
-(double)deltaAtInterval:(double)arg1 ;
-(void)updateForInterval:(double)arg1 ;
-(double)fromInterval;
-(double)toInterval;
-(void)logAddition;
-(void)logSkipping:(id)arg1 ;
-(void)logUpdate;
-(void)logRemoval;
-(id)completion;
@end

