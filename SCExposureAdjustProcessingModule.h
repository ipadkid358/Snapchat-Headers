/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCProcessingModule.h>

@class CIContext, CIFilter, NSString;

@interface SCExposureAdjustProcessingModule : NSObject <SCProcessingModule> {

	CIContext* _context;
	CIFilter* _filter;
	CFDictionaryRef _attributes;
	CVPixelBufferPoolRef _bufferPool;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)requiresDepthData;
-(void)setEVValue:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(opaqueCMSampleBufferRef)render:(RenderData*)arg1 ;
@end
