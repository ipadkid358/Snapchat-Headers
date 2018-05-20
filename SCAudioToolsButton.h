/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIControl.h>

@class UIImageView, NSString, UIView, SCShapeView;

@interface SCAudioToolsButton : UIControl {

	UIImageView* _imageView;
	UIImageView* _highlightedImageViewMask;
	BOOL _large;
	BOOL _needsDarkFill;
	NSString* _imageName;
	NSString* _highlightedImageName;
	UIView* _highlightedImageView;
	SCShapeView* _highlightedFillView;

}

@property (nonatomic,retain) UIView * highlightedImageView;                  //@synthesize highlightedImageView=_highlightedImageView - In the implementation block
@property (nonatomic,retain) SCShapeView * highlightedFillView;              //@synthesize highlightedFillView=_highlightedFillView - In the implementation block
@property (nonatomic,readonly) NSString * imageName;                         //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) NSString * highlightedImageName;              //@synthesize highlightedImageName=_highlightedImageName - In the implementation block
@property (assign,nonatomic) BOOL needsDarkFill;                             //@synthesize needsDarkFill=_needsDarkFill - In the implementation block
-(SCShapeView *)highlightedFillView;
-(void)_removeInFlightAnimationsForLayer:(id)arg1 ;
-(void)setHighlightedFillView:(SCShapeView *)arg1 ;
-(void)_rebuildHighlightedImageView;
-(void)_highlightedAnimation:(BOOL)arg1 ;
-(void)_setShowingHighlighted:(BOOL)arg1 ;
-(void)_animateWithDuration:(double)arg1 delay:(double)arg2 highlighted:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithImageName:(id)arg1 highlightedImageName:(id)arg2 isLarge:(BOOL)arg3 ;
-(void)setImageName:(id)arg1 highlightedImageName:(id)arg2 ;
-(void)_setHighlightedImageViewMask:(id)arg1 ;
-(NSString *)highlightedImageName;
-(BOOL)needsDarkFill;
-(void)setNeedsDarkFill:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)highlightedImageView;
-(void)setHighlightedImageView:(UIView *)arg1 ;
-(NSString *)imageName;
@end

