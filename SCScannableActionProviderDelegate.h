/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCScannableActionProviderDelegate <NSObject>
@required
-(void)handleSuccessWithScannableActions:(id)arg1 responseDictionary:(id)arg2 scanData:(id)arg3 scannableId:(id)arg4 codeType:(int)arg5 version:(int)arg6 pageType:(long long)arg7 unlockProperties:(id)arg8;
-(void)handleErrorWithResponseDictionary:(id)arg1 errorData:(id)arg2;
-(void)timeoutTimerFired;

@end
