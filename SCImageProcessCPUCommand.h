/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCImageProcessCommand.h>

@interface SCImageProcessCPUCommand : SCImageProcessCommand
-(void)drawWithPixelWidth:(unsigned long long)arg1 pixelHeight:(unsigned long long)arg2 outputWidth:(unsigned long long)arg3 outputHeight:(unsigned long long)arg4 renderRange:(SCD_Struct_SC425)arg5 orientation:(long long)arg6 viewportTransform:(CGAffineTransform)arg7 ;
-(id)runWithContext:(id)arg1 pixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 outputWidth:(unsigned long long)arg5 outputHeight:(unsigned long long)arg6 renderRange:(SCD_Struct_SC425)arg7 orientation:(long long)arg8 viewportTransform:(CGAffineTransform)arg9 ;
-(id)runWithContext:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 outputPixelBuffer:(CVBufferRef)arg3 orientation:(long long)arg4 ;
-(BOOL)isGPUPass;
-(id)init;
-(BOOL)isLoaded;
-(void)load;
-(void)unload;
@end

