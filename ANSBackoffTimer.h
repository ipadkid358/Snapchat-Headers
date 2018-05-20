/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ANSBackoffTimer : NSObject {

	unsigned long long _retryCount;
	double _initialValue;
	double _jitterCoefficient;

}

@property (assign,nonatomic) double initialValue;                        //@synthesize initialValue=_initialValue - In the implementation block
@property (nonatomic,readonly) double jitterCoefficient;                 //@synthesize jitterCoefficient=_jitterCoefficient - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
+(BOOL)jitterCoefficientIsValid:(double)arg1 ;
-(id)initWithInitialValue:(double)arg1 jitterCoefficient:(double)arg2 ;
-(double)computeDelayForInitialValue:(double)arg1 retryCount:(unsigned long long)arg2 ;
-(double)jitterCoefficient;
-(double)randomDoubleWithMin:(double)arg1 max:(double)arg2 ;
-(double)generateRandomJitter;
-(void)executeBlockAfterNextInterval:(/*^block*/id)arg1 ;
-(id)initWithInitialValue:(double)arg1 ;
-(id)init;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(double)initialValue;
-(void)setInitialValue:(double)arg1 ;
@end

