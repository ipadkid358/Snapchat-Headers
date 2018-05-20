/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Snapchat/SCGalleryLagunaHomeWifiInstructionsViewDelegate.h>

@protocol SCCachingMediaRequest, SCGalleryLagunaImportBarDelegate;
@class UILabel, UIView, UIButton, UIImageView, SCLoadingIndicatorView, SCGalleryLagunaHomeWifiInstructionsView, UICollectionView, NSArray, SCPreviewTooltipBalloon, NSString, SCUserSession;

@interface SCGalleryLagunaImportBar : UIView <UICollectionViewDataSource, SCGalleryLagunaHomeWifiInstructionsViewDelegate> {

	UILabel* _label;
	UIView* _importButton;
	UIButton* _wifiCancelButton;
	UIImageView* _eyeIcon;
	SCLoadingIndicatorView* _loadingIndicator;
	UIImageView* _thumbnailView;
	UIView* _lineContainer;
	SCGalleryLagunaHomeWifiInstructionsView* _homeWifiInstructionsView;
	UICollectionView* _collectionView;
	NSArray* _untransferredHdContent;
	id<SCCachingMediaRequest> _thumbnailRequest;
	SCPreviewTooltipBalloon* _hdOnlyTooltip;
	BOOL _importButtonHidden;
	BOOL _hdSnapsHidden;
	BOOL _shouldAnimateSpinner;
	BOOL _shouldShowThumbnailView;
	BOOL _shouldShowHomeWifiInstructions;
	id<SCGalleryLagunaImportBarDelegate> _delegate;
	NSString* _labelText;
	SCUserSession* _userSession;

}

@property (assign,nonatomic,__weak) id<SCGalleryLagunaImportBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * labelText;                                                //@synthesize labelText=_labelText - In the implementation block
@property (assign,nonatomic) BOOL importButtonHidden;                                           //@synthesize importButtonHidden=_importButtonHidden - In the implementation block
@property (assign,nonatomic) BOOL wifiCancelButtonHidden; 
@property (assign,nonatomic) BOOL hdSnapsHidden;                                                //@synthesize hdSnapsHidden=_hdSnapsHidden - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateSpinner;                                         //@synthesize shouldAnimateSpinner=_shouldAnimateSpinner - In the implementation block
@property (assign,nonatomic) BOOL shouldShowThumbnailView;                                      //@synthesize shouldShowThumbnailView=_shouldShowThumbnailView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowHomeWifiInstructions;                               //@synthesize shouldShowHomeWifiInstructions=_shouldShowHomeWifiInstructions - In the implementation block
@property (assign,nonatomic,__weak) SCUserSession * userSession;                                //@synthesize userSession=_userSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)displayHdOnlyTooltip;
-(void)hideHdOnlyTooltip;
-(void)setShouldAnimateSpinner:(BOOL)arg1 ;
-(BOOL)shouldAnimateSpinner;
-(void)homeWifiInstructionsViewDidPressAddButton:(id)arg1 ;
-(void)_handleWifiCancelButton;
-(void)_fetchContents;
-(void)_updateTransferringContentThumbnail;
-(void)setImportButtonHidden:(BOOL)arg1 ;
-(BOOL)wifiCancelButtonHidden;
-(void)setWifiCancelButtonHidden:(BOOL)arg1 ;
-(void)setHdSnapsHidden:(BOOL)arg1 ;
-(void)setShouldShowThumbnailView:(BOOL)arg1 ;
-(void)setShouldShowHomeWifiInstructions:(BOOL)arg1 ;
-(double)height:(BOOL)arg1 shouldDisplayHomeWifiInstructions:(BOOL)arg2 ;
-(BOOL)importButtonHidden;
-(BOOL)hdSnapsHidden;
-(BOOL)shouldShowThumbnailView;
-(BOOL)shouldShowHomeWifiInstructions;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SCGalleryLagunaImportBarDelegate>)arg1 ;
-(void)reload;
-(id<SCGalleryLagunaImportBarDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
@end

