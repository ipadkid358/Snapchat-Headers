/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCCrashedLensIdProvider;
@class SCLensCrashLoggerStore;

@interface SCLensCrashLogger : NSObject {

	id<SCCrashedLensIdProvider> _crashedLensIdProvider;
	SCLensCrashLoggerStore* _crashLoggerStore;

}
+(void)logCrashError:(id)arg1 selector:(SEL)arg2 ;
+(void)logCrashError:(id)arg1 lensId:(id)arg2 selector:(SEL)arg3 ;
+(/*^block*/id)defaultErrorHandlerWithSelector:(SEL)arg1 ;
+(/*^block*/id)handlerWithLensId:(id)arg1 selector:(SEL)arg2 ;
+(void)logCrashWithReasonIfNecessary:(id)arg1 ;
-(void)logCrashError:(id)arg1 selector:(SEL)arg2 ;
-(/*^block*/id)defaultErrorHandlerWithSelector:(SEL)arg1 ;
-(id)initWithCrashedLensIdProvider:(id)arg1 ;
@end

