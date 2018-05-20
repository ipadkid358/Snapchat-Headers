/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCPBTextShadowParameters;

@interface SCPBGeofilterDisplayParameters : GPBMessage

@property (assign,nonatomic) int size; 
@property (nonatomic,copy) NSString * color; 
@property (nonatomic,copy) NSString * font; 
@property (nonatomic,copy) NSString * staticText; 
@property (nonatomic,copy) NSString * align; 
@property (assign,nonatomic) float textAlpha; 
@property (nonatomic,retain) SCPBTextShadowParameters * textShadow; 
@property (assign,nonatomic) BOOL hasTextShadow; 
@property (assign,nonatomic) BOOL autoResizeEnabled; 
@property (nonatomic,copy) NSString * fallbackText; 
@property (assign,nonatomic) int maxFontSize; 
@property (nonatomic,copy) NSString * dynamicText; 
@property (nonatomic,copy) NSString * targetDatetime; 
@property (nonatomic,copy) NSString * targetDatetimeDirection; 
@property (nonatomic,copy) NSString * capitalization; 
@property (nonatomic,copy) NSString * calculatedDynamicText; 
@property (nonatomic,copy) NSString * fallbackMethod; 
+(id)descriptor;
@end

