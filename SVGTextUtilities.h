/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface SVGTextUtilities : NSObject
+(CTFontDescriptorRef)newFontDescriptorFromAttributes:(id)arg1 baseDescriptor:(CTFontDescriptorRef)arg2 ;
+(CTFontRef)newFontRefFromFontDescriptor:(CTFontDescriptorRef)arg1 ;
+(id)cleanXMLText:(id)arg1 ;
+(id)attributedStringFromString:(id)arg1 SVGStyleAttributes:(id)arg2 baseFont:(CTFontRef)arg3 baseFontDescriptor:(CTFontDescriptorRef)arg4 includeParagraphStyle:(BOOL)arg5 ;
+(id)attributedStringFromString:(id)arg1 nonFontSVGStyleAttributes:(id)arg2 baseFont:(CTFontRef)arg3 baseFontDescriptor:(CTFontDescriptorRef)arg4 includeParagraphStyle:(BOOL)arg5 ;
+(id)fontAttributesFromSVGAttributes:(id)arg1 ;
+(id)coreTextAttributesFromSVGStyleAttributes:(id)arg1 ;
+(id)coreTextAttributesFromSVGStyleAttributes:(id)arg1 baseDescriptor:(CTFontDescriptorRef)arg2 ;
+(double)addFontSizeFromSVGStyleAttributes:(id)arg1 toCoreTextAttributes:(id)arg2 ;
+(void)addFontFamilyFromSVGStyleAttributes:(id)arg1 toCoreTextAttributes:(id)arg2 ;
+(void)addFontStyleFromSVGStyleAttributes:(id)arg1 toCoreTextAttributes:(id)arg2 ;
+(void)addFontVariantFromSVGStyleAttributes:(id)arg1 toCoreTextAttributes:(id)arg2 ;
+(void)addfontWeightFromSVGStyleAttributes:(id)arg1 toCoreTextAttributes:(id)arg2 ;
+(void)addFontWidthFromSVGStyleAttributes:(id)arg1 toCoreTextAttributes:(id)arg2 ;
+(void)limitCharacterSetFromSVGStyleAttributes:(id)arg1 toCoreTextAttributes:(id)arg2 ;
+(void)determinePointSizeFromCoreTextAttributes:(id)arg1 givenPixelSize:(double)arg2 ;
+(id)characterSetWithSVGDescription:(id)arg1 ;
+(id)fontSizeFromSVGAttribute:(id)arg1 givenBaseSize:(id)arg2 ;
+(id)fontFamilyAttributesFromSVGAttribute:(id)arg1 higherPriorityAttributes:(id)arg2 ;
+(double)defaultFontSize;
@end

