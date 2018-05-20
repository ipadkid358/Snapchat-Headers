/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCSearchRoundedCornerConfigurable.h>
#import <Snapchat/SCSearchViewModelConfigurable.h>
#import <Snapchat/SCSearchSeparatorConfigurable.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer, UIColor, UIView, NSString;

@interface SCUnifiedProfileCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, SCSearchRoundedCornerConfigurable, SCSearchViewModelConfigurable, SCSearchSeparatorConfigurable> {

	UITapGestureRecognizer* _singleTapGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	BOOL _highlighted;
	BOOL _shrinkOnHighlight;
	unsigned long long _roundedCorners;
	id _viewModel;
	unsigned long long _separatorMask;
	UIColor* _separatorColor;
	UIView* _cardContentView;

}

@property (nonatomic,readonly) UIView * cardContentView;                     //@synthesize cardContentView=_cardContentView - In the implementation block
@property (assign,nonatomic) BOOL shrinkOnHighlight;                         //@synthesize shrinkOnHighlight=_shrinkOnHighlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long roundedCorners;              //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (nonatomic,retain) id viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) unsigned long long separatorMask;               //@synthesize separatorMask=_separatorMask - In the implementation block
@property (nonatomic,copy) UIColor * separatorColor;                         //@synthesize separatorColor=_separatorColor - In the implementation block
-(void)_didSingleTap:(id)arg1 ;
-(void)_didLongPress:(id)arg1 ;
-(unsigned long long)separatorMask;
-(void)setSeparatorMask:(unsigned long long)arg1 ;
-(UIView *)cardContentView;
-(void)handleTapAction;
-(void)setShrinkOnHighlight:(BOOL)arg1 ;
-(BOOL)shrinkOnHighlight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(unsigned long long)roundedCorners;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

