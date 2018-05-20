/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/MGLStyleLayer.h>

@class MGLStyleValue;

@interface MGLBackgroundStyleLayer : MGLStyleLayer

@property (nonatomic,readonly) BackgroundLayer* rawLayer; 
@property (nonatomic,retain) MGLStyleValue * backgroundColor; 
@property (assign,nonatomic) MGLTransition backgroundColorTransition; 
@property (nonatomic,retain) MGLStyleValue * backgroundOpacity; 
@property (assign,nonatomic) MGLTransition backgroundOpacityTransition; 
@property (nonatomic,retain) MGLStyleValue * backgroundPattern; 
@property (assign,nonatomic) MGLTransition backgroundPatternTransition; 
-(void)setBackgroundColorTransition:(MGLTransition)arg1 ;
-(MGLTransition)backgroundColorTransition;
-(void)setBackgroundOpacity:(MGLStyleValue *)arg1 ;
-(MGLStyleValue *)backgroundOpacity;
-(void)setBackgroundOpacityTransition:(MGLTransition)arg1 ;
-(MGLTransition)backgroundOpacityTransition;
-(void)setBackgroundPattern:(MGLStyleValue *)arg1 ;
-(MGLStyleValue *)backgroundPattern;
-(void)setBackgroundPatternTransition:(MGLTransition)arg1 ;
-(MGLTransition)backgroundPatternTransition;
-(BackgroundLayer*)rawLayer;
-(void)setBackgroundColor:(MGLStyleValue *)arg1 ;
-(MGLStyleValue *)backgroundColor;
-(id)initWithIdentifier:(id)arg1 ;
@end

