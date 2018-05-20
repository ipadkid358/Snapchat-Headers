/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDownSwipableViewController.h>

@protocol SCCheetahFriendsFeedDebugViewControllerDelegate;
@class WKWebView, NSString, SCSessionRequestManager;

@interface SCCheetahFriendsFeedDebugViewController : SCDownSwipableViewController {

	WKWebView* _webView;
	NSString* _debugJsonForFullPage;
	NSString* _debugHtmlForFeedItem;
	SCSessionRequestManager* _sessionRequestManager;
	id<SCCheetahFriendsFeedDebugViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCCheetahFriendsFeedDebugViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithModelString:(id)arg1 itemsDebugString:(id)arg2 sessionRequestManager:(id)arg3 astProvider:(id)arg4 DDMLFeatures:(id)arg5 ;
-(void)_loadHtmlFromData:(id)arg1 baseUrl:(id)arg2 ;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(void)downSwipeSucceed;
-(double)downSwipeContentOffsetY;
-(void)setDelegate:(id<SCCheetahFriendsFeedDebugViewControllerDelegate>)arg1 ;
-(id<SCCheetahFriendsFeedDebugViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)_dismiss;
@end
