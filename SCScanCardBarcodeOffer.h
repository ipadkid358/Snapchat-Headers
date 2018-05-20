/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScanCardTableViewCell.h>

@class SOJUScannableActionBarcodeOffer, UIImageView, UIView, UILabel, UIImage, UIButton, NSString, SCBrowserViewController, SCUserSession;

@interface SCScanCardBarcodeOffer : SCScanCardTableViewCell {

	SOJUScannableActionBarcodeOffer* _barcodeOffer;
	UIImageView* _headerImageView;
	UIView* _headerBackgroundView;
	UILabel* _productTitleLabel;
	UIView* _horizontalSeparator;
	UIView* _productRatingContainerView;
	UILabel* _productPriceLabel;
	UIImageView* _productImageView;
	UIImage* _productImage;
	UIButton* _openButton;
	UIButton* _cancelButton;
	UIView* _secondaryTitle;
	NSString* _openButtonTitle;
	SCBrowserViewController* _browserViewController;
	double _priceLabelPush;
	BOOL _showProductPrice;
	BOOL _showProductRating;
	NSString* _scanData;
	NSString* _scannableId;
	int _version;
	SCUserSession* _userSession;

}
-(void)_didTapOpenButton;
-(void)transitionToContentAnimated:(BOOL)arg1 ;
-(id)initWithBarcodeOffer:(id)arg1 scanData:(id)arg2 scannableId:(id)arg3 version:(int)arg4 userSession:(id)arg5 ;
-(void)_didTapCancelButton;
-(void)_fetchProductImageWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupProductRatingWithHeight:(double)arg1 width:(double)arg2 rating:(double)arg3 ;
-(void)_launchLink;
-(void)_starForPosition:(int)arg1 withImage:(id)arg2 height:(double)arg3 width:(double)arg4 ;
-(void)_launchSystemViewWithUrl:(id)arg1 ;
-(void)_launchAppWithLink:(id)arg1 ;
-(void)loadData;
-(void)updateStyle;
-(void)_setupHeader;
@end

