/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCCameraBackgroundViewController.h>
#import <Snapchat/SCReportContinueDelegate.h>
#import <Snapchat/TTTAttributedLabelDelegate.h>

@protocol SCAbuseReportUserInteractionDelegate;
@class SCUserSession, NSString;

@interface SCAbuseReportController : SCCameraBackgroundViewController <SCReportContinueDelegate, TTTAttributedLabelDelegate> {

	SCUserSession* _userSession;
	BOOL _didLoggedIn;
	NSString* _reportMessage;
	id<SCAbuseReportUserInteractionDelegate> _delegate;

}

@property (retain) NSString * reportMessage;                                                        //@synthesize reportMessage=_reportMessage - In the implementation block
@property (assign) BOOL didLoggedIn;                                                                //@synthesize didLoggedIn=_didLoggedIn - In the implementation block
@property (assign,nonatomic,__weak) id<SCAbuseReportUserInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 ;
-(void)setReportMessage:(NSString *)arg1 ;
-(void)setDidLoggedIn:(BOOL)arg1 ;
-(NSString *)reportMessage;
-(BOOL)didLoggedIn;
-(void)setDelegate:(id<SCAbuseReportUserInteractionDelegate>)arg1 ;
-(id<SCAbuseReportUserInteractionDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)continueButtonPressed;
@end

