/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTableIndexConfiguration.h>

@class NSString, UIColor;

@interface SCStoriesTableIndexConfiguration : NSObject <SCTableIndexConfiguration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double scrollBarPressedWidth; 
@property (nonatomic,readonly) double scrollBarFastScrollingMinimumWidth; 
@property (nonatomic,readonly) UIColor * scrollBarColor; 
@property (nonatomic,readonly) UIColor * scrollBarBackgroundColor; 
@property (nonatomic,readonly) UIColor * scrollBarLabelTextColor; 
@property (nonatomic,readonly) BOOL supportsRTL; 
@property (nonatomic,readonly) UIColor * transitionScrollBarColor; 
+(id)configuration;
-(double)scrollBarPressedWidth;
-(double)scrollBarFastScrollingMinimumWidth;
-(UIColor *)scrollBarColor;
-(UIColor *)scrollBarBackgroundColor;
-(UIColor *)scrollBarLabelTextColor;
-(BOOL)supportsRTL;
-(UIColor *)transitionScrollBarColor;
@end

