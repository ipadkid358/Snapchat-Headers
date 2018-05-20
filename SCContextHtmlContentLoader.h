/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebViewDelegate.h>
#import <Snapchat/SCContextContentLoaderProtocol.h>

@class NSURL, NSString, NSError, UIWebView, UIView;

@interface SCContextHtmlContentLoader : NSObject <UIWebViewDelegate, SCContextContentLoaderProtocol> {

	NSURL* _url;
	NSString* _inlineHtml;
	NSError* _error;
	UIWebView* _browser;
	UIView* _browserWrapper;
	double _requestedImageHeight;
	double _requestedImageWidth;
	/*^block*/id _completion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadContent:(/*^block*/id)arg1 ;
-(id)initWithHtml:(id)arg1 height:(double)arg2 width:(double)arg3 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)_complete;
@end
