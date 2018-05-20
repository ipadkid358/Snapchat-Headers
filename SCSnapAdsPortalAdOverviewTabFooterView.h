/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCSnapAdsPortalAdOverviewTabFooterViewDelegate;
@class UIButton;

@interface SCSnapAdsPortalAdOverviewTabFooterView : UIView {

	UIButton* _dateButton;
	UIButton* _leftArrowButton;
	UIButton* _rightArrowButton;
	id<SCSnapAdsPortalAdOverviewTabFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSnapAdsPortalAdOverviewTabFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)rightArrowButtonPressed;
-(void)leftArrowButtonPressed;
-(void)dateButtonPressed;
-(void)updateFooterTitle:(id)arg1 ;
-(void)updateFooterWithDateButtonEnabled:(BOOL)arg1 leftArrowButtonEnabled:(BOOL)arg2 rightArrowButtonEnabled:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SCSnapAdsPortalAdOverviewTabFooterViewDelegate>)arg1 ;
-(id<SCSnapAdsPortalAdOverviewTabFooterViewDelegate>)delegate;
-(void)cleanup;
@end
