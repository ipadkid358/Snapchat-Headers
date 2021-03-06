/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayerViewController.h>
#import <Snapchat/SCMomentsOptInViewDelegate.h>

@protocol SCSearchItemDownloading;
@class SCUserSession, SCMomentsOptInDataProvider, SCMomentsOptInManager, SCMomentsOptInView, NSString;

@interface SCMomentsOptInViewController : SCOperaLayerViewController <SCMomentsOptInViewDelegate> {

	SCUserSession* _userSession;
	SCMomentsOptInDataProvider* _dataProvider;
	SCMomentsOptInManager* _optInManager;
	SCMomentsOptInView* _optInView;
	long long _source;
	BOOL _error;
	BOOL _previousStatusBarHidden;
	id<SCSearchItemDownloading> _imageDownloader;

}

@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(id<SCSearchItemDownloading>)imageDownloader;
-(void)didUpdateSubscription:(BOOL)arg1 optInEvent:(id)arg2 failure:(/*^block*/id)arg3 ;
-(void)dismissMomentsOptIn;
-(void)viewDidFullyDisappear;
-(long long)pageabilityForRelativePosition:(unsigned long long)arg1 ;
-(id)initWithUserSession:(id)arg1 source:(long long)arg2 ;
-(void)_updateModel:(id)arg1 ;
-(void)_announceNotificationOptInSettingsPageView;
-(void)_handleSubscriptionFailure:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_setError:(id)arg1 ;
@end

