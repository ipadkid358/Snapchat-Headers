/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOperaEventListener.h>
#import <Snapchat/SCProductIntroPageViewControllerDismissalDelegate.h>

@protocol SCCommerceOperaPresenterDelegate;
@class SCCommerceOperaPresentationViewController, SCOperaEventListenerAnnouncer, UIViewController, SOJUCommerceProductInfo, NSDictionary, SCLens, SCOperaViewController, NSString, SCUserSession, SCDeeplinkShareController;

@interface SCCommerceOperaPresenter : NSObject <SCOperaEventListener, SCProductIntroPageViewControllerDismissalDelegate> {

	SCCommerceOperaPresentationViewController* _containerViewController;
	SCOperaEventListenerAnnouncer* _eventAnnouncer;
	UIViewController* _presentingViewController;
	SOJUCommerceProductInfo* _productInfo;
	NSDictionary* _additionalInfo;
	SCLens* _unlockedLens;
	BOOL _isModalPresentation;
	BOOL _isVisible;
	BOOL _wasBackgrounded;
	id<SCCommerceOperaPresenterDelegate> _operaPresenterDelegate;
	SCOperaViewController* _productViewController;
	NSString* _productId;
	SCUserSession* _userSession;
	SCDeeplinkShareController* _shareController;

}

@property (nonatomic,retain) SCOperaViewController * productViewController;                                   //@synthesize productViewController=_productViewController - In the implementation block
@property (nonatomic,retain) NSString * productId;                                                            //@synthesize productId=_productId - In the implementation block
@property (nonatomic,retain) SCUserSession * userSession;                                                     //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) SCDeeplinkShareController * shareController;                                     //@synthesize shareController=_shareController - In the implementation block
@property (assign,nonatomic,__weak) id<SCCommerceOperaPresenterDelegate> operaPresenterDelegate;              //@synthesize operaPresenterDelegate=_operaPresenterDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isPresenting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_deeplinkURL;
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(id)registeredEventsForOperaSession;
-(id)initWithDeepLinkURL:(id)arg1 additionalInfo:(id)arg2 userSession:(id)arg3 ;
-(void)setOperaPresenterDelegate:(id<SCCommerceOperaPresenterDelegate>)arg1 ;
-(void)presentModallyFromViewController:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 baseFrame:(CGRect)arg2 ;
-(void)dismissWithDidBackground:(BOOL)arg1 ;
-(void)_presentFromViewController:(id)arg1 baseView:(id)arg2 baseViewFrame:(CGRect)arg3 ;
-(void)recordLaunchMetricsForDeepLinkFromAdditionalInfo:(id)arg1 ;
-(id)productConfiguration;
-(id)pageProperties;
-(void)cleanupOperaVC;
-(void)showNotShareableMessage;
-(void)showShareFailureMessage;
-(SCDeeplinkShareController *)shareController;
-(void)productIntroPageViewControllerShouldDismissAndShowUnlockedLens:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 baseView:(id)arg2 ;
-(id<SCCommerceOperaPresenterDelegate>)operaPresenterDelegate;
-(void)setShareController:(SCDeeplinkShareController *)arg1 ;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(NSString *)productId;
-(void)setProductId:(NSString *)arg1 ;
-(void)setProductViewController:(SCOperaViewController *)arg1 ;
-(SCOperaViewController *)productViewController;
-(BOOL)isPresenting;
@end

