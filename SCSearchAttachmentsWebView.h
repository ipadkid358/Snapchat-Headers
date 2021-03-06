/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Snapchat/SCSearchViewModelConfigurable.h>
#import <Snapchat/SCSearchScrollViewDismissalControllable.h>

@protocol SCSearchAttachmentsWebViewDelegate;
@class SCWebViewProgressIndicator, SCAttachmentsBackButton, SCSafeBrowsingWarningView, WKWebView, SCSearchActionButton, NSString;

@interface SCSearchAttachmentsWebView : UIView <WKNavigationDelegate, UIScrollViewDelegate, SCSearchViewModelConfigurable, SCSearchScrollViewDismissalControllable> {

	SCWebViewProgressIndicator* _progressView;
	SCAttachmentsBackButton* _backButton;
	SCSafeBrowsingWarningView* _safeBrowsingWarningView;
	CGRect _currentMaskRect;
	double _originOffsetY;
	BOOL _safeBrowsingViewHidden;
	id _viewModel;
	id<SCSearchAttachmentsWebViewDelegate> _delegate;
	WKWebView* _webView;
	SCSearchActionButton* _attachButton;
	double _progressViewOffset;
	long long _safeBrowsingUrlType;
	CGPoint _attachButtonOriginOffset;
	UIEdgeInsets _layoutInsets;

}

@property (assign,nonatomic,__weak) id<SCSearchAttachmentsWebViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                                    //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) SCWebViewProgressIndicator * progressView;                              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) SCSearchActionButton * attachButton;                                    //@synthesize attachButton=_attachButton - In the implementation block
@property (assign,getter=isBackButtonHidden,nonatomic) BOOL backButtonHidden; 
@property (assign,nonatomic) UIEdgeInsets layoutInsets;                                                //@synthesize layoutInsets=_layoutInsets - In the implementation block
@property (assign,nonatomic) double progressViewOffset;                                                //@synthesize progressViewOffset=_progressViewOffset - In the implementation block
@property (assign,getter=isSafeBrowsingViewHidden,nonatomic) BOOL safeBrowsingViewHidden;              //@synthesize safeBrowsingViewHidden=_safeBrowsingViewHidden - In the implementation block
@property (assign,nonatomic) CGPoint attachButtonOriginOffset;                                         //@synthesize attachButtonOriginOffset=_attachButtonOriginOffset - In the implementation block
@property (nonatomic,readonly) long long safeBrowsingUrlType;                                          //@synthesize safeBrowsingUrlType=_safeBrowsingUrlType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id viewModel;                                                             //@synthesize viewModel=_viewModel - In the implementation block
-(void)_handleButtonTap:(id)arg1 ;
-(void)setLayoutInsets:(UIEdgeInsets)arg1 ;
-(double)targetOffsetY;
-(void)applyTranslation:(CGPoint)arg1 ;
-(void)setBackButtonHidden:(BOOL)arg1 ;
-(SCSearchActionButton *)attachButton;
-(void)setAttachButtonOriginOffset:(CGPoint)arg1 ;
-(void)setAttachButtonHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_didTapBackButton:(id)arg1 ;
-(void)_layoutButtonsWithEffectiveBounds:(CGRect)arg1 ;
-(void)_updateRoundedCornerMaskIfNeeded;
-(void)setSafeBrowsingViewStateForUrlType:(long long)arg1 ;
-(BOOL)_attachButtonIsHidden;
-(void)_setAttachButtonDestinationAlpha:(double)arg1 offset:(CGPoint)arg2 ;
-(id)initWithSafeBrowsingWarningView:(id)arg1 ;
-(BOOL)isBackButtonHidden;
-(BOOL)isAttachButtonHidden;
-(double)progressViewOffset;
-(void)setProgressViewOffset:(double)arg1 ;
-(BOOL)isSafeBrowsingViewHidden;
-(void)setSafeBrowsingViewHidden:(BOOL)arg1 ;
-(CGPoint)attachButtonOriginOffset;
-(long long)safeBrowsingUrlType;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchAttachmentsWebViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<SCSearchAttachmentsWebViewDelegate>)delegate;
-(CGPoint)contentOffset;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(WKWebView *)webView;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
-(SCWebViewProgressIndicator *)progressView;
-(UIEdgeInsets)layoutInsets;
@end

