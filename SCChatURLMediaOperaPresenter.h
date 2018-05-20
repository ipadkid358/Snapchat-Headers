/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaEventListener.h>

@protocol SCChatURLMediaOperaPresenterDelegate;
@class UIViewController, UIView, SCUserSession, SCOperaViewController, NSString;

@interface SCChatURLMediaOperaPresenter : NSObject <SCOperaEventListener> {

	UIViewController* _presentingViewController;
	UIView* _baseOperaView;
	id<SCChatURLMediaOperaPresenterDelegate> _delegate;
	long long _fromSource;
	SCUserSession* _userSession;
	SCOperaViewController* _operaVC;
	double _browserStartTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(id)registeredEventsForOperaSession;
-(void)viewWillResignActive;
-(void)_handleOperaOpenViewEvent;
-(void)_handleOperaCloseViewEvent;
-(void)_handleOperaCloseViewerEvent;
-(id)_operaConfigurationForRootViewModel:(id)arg1 ;
-(void)_emitBrowserSessionEvent;
-(id)initWithPresentingViewController:(id)arg1 baseOperaView:(id)arg2 delegate:(id)arg3 fromSource:(long long)arg4 userSession:(id)arg5 ;
-(void)presentURL:(id)arg1 ;
-(void)dealloc;
@end

