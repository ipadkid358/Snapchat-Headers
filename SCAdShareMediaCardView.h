/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTextMediaCardView.h>
#import <Snapchat/SCOperaPresenterDelegate.h>
#import <Snapchat/SCActionMenuRenderableCellContentView.h>
#import <Snapchat/SCSendPreviewMediaView.h>

@protocol SCChatCellPublisherGestureDelegate;
@class UIViewController, UITapGestureRecognizer, UIWindow, SCOperaPresenter, SCOperaPlaylistNotificationOptInPlugin, NSString;

@interface SCAdShareMediaCardView : SCTextMediaCardView <SCOperaPresenterDelegate, SCActionMenuRenderableCellContentView, SCSendPreviewMediaView> {

	UIViewController*<SCChatCellPublisherGestureDelegate> _parentVC;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIWindow* _mediaFullScreenWindow;
	UIWindow* _originalKeyWindow;
	SCOperaPresenter* _operaPresenter;
	SCOperaPlaylistNotificationOptInPlugin* _notificationOptInPlugin;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)backgroundShapePath;
-(void)thumbnailImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)operaPresenterDidFailToPresent:(id)arg1 ;
-(void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2 ;
-(void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2 ;
-(void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1 ;
-(void)operaPresenterDidFinishDismissing:(id)arg1 ;
-(void)operaPresenterDidCancelDismissing:(id)arg1 ;
-(void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2 ;
-(void)operaPresenterDidTearDown:(id)arg1 ;
-(void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2 ;
-(void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3 ;
-(void)resetWithOriginalSettings;
-(void)rerenderForActionMenuWithBoundingSize:(CGSize)arg1 ;
-(id)SCAMediaTypes;
-(void)onTap:(id)arg1 ;
-(BOOL)shouldApplyThumbnailForLoadedViewModel:(id)arg1 ;
-(id)adShareMediaCardViewModel;
-(id)initWithParentViewController:(id)arg1 ;
@end
