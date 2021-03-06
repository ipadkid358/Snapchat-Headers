/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SCProfilePictureSaveVideoViewControllerDelegate;
@class LoadingView, SCProfilePictureVideoSource;

@interface SCProfilePictureSaveVideoViewController : UIViewController {

	id<SCProfilePictureSaveVideoViewControllerDelegate> _delegate;
	LoadingView* _loadingView;
	SCProfilePictureVideoSource* _profilePictureVideoSource;

}

@property (assign,nonatomic,__weak) id<SCProfilePictureSaveVideoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) LoadingView * loadingView;                                                        //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) SCProfilePictureVideoSource * profilePictureVideoSource;                          //@synthesize profilePictureVideoSource=_profilePictureVideoSource - In the implementation block
-(id)initWithProfilePictureVideoSource:(id)arg1 andDelegate:(id)arg2 ;
-(void)setProfilePictureVideoSource:(SCProfilePictureVideoSource *)arg1 ;
-(void)saveProfilePictureVideoToCameraRoll;
-(SCProfilePictureVideoSource *)profilePictureVideoSource;
-(void)setDelegate:(id<SCProfilePictureSaveVideoViewControllerDelegate>)arg1 ;
-(id<SCProfilePictureSaveVideoViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setLoadingView:(LoadingView *)arg1 ;
-(LoadingView *)loadingView;
@end

