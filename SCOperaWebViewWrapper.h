/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaWebViewDelegate.h>
#import <Snapchat/SCOperaWebViewURLInterceptorDelegate.h>

@protocol SCOperaWebViewURLInterceptor, SCOperaSafeBrowsingChecker, SCOperaWebViewPKPassProvider, SCOperaWebViewWrapperDelegate;
@class SCOperaRemoteWebJavascriptBridge, NSMutableDictionary, SCOperaWebViewAVControlScript, SCOperaWebViewAudioController, NSURL, NSString, SCOperaWebView;

@interface SCOperaWebViewWrapper : NSObject <SCOperaWebViewDelegate, SCOperaWebViewURLInterceptorDelegate> {

	id<SCOperaWebViewURLInterceptor> _urlInterceptor;
	id<SCOperaSafeBrowsingChecker> _safeBrowsingChecker;
	id<SCOperaWebViewPKPassProvider> _pkPassProvider;
	SCOperaRemoteWebJavascriptBridge* _jsBridge;
	NSMutableDictionary* _configDict;
	NSMutableDictionary* _safeBrowsingCache;
	SCOperaWebViewAVControlScript* _avControlScript;
	SCOperaWebViewAudioController* _audioController;
	NSURL* _safeBrowsingWarningURL;
	long long _safeBrowsingWarningURLType;
	NSMutableDictionary* _mutableNavigationAction;
	NSMutableDictionary* _mutableNavigationHistory;
	NSMutableDictionary* _mutablePendingActionHandlers;
	float _progress;
	BOOL _shouldNotifyPageOnShowAfterDidFullyLoad;
	BOOL _allowOnShowOnHideKey;
	BOOL _allowHidingUrlBarOnFirstLoad;
	BOOL _disableTouchCallout;
	NSString* _urlBarLoadingText;
	BOOL _allowAutoDetectAutofill;
	BOOL _allowOnEditAutofill;
	BOOL _allowSkipAlertForDeepLink;
	long long _onEditAutofillType;
	NSString* _snapchatUserAgent;
	BOOL _didLoadStart;
	BOOL _didLoadSucceed;
	BOOL _loadHTMLOnly;
	NSString* __id;
	SCOperaWebView* _webView;
	id<SCOperaWebViewWrapperDelegate> _delegate;
	long long _pageLoadErrorCount;
	long long _pageLoadCount;

}

@property (nonatomic,copy,readonly) NSString * _id;                                          //@synthesize _id=__id - In the implementation block
@property (nonatomic,readonly) SCOperaWebView * webView;                                     //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<SCOperaWebViewWrapperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long pageLoadErrorCount;                                 //@synthesize pageLoadErrorCount=_pageLoadErrorCount - In the implementation block
@property (nonatomic,readonly) long long pageLoadCount;                                      //@synthesize pageLoadCount=_pageLoadCount - In the implementation block
@property (nonatomic,readonly) BOOL didLoadStart;                                            //@synthesize didLoadStart=_didLoadStart - In the implementation block
@property (nonatomic,readonly) BOOL didLoadSucceed;                                          //@synthesize didLoadSucceed=_didLoadSucceed - In the implementation block
@property (nonatomic,readonly) BOOL loadHTMLOnly;                                            //@synthesize loadHTMLOnly=_loadHTMLOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)_id;
-(long long)pageLoadErrorCount;
-(double)userPermissionPromptCount;
-(double)userPermissionPromptAllowedCount;
-(id)_navigationItemForURL:(id)arg1 ;
-(void)_handleCheckResultForURL:(id)arg1 webView:(id)arg2 navigationAction:(id)arg3 urlType:(long long)arg4 ;
-(void)_updateNavigationItem:(id)arg1 ;
-(id)initWithUrlInterceptor:(id)arg1 userInfoProvider:(id)arg2 safeBrowsingChecker:(id)arg3 pkPassProvider:(id)arg4 configDict:(id)arg5 ;
-(BOOL)didLoadSucceed;
-(id)resetWebViewWithConfigDict:(id)arg1 userInfoProvider:(id)arg2 ;
-(BOOL)shouldHandleOnEditAutofillAction:(id)arg1 ;
-(void)_didCheckSafeBrowsingForURL:(id)arg1 urlType:(long long)arg2 ;
-(void)_navigateWebViewToBypassDeepLink:(id)arg1 navigationAction:(id)arg2 decisionHandlers:(id)arg3 ;
-(void)_updateNavigationActionItem:(id)arg1 targetId:(id)arg2 ;
-(void)_checkSafeBrowsingForURL:(id)arg1 webView:(id)arg2 targetId:(id)arg3 ;
-(void)showSafeBrowsingWarning:(id)arg1 urlType:(long long)arg2 ;
-(void)runSafeBrowsingCheckOnUrl:(id)arg1 ;
-(void)hideKeyboardBar;
-(BOOL)_shouldOverrideWhitelisted;
-(void)showConnectionError;
-(id)_navigationActionItemForTargetId:(id)arg1 ;
-(id)webpageAutofillDetectedFields;
-(id)webpageDetectedFields;
-(id)webpageOnEditAutofilledFields;
-(void)webView:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)webViewShowAddPassesView:(id)arg1 ;
-(void)webViewDismissAddPassesView:(id)arg1 ;
-(void)operaWebViewURLInterceptorDidClickCancel:(id)arg1 ;
-(void)operaWebViewURLInterceptorDidClickOk:(id)arg1 ;
-(void)showPendingUI:(id)arg1 ;
-(void)notifyWebPageOnShow:(BOOL)arg1 ;
-(void)notifyWebPageOnHide;
-(void)notifyWebPageDidFinishLoad;
-(long long)pageLoadCount;
-(BOOL)didLoadStart;
-(BOOL)loadHTMLOnly;
-(void)setDelegate:(id<SCOperaWebViewWrapperDelegate>)arg1 ;
-(void)dealloc;
-(id<SCOperaWebViewWrapperDelegate>)delegate;
-(SCOperaWebView *)webView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)tearDown;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
@end

