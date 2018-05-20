/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, SCAddFriendCameraRollPickerView, UIButton;

@interface SCProfileV3AddFriendSnapcodeView : UIView {

	UILabel* _allowAccessLabel;
	SCAddFriendCameraRollPickerView* _cameraRollView;
	UIButton* _allowAccessButton;

}

@property (nonatomic,readonly) SCAddFriendCameraRollPickerView * cameraRollView;              //@synthesize cameraRollView=_cameraRollView - In the implementation block
@property (nonatomic,readonly) UIButton * allowAccessButton;                                  //@synthesize allowAccessButton=_allowAccessButton - In the implementation block
-(UIButton *)allowAccessButton;
-(SCAddFriendCameraRollPickerView *)cameraRollView;
-(void)setPermissionGranted:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

