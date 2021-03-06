/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/GHRenderableObject.h>

@class NSString;

@interface GHShape : GHRenderableObject {

	BOOL isClosed;
	NSString* _strokeColor;
	CGPathRef _quartzPath;

}

@property (nonatomic,readonly) NSString * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,readonly) BOOL isClosed; 
@property (nonatomic,readonly) CGPathRef quartzPath;                //@synthesize quartzPath=_quartzPath - In the implementation block
-(CGRect)getBoundingBoxWithSVGContext:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 withSVGContext:(id)arg2 ;
-(unsigned)getClippingTypeWithSVGContext:(id)arg1 ;
-(CGPathRef)quartzPath;
-(void)setupContext:(CGContextRef)arg1 withAttributes:(id)arg2 withSVGContext:(id)arg3 ;
-(void)addToClipForContext:(CGContextRef)arg1 withSVGContext:(id)arg2 objectBoundingBox:(CGRect)arg3 ;
-(void)addToClipPathForContext:(CGContextRef)arg1 withSVGContext:(id)arg2 objectBoundingBox:(CGRect)arg3 ;
-(CGPathRef)newQuartzPath;
-(void)addPathToQuartzContext:(CGContextRef)arg1 ;
-(void)dealloc;
-(NSString *)strokeColor;
-(BOOL)hitTest:(CGPoint)arg1 ;
-(BOOL)isClosed;
@end

