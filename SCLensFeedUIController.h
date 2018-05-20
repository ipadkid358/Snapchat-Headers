/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCLensFeedUIController;
#import <Snapchat/Snapchat-Structs.h>
@class SCGrowingButton, UIView;

@interface SCLensFeedUIController : NSObject {

	SCGrowingButton* _lensFeedButton;
	UIView* _hidableViewContainer;
	UIView* _lensesOpenCloseButton;
	id<SCLensFeedUIController> _delegate;

}

@property (assign,nonatomic,__weak) id<SCLensFeedUIController> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithHidableViewContainer:(id)arg1 lensesOpenCloseButton:(id)arg2 ;
-(BOOL)isPointInsideUI:(CGPoint)arg1 ;
-(void)_setLensFeedButtonHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_lensFeedButtonPressed;
-(id)lensFeedButton;
-(void)_updateLensFeedButtonConstraintsWithOffset:(double)arg1 ;
-(void)setDelegate:(id<SCLensFeedUIController>)arg1 ;
-(id<SCLensFeedUIController>)delegate;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)showAnimated:(BOOL)arg1 ;
@end
