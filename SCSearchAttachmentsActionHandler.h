/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchEventListener.h>
#import <Snapchat/SCSearchActionHandling.h>
#import <Snapchat/SCSearchEventAnnouncing.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class SCSearchSession, SCSearchAttachmentsDataProvider, SCSearchEventListenerAnnouncer, SCSearchNavigationCoordinator, NSString;

@interface SCSearchAttachmentsActionHandler : NSObject <SCSearchEventListener, SCSearchActionHandling, SCSearchEventAnnouncing, UIViewControllerTransitioningDelegate> {

	SCSearchSession* _searchSession;
	SCSearchAttachmentsDataProvider* _dataProvider;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	BOOL _isOpeningWebView;
	SCSearchNavigationCoordinator* _searchNavigationCoordinator;
	unsigned long long _navigationStyle;

}

@property (assign,nonatomic,__weak) SCSearchNavigationCoordinator * searchNavigationCoordinator;              //@synthesize searchNavigationCoordinator=_searchNavigationCoordinator - In the implementation block
@property (assign,nonatomic) unsigned long long navigationStyle;                                              //@synthesize navigationStyle=_navigationStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(BOOL)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3 ;
-(unsigned long long)navigationStyle;
-(SCSearchNavigationCoordinator *)searchNavigationCoordinator;
-(void)setSearchNavigationCoordinator:(SCSearchNavigationCoordinator *)arg1 ;
-(id)initWithSearchSession:(id)arg1 dataProvider:(id)arg2 ;
-(void)_removeURL:(id)arg1 ;
-(void)_presentWebViewControllerWithURL:(id)arg1 ;
-(void)_showRemoveURLAlertViewWithURL:(id)arg1 title:(id)arg2 ;
-(BOOL)_presentPhoneOrSMSWithActionModel:(id)arg1 ;
-(void)didFinishOpeningWebView;
-(void)setNavigationStyle:(unsigned long long)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
