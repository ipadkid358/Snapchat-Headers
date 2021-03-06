/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, UIFont;

@interface SCCheetahTooltipAppearance : NSObject {

	BOOL _respectsRTLLayout;
	BOOL _triangleHidden;
	NSString* _text;
	UIColor* _textColor;
	UIColor* _backgroundColor;
	UIFont* _font;
	double _shadowOpacity;
	double _shadowRadius;
	NSString* _accessibilityIdentifier;
	long long _numberOfLines;
	long long _textAlignment;
	double _preferredWidth;

}

@property (nonatomic,readonly) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                         //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIFont * font;                               //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) double shadowOpacity;                        //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (nonatomic,readonly) double shadowRadius;                         //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) BOOL respectsRTLLayout;                        //@synthesize respectsRTLLayout=_respectsRTLLayout - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (assign,nonatomic) BOOL triangleHidden;                           //@synthesize triangleHidden=_triangleHidden - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                       //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) long long textAlignment;                       //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) double preferredWidth;                         //@synthesize preferredWidth=_preferredWidth - In the implementation block
-(void)setTriangleHidden:(BOOL)arg1 ;
-(id)initWithText:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3 ;
-(void)setRespectsRTLLayout:(BOOL)arg1 ;
-(BOOL)respectsRTLLayout;
-(BOOL)triangleHidden;
-(id)initWithText:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3 font:(id)arg4 shadowOpacity:(double)arg5 ;
-(UIColor *)backgroundColor;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(NSString *)text;
-(NSString *)accessibilityIdentifier;
-(UIFont *)font;
-(UIColor *)textColor;
-(long long)textAlignment;
-(double)shadowRadius;
-(double)shadowOpacity;
-(id)initWithText:(id)arg1 ;
-(long long)numberOfLines;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(double)preferredWidth;
-(void)setPreferredWidth:(double)arg1 ;
@end

