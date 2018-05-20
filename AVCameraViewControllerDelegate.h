/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCameraViewControllerDelegate <NSObject>
@optional
-(void)didBeginRecording;
-(void)didEndRecording:(BOOL)arg1;
-(void)didBeginLongPressing:(BOOL)arg1;
-(void)didEndLongPressing:(BOOL)arg1;
-(void)didLensesDetected:(BOOL)arg1;
-(void)toggleButtonVisibility:(BOOL)arg1 animated:(BOOL)arg2;
-(void)toggleButtonVisibility:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3;
-(void)toggleButtonVisibility:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 showStatusBar:(BOOL)arg4;
-(void)toggleHovaTabBarVisibility:(BOOL)arg1;
-(void)setNonRecordingUIEnabled:(BOOL)arg1;
-(id)mainSuperview;
-(void)lagunaModuleReady;
-(void)cameraViewController:(id)arg1 didUpdateCameraType:(long long)arg2;
-(void)cameraViewController:(id)arg1 didPerformCameraLongPressGestureWithProfilePresented:(id)arg2;
-(void)cameraViewController:(id)arg1 didReceiveNewFriendRequestWithTooltipApperance:(BOOL)arg2;
-(id)createGallerySwipeTransitionCoordinator;
-(void)didToggleOffLenses;

@required
-(void)leftCameraBackButtonPressed;
-(void)rightCameraBackButtonPressed;

@end
