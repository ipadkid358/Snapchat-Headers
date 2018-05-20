/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOperaLayer.h>

@class SCOperaPage, NSString, UIFont, UIColor;

@interface SCOperaTextLayer : NSObject <SCOperaLayer> {

	BOOL _includeBackground;
	BOOL _shouldHidelayerViewInFullView;
	SCOperaPage* _page;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	UIColor* _dropshadowColor;
	double _dropShadowBlurRadius;
	long long _timeBeforeFadeoutMs;
	long long _timeToFadeoutMs;
	double _horizontalMargin;
	double _verticalMargin;
	unsigned long long _verticalAlignment;
	unsigned long long _horizontalAlignment;
	CGSize _dropshadowOffset;

}

@property (assign,nonatomic,__weak) SCOperaPage * page;                             //@synthesize page=_page - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) UIFont * font;                                       //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) UIColor * dropshadowColor;                           //@synthesize dropshadowColor=_dropshadowColor - In the implementation block
@property (nonatomic,readonly) CGSize dropshadowOffset;                             //@synthesize dropshadowOffset=_dropshadowOffset - In the implementation block
@property (nonatomic,readonly) double dropShadowBlurRadius;                         //@synthesize dropShadowBlurRadius=_dropShadowBlurRadius - In the implementation block
@property (nonatomic,readonly) long long timeBeforeFadeoutMs;                       //@synthesize timeBeforeFadeoutMs=_timeBeforeFadeoutMs - In the implementation block
@property (nonatomic,readonly) long long timeToFadeoutMs;                           //@synthesize timeToFadeoutMs=_timeToFadeoutMs - In the implementation block
@property (nonatomic,readonly) double horizontalMargin;                             //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (nonatomic,readonly) double verticalMargin;                               //@synthesize verticalMargin=_verticalMargin - In the implementation block
@property (nonatomic,readonly) unsigned long long verticalAlignment;                //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,readonly) unsigned long long horizontalAlignment;              //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,readonly) BOOL includeBackground;                              //@synthesize includeBackground=_includeBackground - In the implementation block
@property (nonatomic,readonly) BOOL shouldHidelayerViewInFullView;                  //@synthesize shouldHidelayerViewInFullView=_shouldHidelayerViewInFullView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithProperties:(id)arg1 page:(id)arg2 ;
-(UIColor *)dropshadowColor;
-(CGSize)dropshadowOffset;
-(id)initWithProperties:(id)arg1 page:(id)arg2 ;
-(long long)timeBeforeFadeoutMs;
-(long long)timeToFadeoutMs;
-(BOOL)includeBackground;
-(double)dropShadowBlurRadius;
-(BOOL)shouldHidelayerViewInFullView;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(NSString *)text;
-(UIFont *)font;
-(UIColor *)textColor;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)verticalAlignment;
-(SCOperaPage *)page;
-(void)setPage:(SCOperaPage *)arg1 ;
-(double)verticalMargin;
-(double)horizontalMargin;
@end
