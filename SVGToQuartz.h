/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface SVGToQuartz : NSObject
+(id)valueForStyleAttribute:(id)arg1 fromDefinition:(id)arg2 ;
+(id)dictionaryForStyleAttributeString:(id)arg1 ;
+(id)styleAttributeStringForDictionary:(id)arg1 ;
+(void)setupLineWidthForQuartzContext:(CGContextRef)arg1 withSVGStrokeString:(id)arg2 withVectorEffect:(id)arg3 withSVGContext:(id)arg4 ;
+(void)setupMiterLimitForQuartzContext:(CGContextRef)arg1 withSVGMiterLimitString:(id)arg2 ;
+(void)setupMiterForQuartzContext:(CGContextRef)arg1 withSVGMiterString:(id)arg2 ;
+(void)setupLineEndForQuartzContext:(CGContextRef)arg1 withSVGLineEndString:(id)arg2 ;
+(void)setupLineDashForQuartzContext:(CGContextRef)arg1 withSVGDashArray:(id)arg2 andPhase:(id)arg3 ;
+(void)setupColorForQuartzContext:(CGContextRef)arg1 withColorString:(id)arg2 withSVGContext:(id)arg3 ;
+(void)setupOpacityForQuartzContext:(CGContextRef)arg1 withSVGOpacity:(id)arg2 ;
+(BOOL)attributeHasDisplaySetToNone:(id)arg1 ;
+(void)imageAtXLinkPath:(id)arg1 orAtRelativeFilePath:(id)arg2 withSVGContext:(id)arg3 intoCallback:(/*^block*/id)arg4 ;
+(CGRect)aspectRatioDrawRectFromString:(id)arg1 givenBounds:(CGRect)arg2 naturalSize:(CGSize)arg3 ;
+(void)LogQuartzContextState:(CGContextRef)arg1 ;
@end
