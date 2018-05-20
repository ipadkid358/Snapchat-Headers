/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SCSearchFormsDatePickerViewControllerDelegate;
@class NSDate, NSString, UIDatePicker;

@interface SCSearchFormsDatePickerViewController : UIViewController {

	NSDate* _selectedDate;
	NSString* _itemIdentifier;
	UIDatePicker* _datePicker;
	id<SCSearchFormsDatePickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSearchFormsDatePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_finishPickingDate:(id)arg1 ;
-(id)initWithPreselectedDate:(id)arg1 itemIdentifier:(id)arg2 ;
-(void)setDelegate:(id<SCSearchFormsDatePickerViewControllerDelegate>)arg1 ;
-(id<SCSearchFormsDatePickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end
