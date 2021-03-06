/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/AVCameraViewControllerDelegate.h>
#import <Snapchat/SendSnapNavigationControllerDelegate.h>

@protocol SCSearchReplyCameraPresenterDelegate;
@class AVCameraViewController, NavigationController, SCUserSession, NSString;

@interface SCSearchReplyCameraPresenter : NSObject <AVCameraViewControllerDelegate, SendSnapNavigationControllerDelegate> {

	AVCameraViewController* _cameraVC;
	NavigationController* _snapReplyNavigationController;
	SCUserSession* _userSession;
	/*^block*/id _snapReplyCompletionBlock;
	id<SCSearchReplyCameraPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSearchReplyCameraPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)didSendSnaps:(id)arg1 ;
-(void)didCancelFromPreview:(id)arg1 ;
-(void)didPostStory;
-(void)leftCameraBackButtonPressed;
-(void)rightCameraBackButtonPressed;
-(void)presentWithUsername:(id)arg1 isGroupChat:(BOOL)arg2 ;
-(void)presentWithPlaceId:(id)arg1 placeName:(id)arg2 ;
-(void)presentWithPublicationId:(id)arg1 cellViewPosition:(long long)arg2 ;
-(void)presentWithReplyParameters:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_presentReplyCameraWithParameters:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<SCSearchReplyCameraPresenterDelegate>)arg1 ;
-(id<SCSearchReplyCameraPresenterDelegate>)delegate;
-(void)_cleanupCamera;
@end

