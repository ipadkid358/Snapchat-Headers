/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, SCCornerRadii;

@interface SCSearchStoriesTabBarConfiguration : NSObject <NSCopying> {

	long long _tabContentMode;
	double _minimumInteritemSpacing;
	double _sliderPreferredHeight;
	UIColor* _sliderHighlightColor;
	UIColor* _sliderBackgroundColor;
	double _tabBarPreferredHeight;
	UIColor* _tabBarBackgroundColor;
	SCCornerRadii* _cornerRadii;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) long long tabContentMode;                          //@synthesize tabContentMode=_tabContentMode - In the implementation block
@property (nonatomic,readonly) double minimumInteritemSpacing;                    //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (nonatomic,readonly) double sliderPreferredHeight;                      //@synthesize sliderPreferredHeight=_sliderPreferredHeight - In the implementation block
@property (nonatomic,copy,readonly) UIColor * sliderHighlightColor;               //@synthesize sliderHighlightColor=_sliderHighlightColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * sliderBackgroundColor;              //@synthesize sliderBackgroundColor=_sliderBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInset;                         //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) double tabBarPreferredHeight;                      //@synthesize tabBarPreferredHeight=_tabBarPreferredHeight - In the implementation block
@property (nonatomic,copy,readonly) UIColor * tabBarBackgroundColor;              //@synthesize tabBarBackgroundColor=_tabBarBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) SCCornerRadii * cornerRadii;                  //@synthesize cornerRadii=_cornerRadii - In the implementation block
-(long long)tabContentMode;
-(UIColor *)tabBarBackgroundColor;
-(double)sliderPreferredHeight;
-(double)tabBarPreferredHeight;
-(UIColor *)sliderBackgroundColor;
-(UIColor *)sliderHighlightColor;
-(id)initWithTabContentMode:(long long)arg1 minimumInteritemSpacing:(double)arg2 sliderPreferredHeight:(double)arg3 sliderHighlightColor:(id)arg4 sliderBackgroundColor:(id)arg5 contentInset:(UIEdgeInsets)arg6 tabBarPreferredHeight:(double)arg7 tabBarBackgroundColor:(id)arg8 cornerRadii:(id)arg9 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)minimumInteritemSpacing;
-(UIEdgeInsets)contentInset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCCornerRadii *)cornerRadii;
@end

