/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSerengetiHookWithSession.h>
#import <Snapchat/SendSnapNavigationControllerDelegate.h>
#import <Snapchat/AVCameraViewControllerDelegate.h>

@class UINavigationController, NSString;

@interface SCSerengetiAddSnapToBusinessStoryHook : SCSerengetiHookWithSession <SendSnapNavigationControllerDelegate, AVCameraViewControllerDelegate> {

	UINavigationController* _cameraNavigationController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)javascriptFunctionName;
-(void)serengetiViewController:(id)arg1 performHookWithParameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didCancelFromPreview:(id)arg1 ;
-(void)didPostStory;
-(void)leftCameraBackButtonPressed;
-(void)rightCameraBackButtonPressed;
-(void)_dismissCamera;
@end

