/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class SCShapeView, NSString;

@interface SCPreviewToolbarTooltipView : UIView {

	SCShapeView* _shapeView;
	BOOL _visible;
	BOOL _isNewAnimatedTooltip;
	NSString* _title;
	long long _displayCount;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long displayCount;                       //@synthesize displayCount=_displayCount - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL isNewAnimatedTooltip;                    //@synthesize isNewAnimatedTooltip=_isNewAnimatedTooltip - In the implementation block
-(long long)displayCount;
-(void)dismiss:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)presentAnimatedDrawTooltipForItem:(id)arg1 inView:(id)arg2 ;
-(id)presentAnimatedCaptionTooltipForItem:(id)arg1 inView:(id)arg2 ;
-(id)presentAnimatedStickerTooltipForItem:(id)arg1 inView:(id)arg2 ;
-(id)presentAnimatedLensTooltipForItem:(id)arg1 inView:(id)arg2 ;
-(void)stopTooltipAnimation;
-(void)setDisplayCount:(long long)arg1 ;
-(void)presentFromToolbarButtonItem:(id)arg1 inView:(id)arg2 ;
-(void)setIsNewAnimatedTooltip:(BOOL)arg1 ;
-(BOOL)isNewAnimatedTooltip;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(BOOL)isVisible;
@end
