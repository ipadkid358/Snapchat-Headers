/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCImageProcessCPUCommand.h>

@interface SCImageProcessCPUIdentityYUVBGRCommand : SCImageProcessCPUCommand
+(id)sharedCommand;
-(id)runWithContext:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 outputPixelBuffer:(CVBufferRef)arg3 orientation:(long long)arg4 ;
-(void)_processPixelBufferWithOrientation:(long long)arg1 yInPtr:(char*)arg2 yWidth:(unsigned long long)arg3 yHeight:(unsigned long long)arg4 yBytesPerRow:(unsigned long long)arg5 uvInPtr:(unsigned short*)arg6 uvWidth:(unsigned long long)arg7 uvHeight:(unsigned long long)arg8 uvBytesPerRow:(unsigned long long)arg9 outPtr:(char*)arg10 outWidth:(unsigned long long)arg11 outHeight:(unsigned long long)arg12 outBytesPerRow:(unsigned long long)arg13 ;
@end

