/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaPresentersFactoryProtocol.h>

@protocol SCOperaConfigurationFactoryProtocol, SCLensOperaPresenterDelegateProtocol, NavigationDelegate;
@class UIViewController, UIView, SCLensLogger, SCUserSession, NSString;

@interface SCLensOperaPresentersFactory : NSObject <SCOperaPresentersFactoryProtocol> {

	id<SCOperaConfigurationFactoryProtocol> _operaConfigurationFactory;
	id<SCLensOperaPresenterDelegateProtocol> _presenterDelegate;
	UIViewController* _fromViewController;
	UIView* _fromBaseView;
	id<NavigationDelegate> _navigationDelegate;
	SCLensLogger* _lensLogger;
	SCUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isDeeplinkPresenterSupportedForLensCTA:(id)arg1 ;
-(id)ctaOperaPresenterForLens:(id)arg1 ;
-(id)initWithPresenterDelegate:(id)arg1 fromViewController:(id)arg2 fromBaseView:(id)arg3 lensLogger:(id)arg4 navigationDelegate:(id)arg5 userSession:(id)arg6 ;
-(id)initWithOperaConfigurationFactory:(id)arg1 presenterDelegate:(id)arg2 navigationDelegate:(id)arg3 fromViewController:(id)arg4 fromBaseView:(id)arg5 lensLogger:(id)arg6 userSession:(id)arg7 ;
-(id)_deeplinkCtaOperaPresenterForLens:(id)arg1 ;
@end

