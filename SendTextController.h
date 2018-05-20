/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Snapchat/MFMessageComposeViewControllerDelegate.h>

@protocol SendTextControllerDelegate;
@class SCMessageComposeViewController, NSDictionary, NSArray, UIViewController, NSString;

@interface SendTextController : UIViewController <MFMessageComposeViewControllerDelegate> {

	BOOL _messageComposeVCDismissed;
	SCMessageComposeViewController* _messageVC;
	BOOL _clearBackground;
	NSDictionary* _context;
	id<SendTextControllerDelegate> _delegate;
	NSArray* _recipients;
	unsigned long long _textType;
	UIViewController* _vc;
	NSString* _deeplink;

}

@property (nonatomic,retain) NSDictionary * context;                                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<SendTextControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                        //@synthesize recipients=_recipients - In the implementation block
@property (assign,nonatomic) unsigned long long textType;                                 //@synthesize textType=_textType - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * vc;                                //@synthesize vc=_vc - In the implementation block
@property (assign,nonatomic) BOOL clearBackground;                                        //@synthesize clearBackground=_clearBackground - In the implementation block
@property (nonatomic,copy) NSString * deeplink;                                           //@synthesize deeplink=_deeplink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVc:(UIViewController *)arg1 ;
-(BOOL)clearBackground;
-(void)presentModalComposeViewController;
-(long long)inviteTypeForTextType:(unsigned long long)arg1 ;
-(id)inviteUrlForTextType:(unsigned long long)arg1 ;
-(id)getBodyForTextType:(unsigned long long)arg1 ;
-(void)_didDismissViewControllerWithStatus:(int)arg1 ;
-(UIViewController *)vc;
-(void)setDelegate:(id<SendTextControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SendTextControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(NSDictionary *)context;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)deeplink;
-(void)setDeeplink:(NSString *)arg1 ;
-(void)setClearBackground:(BOOL)arg1 ;
-(unsigned long long)textType;
-(void)setTextType:(unsigned long long)arg1 ;
@end

