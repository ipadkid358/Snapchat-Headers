/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCContextCardViewCellDelegate;
@class SCContextErrorView, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface SCContextCardViewCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	SCContextErrorView* _errorView;
	id<SCContextCardViewCellDelegate> _delegate;
	UITapGestureRecognizer* _tapGesture;
	UILongPressGestureRecognizer* _longPressGesture;

}

@property (assign,nonatomic,__weak) id<SCContextCardViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGesture;                          //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGesture;              //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cardErrored:(id)arg1 retryable:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)cardTapped;
-(void)cardLongPressed;
-(void)setPressState:(BOOL)arg1 ;
-(BOOL)canHighlight;
-(void)_performTransition:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCContextCardViewCellDelegate>)arg1 ;
-(id<SCContextCardViewCellDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(UITapGestureRecognizer *)tapGesture;
-(void)longPressGesture:(id)arg1 ;
-(void)tapGesture:(id)arg1 ;
-(UILongPressGestureRecognizer *)longPressGesture;
@end

