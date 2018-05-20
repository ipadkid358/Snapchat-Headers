/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol NavigationDelegate;
@class NSDictionary, NSString, SCDeepLinkURL, SCLoadingIndicatorView, NSMutableArray;

@interface SCCameraDeepLinkSetupViewController : UIViewController {

	NSDictionary* _metadata;
	NSString* _encryptionKey;
	NSString* _encryptionIv;
	SCDeepLinkURL* _deepLinkUrl;
	SCLoadingIndicatorView* _loadingIndicatorView;
	NSDictionary* _payload;
	NSMutableArray* _stickers;
	id<NavigationDelegate> _navigationDelegate;
	long long _safeBrowsingResult;

}

@property (nonatomic,retain) SCDeepLinkURL * deepLinkUrl;                                   //@synthesize deepLinkUrl=_deepLinkUrl - In the implementation block
@property (nonatomic,retain) SCLoadingIndicatorView * loadingIndicatorView;                 //@synthesize loadingIndicatorView=_loadingIndicatorView - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;                                        //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSMutableArray * stickers;                                       //@synthesize stickers=_stickers - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) long long safeBrowsingResult;                                  //@synthesize safeBrowsingResult=_safeBrowsingResult - In the implementation block
-(SCDeepLinkURL *)deepLinkUrl;
-(void)setStickers:(NSMutableArray *)arg1 ;
-(id)initWithDeepLinkUrl:(id)arg1 navigationDelegate:(id)arg2 ;
-(BOOL)parseDeepLinkUrl;
-(void)startLoadCameraContentWithDecryption;
-(/*^block*/id)encryptionKeySuccessBlockWithSession:(id)arg1 ;
-(void)startLoadCameraContentWithSession:(id)arg1 ;
-(void)setSafeBrowsingResult:(long long)arg1 ;
-(void)finishLoadCameraContent;
-(BOOL)isPayloadValid:(id)arg1 ;
-(void)setDeepLinkUrl:(SCDeepLinkURL *)arg1 ;
-(long long)safeBrowsingResult;
-(NSDictionary *)payload;
-(void)loadView;
-(void)viewDidLoad;
-(void)setPayload:(NSDictionary *)arg1 ;
-(id<NavigationDelegate>)navigationDelegate;
-(NSMutableArray *)stickers;
-(void)setLoadingIndicatorView:(SCLoadingIndicatorView *)arg1 ;
-(SCLoadingIndicatorView *)loadingIndicatorView;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end
