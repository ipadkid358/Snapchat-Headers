/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGalleryPrivateGalleryFlowPageViewController.h>
#import <Snapchat/SCLinkLabelDelegate.h>
#import <Snapchat/SCGalleryInformationWebViewControllerDelegate.h>

@protocol SCGalleryPrivateGalleryStartSetupViewControllerDelegate;
@class SCGalleryInformationWebViewController, UIView, NSString;

@interface SCGalleryPrivateGalleryStartSetupViewController : SCGalleryPrivateGalleryFlowPageViewController <SCLinkLabelDelegate, SCGalleryInformationWebViewControllerDelegate> {

	SCGalleryInformationWebViewController* _informationViewController;
	UIView* _headerView;
	id<SCGalleryPrivateGalleryStartSetupViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGalleryPrivateGalleryStartSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didPressBackButton;
-(void)galleryInformationWebViewControllerDidPressBack:(id)arg1 ;
-(void)_didPressStartButton;
-(void)linkLabel:(id)arg1 didSelectUrl:(id)arg2 ;
-(void)setDelegate:(id<SCGalleryPrivateGalleryStartSetupViewControllerDelegate>)arg1 ;
-(id<SCGalleryPrivateGalleryStartSetupViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end
