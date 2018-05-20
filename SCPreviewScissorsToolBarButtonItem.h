/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCPreviewToolBarButtonItem.h>
#import <Snapchat/SCColorPickerViewDelegate.h>
#import <Snapchat/SCImagePickerViewDelegate.h>
#import <Snapchat/SCPreviewToolBarPickerViewDelegate.h>

@protocol SCPreviewScissorsToolBarButtonItemDelegate;
@class SCGrowingButton, SCImagePickerView, SCColorPickerView, UIImage, UIColor, SCPurikuraResourceProvider, SCLoadingIndicatorView, NSArray, NSString;

@interface SCPreviewScissorsToolBarButtonItem : SCPreviewToolBarButtonItem <SCColorPickerViewDelegate, SCImagePickerViewDelegate, SCPreviewToolBarPickerViewDelegate> {

	SCGrowingButton* _revertButton;
	SCGrowingButton* _cutButton;
	SCGrowingButton* _eraseButton;
	SCGrowingButton* _blurButton;
	SCImagePickerView* _purikuraImagePicker;
	SCColorPickerView* _colorPickerTint;
	BOOL _shouldShowCutButton;
	BOOL _shouldShowEraseButton;
	BOOL _shouldShowBlurButton;
	BOOL _shouldShowPurikuraButton;
	BOOL _shouldShowBrushButton;
	long long _undoButtonStatus;
	UIImage* _thumbnail;
	UIImage* _image;
	UIColor* _color;
	SCPurikuraResourceProvider* _purikuraResourceProvider;
	SCLoadingIndicatorView* _loadIndicator;
	NSArray* _purikuraImagePickerDisplayList;
	NSArray* _purikuraImagePickerExtendList;
	id<SCPreviewScissorsToolBarButtonItemDelegate> _delegate;
	long long _selectedMode;

}

@property (assign,nonatomic,__weak) id<SCPreviewScissorsToolBarButtonItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long selectedMode;                                                    //@synthesize selectedMode=_selectedMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)colorPickerView:(id)arg1 didChangeColor:(id)arg2 ;
-(void)pickerViewDidPressInCompactMode:(id)arg1 ;
-(void)pickerView:(id)arg1 hideOtherPickers:(BOOL)arg2 ;
-(void)imagePickerView:(id)arg1 selectedImageReady:(id)arg2 ;
-(void)imagePickerView:(id)arg1 didChangeImage:(id)arg2 ;
-(id)initWithBarButtonItemType:(long long)arg1 target:(id)arg2 selector:(SEL)arg3 shouldShowCutButton:(BOOL)arg4 shouldShowEraseButton:(BOOL)arg5 shouldShowBlurButton:(BOOL)arg6 shouldShowBrushButton:(BOOL)arg7 shouldShowPurikuraButton:(BOOL)arg8 purikuraResourceProvider:(id)arg9 ;
-(void)setShouldShowCutButton:(BOOL)arg1 shouldShowEraseButton:(BOOL)arg2 shouldShowBlurButton:(BOOL)arg3 shouldShowBrushButton:(BOOL)arg4 shouldShowPurikuraButton:(BOOL)arg5 purikuraResourceProvider:(id)arg6 ;
-(void)setUndoButtonStatus:(long long)arg1 ;
-(void)cutButtonPressed;
-(void)_revertPressed;
-(void)_cutPressed;
-(void)_erasePressed;
-(void)_blurPressed;
-(void)_loadImagesForPurikuraImagePicker;
-(void)_purikuraPressed;
-(void)_tintPressed;
-(void)_updateLeftButtonStatus;
-(void)_prepareBottomItems:(id)arg1 withAnimation:(BOOL)arg2 ;
-(void)_updateBottomButtonStatus;
-(void)imagePickerViewLayoutChanged:(id)arg1 ;
-(void)setDelegate:(id<SCPreviewScissorsToolBarButtonItemDelegate>)arg1 ;
-(id<SCPreviewScissorsToolBarButtonItemDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 ;
-(long long)selectedMode;
@end

