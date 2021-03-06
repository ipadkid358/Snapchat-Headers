/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaEventListener.h>
#import <Snapchat/SCContextOperaPresenter.h>

@protocol SCContextOperaPresenterDelegate, NavigationDelegate;
@class UIViewController, UIView, NSURL, NSString, SCOperaViewController, SCContextSession;

@interface SCContextWebContentOperaPresenter : NSObject <SCOperaEventListener, SCContextOperaPresenter> {

	UIViewController* _presentingViewController;
	UIView* _baseOperaView;
	id<SCContextOperaPresenterDelegate> _delegate;
	id<NavigationDelegate> _navigationDelegate;
	NSURL* _url;
	NSString* _html;
	SCOperaViewController* _operaVC;
	double _browserStartTime;
	SCContextSession* _contextSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(id)registeredEventsForOperaSession;
-(void)_handleOperaCloseViewerEvent;
-(id)_operaConfigurationForRootViewModel:(id)arg1 ;
-(id)initWithHTML:(id)arg1 baseURL:(id)arg2 baseOperaView:(id)arg3 contextSession:(id)arg4 ;
-(id)initWithUrl:(id)arg1 baseOperaView:(id)arg2 contextSession:(id)arg3 ;
-(void)_handleOperaOpenViewerEvent;
-(void)presentWithViewController:(id)arg1 delegate:(id)arg2 navigationDelegate:(id)arg3 ;
@end

