/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCScanCardTableViewCell.h>
#import <Snapchat/SCReportPageViewControllerDelegate.h>
#import <Snapchat/SCScanCardUnlockLensProtocol.h>
#import <Snapchat/SCScanCardOpenUrlProtocol.h>

@protocol SCLensRemoverProtocol, SCScanCardOpenUrlDelegate, SCScanCardUnlockLensDelegate;
@class SCScanCardButton, UIButton, UIView, UILabel, UIImageView, NSString, SCLens, SCUserSession, SCDeeplinkShareController, SCReportPageViewController, SCOpenUrlOperaViewPresenter, UIActivityIndicatorView;

@interface SCScanCardUnlockLens : SCScanCardTableViewCell <SCReportPageViewControllerDelegate, SCScanCardUnlockLensProtocol, SCScanCardOpenUrlProtocol> {

	SCScanCardButton* _unlockLensButton;
	SCScanCardButton* _sendToButton;
	SCScanCardButton* _takeSnapButton;
	SCScanCardButton* _cancelButton;
	SCScanCardButton* _moreLensesButton;
	UIButton* _shareButton;
	UIButton* _flagButton;
	UIView* _headerBackgroundView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _thumbnailImageView;
	CGSize _imageCroppedSize;
	double _cardHeightAfterLensLoad;
	NSString* _scanData;
	NSString* _scannableId;
	NSString* _filterId;
	NSString* _unlockDurationMessage;
	NSString* _displayUsername;
	int _version;
	SCLens* _lensUnlock;
	SCUserSession* _userSession;
	BOOL _isCreativeLens;
	BOOL _isUnlocked;
	BOOL _sendingUnlockRequest;
	BOOL _openFromPreview;
	BOOL _relaunchFromInformationIcon;
	BOOL _isDismissed;
	SCDeeplinkShareController* _deeplinkShareController;
	SCReportPageViewController* _reportController;
	id<SCLensRemoverProtocol> _lensRemover;
	SCOpenUrlOperaViewPresenter* _openUrlPresenter;
	id<SCScanCardOpenUrlDelegate> openUrlDelegate;
	id<SCScanCardUnlockLensDelegate> unlockLensDelegate;
	UIActivityIndicatorView* _imageLoadingIndicatorView;

}

@property (nonatomic,retain) UIActivityIndicatorView * imageLoadingIndicatorView;                     //@synthesize imageLoadingIndicatorView=_imageLoadingIndicatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCScanCardUnlockLensDelegate> unlockLensDelegate; 
@property (assign,nonatomic,__weak) id<SCScanCardOpenUrlDelegate> openUrlDelegate; 
-(void)_didTapShareButton;
-(void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3 ;
-(void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2 ;
-(void)_updateThumbnailImage;
-(void)transitionToContentAnimated:(BOOL)arg1 ;
-(void)_stopLoading;
-(id<SCScanCardUnlockLensDelegate>)unlockLensDelegate;
-(void)setUnlockLensDelegate:(id<SCScanCardUnlockLensDelegate>)arg1 ;
-(id<SCScanCardOpenUrlDelegate>)openUrlDelegate;
-(void)setOpenUrlDelegate:(id<SCScanCardOpenUrlDelegate>)arg1 ;
-(id)initWithLens:(id)arg1 filterId:(id)arg2 scanData:(id)arg3 openFromPreview:(BOOL)arg4 isCreativeLens:(BOOL)arg5 isUnlocked:(BOOL)arg6 relaunchFromInformationIcon:(BOOL)arg7 unlockDurationMessage:(id)arg8 userSession:(id)arg9 scannableId:(id)arg10 version:(int)arg11 lensRemover:(id)arg12 ;
-(void)_setupBrowser;
-(void)_dismissCardView;
-(UIActivityIndicatorView *)imageLoadingIndicatorView;
-(void)_launchLensView;
-(void)_showFailureMessage;
-(void)setImageLoadingIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(BOOL)_shouldShowMoreLensesButton;
-(void)_showMoreLenses;
-(void)_didTapTakeSnapButton;
-(void)_didTapFlagButton;
-(void)_didTapSendToButton;
-(void)_didTapUnlockButton:(id)arg1 ;
-(void)_logScanActionEventWithUserActionType:(long long)arg1 ;
-(void)updateStyle;
-(void)_startLoading;
@end

