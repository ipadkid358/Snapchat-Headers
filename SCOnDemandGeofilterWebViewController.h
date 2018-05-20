/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOnDemandGeofilterBaseLeftSwipableViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Snapchat/SCHeaderDelegate.h>
#import <Snapchat/SCHeaderDataSource.h>

@protocol SCOnDemandGeofilterWebViewControllerDelegate;
@class SCHeader, UIButton, UIWebView, NSURLRequest, NSString;

@interface SCOnDemandGeofilterWebViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <UIWebViewDelegate, SCHeaderDelegate, SCHeaderDataSource> {

	SCHeader* _header;
	UIButton* _backButton;
	UIButton* _forwardButton;
	UIButton* _refreshButton;
	UIWebView* _webView;
	NSURLRequest* _request;
	id<SCOnDemandGeofilterWebViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCOnDemandGeofilterWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(void)leftSwipeSucceed;
-(void)backPressed;
-(void)forwardPressed;
-(void)refreshPressed;
-(void)setBackButtonEnabled:(BOOL)arg1 ;
-(void)setForwardButtonEnabled:(BOOL)arg1 ;
-(void)updateRefreshButtonStateLoading:(BOOL)arg1 ;
-(void)setRefreshOrStopButtonEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<SCOnDemandGeofilterWebViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCOnDemandGeofilterWebViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithURL:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
@end
