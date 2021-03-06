/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLensSubPickerController.h>

@class UILabel, UIView, LSAPresetsComponent, LSAExternalImageComponent, NSString;

@interface SCLensPresetAndPhotoPickerController : SCLensSubPickerController {

	UILabel* _warningMessageLabel;
	UIView* _photoAccessPromptView;
	LSAPresetsComponent* _presetsComponent;
	LSAExternalImageComponent* _externalImageComponent;
	NSString* _selectedOptionRequestId;

}

@property (nonatomic,retain) id<SCLensFaceImageProviderProtocol> imageProvider; 
@property (nonatomic,retain) UILabel * warningMessageLabel;                                  //@synthesize warningMessageLabel=_warningMessageLabel - In the implementation block
@property (nonatomic,retain) UIView * photoAccessPromptView;                                 //@synthesize photoAccessPromptView=_photoAccessPromptView - In the implementation block
@property (nonatomic,retain) NSString * selectedOptionRequestId;                             //@synthesize selectedOptionRequestId=_selectedOptionRequestId - In the implementation block
-(void)lensSubPickerImageProvider:(id)arg1 didUpdateWithImageCount:(long long)arg2 canProcessMore:(BOOL)arg3 ;
-(void)_didTapAllowButton;
-(void)setPhotoPermissionsPromptHidden:(BOOL)arg1 ;
-(void)showNoImagesWarningIfNeeded;
-(void)innerSelectOptionAtIndex:(long long)arg1 cellToSelect:(id)arg2 ;
-(NSString *)selectedOptionRequestId;
-(void)setSelectedOptionRequestId:(NSString *)arg1 ;
-(void)showWarningWithText:(id)arg1 ;
-(void)setUpWarningMessageLabel;
-(UILabel *)warningMessageLabel;
-(void)setUpPhotoAccessPromptView;
-(UIView *)photoAccessPromptView;
-(void)hideNoImagesWarning;
-(id)initWithParentView:(id)arg1 lensContainer:(id)arg2 lensLogger:(id)arg3 presetsComponent:(id)arg4 presetImageProvider:(id)arg5 externalImageComponent:(id)arg6 photoFaceImageProvider:(id)arg7 ;
-(void)setWarningMessageLabel:(UILabel *)arg1 ;
-(void)setPhotoAccessPromptView:(UIView *)arg1 ;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)showAnimated:(BOOL)arg1 ;
@end

