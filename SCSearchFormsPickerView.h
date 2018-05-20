/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCSearchFormsPickerViewDelegate;
@class UITableView, UITapGestureRecognizer, NSString;

@interface SCSearchFormsPickerView : UIView <UIGestureRecognizerDelegate> {

	UITableView* _pickerView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	double _presentationOffset;
	CGRect _currentMaskRect;
	id<SCSearchFormsPickerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSearchFormsPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTap:(id)arg1 ;
-(void)animateDismissal;
-(void)animatePresentation;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchFormsPickerViewDelegate>)arg1 ;
-(id<SCSearchFormsPickerViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithPicker:(id)arg1 ;
@end

