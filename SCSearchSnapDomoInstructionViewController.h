/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCHeaderDataSource.h>
#import <Snapchat/SCHeaderDelegate.h>

@protocol SCSearchInstructionViewControllerDelegate;
@class SCSearchSnapDomoInstructionView, SCHeader, NSString;

@interface SCSearchSnapDomoInstructionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SCHeaderDataSource, SCHeaderDelegate> {

	SCSearchSnapDomoInstructionView* _instructionView;
	SCHeader* _header;
	long long _statusBarStyle;
	id<SCSearchInstructionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSearchInstructionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(id)fontForHeader:(id)arg1 ;
-(id)initWithInstructionViewModel:(id)arg1 ;
-(void)setDelegate:(id<SCSearchInstructionViewControllerDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<SCSearchInstructionViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

