/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCLens;

@interface SCLensReadyEvent : NSObject {

	NSString* _uniqueId;
	NSString* _lensSessionId;
	SCLens* _lens;
	double _startTime;

}

@property (nonatomic,readonly) SCLens * lens;                 //@synthesize lens=_lens - In the implementation block
@property (nonatomic,readonly) double startTime;              //@synthesize startTime=_startTime - In the implementation block
-(SCLens *)lens;
-(id)_eventParameters;
-(void)_logEventWithSuccess:(BOOL)arg1 endTime:(double)arg2 ;
-(id)initWithLens:(id)arg1 lensSessionId:(id)arg2 startTime:(double)arg3 ;
-(void)logSuccessEventAtTime:(double)arg1 ;
-(void)logFailureEventAtTime:(double)arg1 ;
-(double)startTime;
@end
