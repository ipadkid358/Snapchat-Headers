/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapCashBlockerResolver.h>
#import <Snapchat/SCMobileSettingsDelegate.h>
#import <Snapchat/SCCashIneligibleVCDelegate.h>

@protocol SCSnapCashBlockerResolutionResultProtocol;
@class MobileSettingsViewController, NSString;

@interface SCSnapCashVerifiedPhoneBlockerResolver : SCSnapCashBlockerResolver <SCMobileSettingsDelegate, SCCashIneligibleVCDelegate> {

	BOOL _viewIsDone;
	BOOL _newNumberMode;
	id<SCSnapCashBlockerResolutionResultProtocol> _resolutionResultDelegate;
	MobileSettingsViewController* _viewController;

}

@property (nonatomic,retain) id<SCSnapCashBlockerResolutionResultProtocol> resolutionResultDelegate;              //@synthesize resolutionResultDelegate=_resolutionResultDelegate - In the implementation block
@property (nonatomic,retain) MobileSettingsViewController * viewController;                                       //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL viewIsDone;                                                                     //@synthesize viewIsDone=_viewIsDone - In the implementation block
@property (assign,nonatomic) BOOL newNumberMode;                                                                  //@synthesize newNumberMode=_newNumberMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)blockerType;
-(id)getViewController;
-(void)resolveBlockerWithDelegate:(id)arg1 ;
-(BOOL)needsMobileSettingsViewController;
-(void)setViewIsDone:(BOOL)arg1 ;
-(void)setNewNumberMode:(BOOL)arg1 ;
-(id)mobileSettingsViewController;
-(BOOL)isIneligible;
-(id)ineligibleViewController;
-(void)setResolutionResultDelegate:(id<SCSnapCashBlockerResolutionResultProtocol>)arg1 ;
-(void)resolveIfViewIsDoneAndDelegateAvailable;
-(BOOL)viewIsDone;
-(id<SCSnapCashBlockerResolutionResultProtocol>)resolutionResultDelegate;
-(BOOL)newNumberMode;
-(void)showIneligibleViewController;
-(void)verifyMobileDidSucceed;
-(void)verifyMobileWasCancelled;
-(void)okayButtonPressed;
-(id)initWithBlocker:(id)arg1 payment:(id)arg2 actionHandler:(id)arg3 userSession:(id)arg4 ;
-(void)_cancelPayment;
-(void)setViewController:(MobileSettingsViewController *)arg1 ;
-(MobileSettingsViewController *)viewController;
-(void)resolve;
@end

