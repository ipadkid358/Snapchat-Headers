/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLLibrary;
@interface MPSImageUpsampleLayer : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;

}

@property (assign,nonatomic,__weak) id<MTLDevice> device;                //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<MTLLibrary> library;              //@synthesize library=_library - In the implementation block
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 src:(id)arg2 dst:(id)arg3 ;
-(id<MTLLibrary>)library;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
@end
