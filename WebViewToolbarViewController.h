/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class WKWebView, UIButton, NSURLRequest, NSString;

@interface WebViewToolbarViewController : SCGenericSettingsViewController <WKNavigationDelegate> {

	WKWebView* _webView;
	UIButton* _backButton;
	UIButton* _forwardButton;
	UIButton* _refreshButton;
	NSURLRequest* _request;

}

@property (nonatomic,retain) UIButton * backButton;                 //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIButton * forwardButton;              //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,retain) UIButton * refreshButton;              //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                   //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(void)backPressed;
-(void)forwardPressed;
-(void)refreshPressed;
-(void)setBackButtonEnabled:(BOOL)arg1 ;
-(void)setForwardButtonEnabled:(BOOL)arg1 ;
-(void)updateRefreshButtonStateLoading:(BOOL)arg1 ;
-(void)setRefreshOrStopButtonEnabled:(BOOL)arg1 ;
-(id)getPageViewName;
-(UIButton *)forwardButton;
-(void)setForwardButton:(UIButton *)arg1 ;
-(void)updateStateForWebView:(id)arg1 showActivityIndicator:(BOOL)arg2 isLoading:(BOOL)arg3 showError:(BOOL)arg4 ;
-(void)dealloc;
-(NSURLRequest *)request;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(UIButton *)backButton;
-(void)setRefreshButton:(UIButton *)arg1 ;
-(UIButton *)refreshButton;
-(void)setBackButton:(UIButton *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
@end

