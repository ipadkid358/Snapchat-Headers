/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIVisualEffectView, MASConstraint, SCTwoSidedGradientLayerMask;

@interface SCLensInPreviewView : UIView {

	UIVisualEffectView* _blurEffectView;
	double _width;
	double _cornerRadius;
	double _chevronHeight;
	MASConstraint* _initialHeightConstraint;
	SCTwoSidedGradientLayerMask* _gradientMask;

}
-(void)_setUpLayerMask;
-(id)initWithWidth:(double)arg1 cornerRaidus:(double)arg2 chevronHeight:(double)arg3 ;
-(void)setUpConstraintsWithSourceView:(id)arg1 topOffset:(double)arg2 ;
-(void)animateAppearanceWithBottomView:(id)arg1 bottomOffset:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateDismissalWithCompletion:(/*^block*/id)arg1 ;
-(void)layoutSubviews;
@end

