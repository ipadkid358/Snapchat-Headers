/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBaseShakeReportViewController.h>
#import <Snapchat/SCHeaderDelegate.h>
#import <Snapchat/SCShakeProjectViewDelegate.h>
#import <Snapchat/SCShakeSubmitDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSString, UIScrollView;

@interface SCBetaShakeReportViewController : SCBaseShakeReportViewController <SCHeaderDelegate, SCShakeProjectViewDelegate, SCShakeSubmitDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSString* _projectName;
	UIScrollView* _scrollView;
	BOOL _doesAttachImage;
	long long _mode;

}

@property (assign,nonatomic) long long mode;                        //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObservers;
-(void)removeObservers;
-(void)rightButtonPressed;
-(void)updateSubmitButton;
-(void)addAttachmentSingleTap;
-(void)drawOnAttachmentViewControllerDidDeleteImage:(id)arg1 index:(long long)arg2 ;
-(void)setupProjectView:(id)arg1 ;
-(void)setupAttachmentEditLabel;
-(void)tapToSelectTapped;
-(void)featureSelected:(long long)arg1 ;
-(void)submitClicked:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)_hideKeyboard;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
@end

