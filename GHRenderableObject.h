/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SVGAttributedObject.h>
#import <Snapchat/GHRenderable.h>

@class NSDictionary, UIColor, NSString;

@interface GHRenderableObject : SVGAttributedObject <GHRenderable> {

	CGAffineTransform transform;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;                        //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,readonly) NSString * defaultFillColor; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSDictionary * attributes; 
+(void)setupContext:(CGContextRef)arg1 withAttributes:(id)arg2 withSVGContext:(id)arg3 ;
+(CGRect)boundingBoxForRenderableObject:(id)arg1 withSVGContext:(id)arg2 givenParentObjectsBounds:(CGRect)arg3 ;
-(CGRect)getBoundingBoxWithSVGContext:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 withSVGContext:(id)arg2 ;
-(unsigned)getClippingTypeWithSVGContext:(id)arg1 ;
-(id)valueForStyleAttribute:(id)arg1 ;
-(void)setupContext:(CGContextRef)arg1 withAttributes:(id)arg2 withSVGContext:(id)arg3 ;
-(void)addToClipForContext:(CGContextRef)arg1 withSVGContext:(id)arg2 objectBoundingBox:(CGRect)arg3 ;
-(id)findRenderableObject:(CGPoint)arg1 withSVGContext:(id)arg2 ;
-(void)addToClipPathForContext:(CGContextRef)arg1 withSVGContext:(id)arg2 objectBoundingBox:(CGRect)arg3 ;
-(void)addNamedObjects:(id)arg1 ;
-(NSString *)defaultFillColor;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(CGAffineTransform)transform;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(BOOL)hitTest:(CGPoint)arg1 ;
-(BOOL)hidden;
@end

