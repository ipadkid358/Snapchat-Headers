/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSImagePadder <NSObject>
@property (assign,nonatomic,__weak) id<MTLDevice> device; 
@property (assign,nonatomic,__weak) id<MTLLibrary> library; 
@required
-(void)encodeToCommandBuffer:(id)arg1 src:(id)arg2 dst:(id)arg3 padTop:(unsigned long long)arg4 padBottom:(unsigned long long)arg5 padLeft:(unsigned long long)arg6 padRight:(unsigned long long)arg7;
-(id<MTLLibrary>)library;
-(void)setLibrary:(id)arg1;
-(id<MTLDevice>)device;
-(void)setDevice:(id)arg1;

@end

