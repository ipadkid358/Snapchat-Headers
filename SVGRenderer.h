/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SVGParser.h>
#import <Snapchat/SVGContext.h>
#import <Snapchat/GHRenderable.h>

@class GHShapeGroup, NSMutableDictionary, NSDictionary, UIColor, NSString;

@interface SVGRenderer : SVGParser <SVGContext, GHRenderable> {

	GHShapeGroup* _contents;
	NSMutableDictionary* _colorMap;
	NSDictionary* _namedObjects;
	UIColor* _currentColor;
	NSString* _isoLanguage;
	CGAffineTransform _transform;

}

@property (nonatomic,retain) NSMutableDictionary * colorMap;              //@synthesize colorMap=_colorMap - In the implementation block
@property (nonatomic,retain) NSDictionary * namedObjects;                 //@synthesize namedObjects=_namedObjects - In the implementation block
@property (nonatomic,retain) UIColor * currentColor;                      //@synthesize currentColor=_currentColor - In the implementation block
@property (nonatomic,retain) NSString * isoLanguage;                      //@synthesize isoLanguage=_isoLanguage - In the implementation block
@property (nonatomic,readonly) GHShapeGroup * contents;                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) CGRect viewRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGAffineTransform transform;               //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSDictionary * attributes; 
+(id)rendererQueue;
+(id)defaultAttributes;
-(CGRect)viewRect;
-(CGRect)getBoundingBoxWithSVGContext:(id)arg1 ;
-(id)objectAtURL:(id)arg1 ;
-(id)colorForSVGColorString:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 withSVGContext:(id)arg2 ;
-(unsigned)getClippingTypeWithSVGContext:(id)arg1 ;
-(id)objectNamed:(id)arg1 ;
-(void)addToClipForContext:(CGContextRef)arg1 withSVGContext:(id)arg2 objectBoundingBox:(CGRect)arg3 ;
-(id)findRenderableObject:(CGPoint)arg1 withSVGContext:(id)arg2 ;
-(void)addToClipPathForContext:(CGContextRef)arg1 withSVGContext:(id)arg2 objectBoundingBox:(CGRect)arg3 ;
-(NSString *)isoLanguage;
-(NSDictionary *)namedObjects;
-(double)explicitLineScaling;
-(void)renderIntoContext:(CGContextRef)arg1 ;
-(id)findRenderableObject:(CGPoint)arg1 ;
-(void)setNamedObjects:(NSDictionary *)arg1 ;
-(void)setIsoLanguage:(NSString *)arg1 ;
-(CGAffineTransform)transform;
-(GHShapeGroup *)contents;
-(id)initWithString:(id)arg1 ;
-(NSDictionary *)attributes;
-(id)initWithContentsOfURL:(id)arg1 ;
-(BOOL)hidden;
-(UIColor *)currentColor;
-(void)setCurrentColor:(UIColor *)arg1 ;
-(NSMutableDictionary *)colorMap;
-(void)setColorMap:(NSMutableDictionary *)arg1 ;
@end

