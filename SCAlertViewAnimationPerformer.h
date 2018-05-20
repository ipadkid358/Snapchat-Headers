/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCAlertViewAnimationPerformer : NSObject
+(void)performNoAnimationPresentationForAlertView:(id)arg1 inView:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)performDefaultPresentationForAlertView:(id)arg1 inView:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)performFlowPresentationForAlertView:(id)arg1 inView:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)performNoAnimationDismissalForAlertView:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)performDefaultDismissalForAlertView:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)performFlowDismissalForAlertView:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)presentView:(id)arg1 inView:(id)arg2 withPresentationType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(void)dismissView:(id)arg1 withDismissalType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

