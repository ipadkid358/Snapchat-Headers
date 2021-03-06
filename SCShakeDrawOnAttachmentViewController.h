/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCColorPickerDelegate.h>
#import <Snapchat/SCDrawingDelegate.h>

@protocol SCShakeDrawOnAttachmentViewControllerDelegate;
@class UIImage, UIImageView, SCDrawingView, SCGrowingButton, UIView, SCColorPicker, SCDrawingButton, SCGradientView, NSString;

@interface SCShakeDrawOnAttachmentViewController : UIViewController <SCColorPickerDelegate, SCDrawingDelegate> {

	id<SCShakeDrawOnAttachmentViewControllerDelegate> _delegate;
	UIImage* _originalImage;
	UIImageView* _originalImageView;
	SCDrawingView* _drawingView;
	long long _attachmentIndex;
	SCGrowingButton* _xButton;
	UIView* _iconsContainerView;
	SCColorPicker* _colorPicker;
	SCDrawingButton* _drawingButton;
	SCGrowingButton* _trashButton;
	SCGradientView* _topGradient;
	SCGradientView* _bottomGradient;
	SCGrowingButton* _checkButton;

}

@property (nonatomic,retain) SCGrowingButton * xButton;                    //@synthesize xButton=_xButton - In the implementation block
@property (nonatomic,retain) UIView * iconsContainerView;                  //@synthesize iconsContainerView=_iconsContainerView - In the implementation block
@property (nonatomic,retain) SCColorPicker * colorPicker;                  //@synthesize colorPicker=_colorPicker - In the implementation block
@property (nonatomic,retain) SCDrawingButton * drawingButton;              //@synthesize drawingButton=_drawingButton - In the implementation block
@property (nonatomic,retain) SCDrawingView * drawingView;                  //@synthesize drawingView=_drawingView - In the implementation block
@property (nonatomic,retain) SCGrowingButton * trashButton;                //@synthesize trashButton=_trashButton - In the implementation block
@property (nonatomic,retain) SCGradientView * topGradient;                 //@synthesize topGradient=_topGradient - In the implementation block
@property (nonatomic,retain) SCGradientView * bottomGradient;              //@synthesize bottomGradient=_bottomGradient - In the implementation block
@property (nonatomic,retain) SCGrowingButton * checkButton;                //@synthesize checkButton=_checkButton - In the implementation block
@property (assign) long long attachmentIndex;                              //@synthesize attachmentIndex=_attachmentIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setXButton:(SCGrowingButton *)arg1 ;
-(SCGrowingButton *)xButton;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(void)colorChanged:(id)arg1 ;
-(void)setIconsContainerView:(UIView *)arg1 ;
-(UIView *)iconsContainerView;
-(void)saveButtonPressed;
-(void)deleteButtonPressed;
-(SCGrowingButton *)trashButton;
-(void)setAttachmentIndex:(long long)arg1 ;
-(void)setEditAttachmentDelegate:(id)arg1 ;
-(void)drawingPress:(id)arg1 ;
-(void)setupGradients;
-(void)discardButtonPressed;
-(CGRect)trashButtonFrame;
-(CGRect)drawingButtonFrame;
-(SCDrawingView *)drawingView;
-(CGRect)checkButtonFrame;
-(id)prepareEditImage;
-(long long)attachmentIndex;
-(SCDrawingButton *)drawingButton;
-(void)dismissViewController:(BOOL)arg1 ;
-(void)layoutGrowingButton:(id)arg1 withButtonFrame:(CGRect)arg2 ;
-(SCGrowingButton *)checkButton;
-(void)initColorPicker;
-(void)setActionButtonsForDrawingHidden:(BOOL)arg1 ;
-(CGRect)colorPickerFrame;
-(void)drawingEnabled:(BOOL)arg1 ;
-(void)didAlterDrawing;
-(void)didStartDrawing;
-(void)didEndDrawingWithStrokeSize:(double)arg1 isResized:(BOOL)arg2 ;
-(void)didPinchBrush;
-(void)setDrawingButton:(SCDrawingButton *)arg1 ;
-(void)setDrawingView:(SCDrawingView *)arg1 ;
-(void)setTrashButton:(SCGrowingButton *)arg1 ;
-(SCGradientView *)topGradient;
-(void)setTopGradient:(SCGradientView *)arg1 ;
-(SCGradientView *)bottomGradient;
-(void)setBottomGradient:(SCGradientView *)arg1 ;
-(void)setCheckButton:(SCGrowingButton *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)cancelButtonPressed;
-(SCColorPicker *)colorPicker;
-(void)setColorPicker:(SCColorPicker *)arg1 ;
@end

