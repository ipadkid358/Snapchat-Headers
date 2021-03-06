/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTextMediaCardView.h>
#import <Snapchat/SCBrowserViewControllerDelegate.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>
#import <Snapchat/SCActionMenuRenderableCellContentView.h>
#import <Snapchat/SCActionMenuCustomButtonsCell.h>

@protocol SKStoreProductViewControllerDelegateSCChatCellMessageStateUpdateDelegateSCChatCellURLLinkGestureDelegateSCChatURLMediaOperaPresenterDelegateSCActionSheetDelegate, SCURLMediaCardViewDelegate;
@class UITapGestureRecognizer, UILongPressGestureRecognizer, NSURL, SCChatURLMediaOperaPresenter, UIViewController, SCUserSession, NSString;

@interface SCURLMediaCardView : SCTextMediaCardView <SCBrowserViewControllerDelegate, SFSafariViewControllerDelegate, SCActionMenuRenderableCellContentView, SCActionMenuCustomButtonsCell> {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSURL* _url;
	SCChatURLMediaOperaPresenter* _operaPresenter;
	UIViewController*<SKStoreProductViewControllerDelegate>*<SCChatCellMessageStateUpdateDelegate>*<SCChatCellURLLinkGestureDelegate>*<SCChatURLMediaOperaPresenterDelegate>*<SCActionSheetDelegate> _parentVC;
	id<SCURLMediaCardViewDelegate> _delegate;
	SCUserSession* _userSession;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetWithOriginalSettings;
-(void)rerenderForActionMenuWithBoundingSize:(CGSize)arg1 ;
-(id)extraActionMenuButtons;
-(void)browserViewIsClosing;
-(void)onTap:(id)arg1 ;
-(void)_updateWithViewModel:(id)arg1 parentVC:(id)arg2 delegate:(id)arg3 ;
-(id)urlMediaCardViewModel;
-(void)_openURL:(id)arg1 cachedWebViewController:(id)arg2 ;
-(id)_copyActionForUrl:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 parentVC:(id)arg2 delegate:(id)arg3 backgroundColor:(id)arg4 userSession:(id)arg5 ;
-(void)updateWithViewModel:(id)arg1 parentVC:(id)arg2 delegate:(id)arg3 backgroundColor:(id)arg4 ;
-(id)_webViewControllerWithURL:(id)arg1 cachedWebViewController:(id)arg2 ;
-(void)dealloc;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)onLongPress:(id)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
@end

