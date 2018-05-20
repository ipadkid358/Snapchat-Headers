/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaWebViewDelegate.h>

@protocol SCWebScriptHelperDelegate;
@class SCOperaWebView, NSURL, NSString;

@interface SCWebScriptHelper : NSObject <SCOperaWebViewDelegate> {

	SCOperaWebView* _webviewInternal;
	NSURL* _linkToOpen;
	NSString* _websiteTitle;
	BOOL _onlyTitleNoPolling;
	double _startTime;
	int _state;
	id<SCWebScriptHelperDelegate> _delegate;
	NSString* _requestId;

}

@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<SCWebScriptHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) SCOperaWebView * webview; 
@property (nonatomic,readonly) NSURL * openedUrl; 
@property (nonatomic,readonly) NSString * requestId;                                     //@synthesize requestId=_requestId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCOperaWebView *)webview;
-(void)setWebview:(SCOperaWebView *)arg1 ;
-(void)webView:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)openForTitle:(id)arg1 ;
-(NSURL *)openedUrl;
-(void)_openPageURL:(id)arg1 ;
-(void)_stringByEvaluatingJavaScriptFromString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)scriptByEnclosingInFunction:(id)arg1 ;
-(void)_documentReadyWithState:(int)arg1 ;
-(void)_checkState;
-(void)_pollState;
-(void)load:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SCWebScriptHelperDelegate>)arg1 ;
-(void)dealloc;
-(id<SCWebScriptHelperDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)openURL:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(NSString *)requestId;
-(void)evaluateScript:(id)arg1 ;
@end

