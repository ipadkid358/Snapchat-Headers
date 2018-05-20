/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol SCLagunaSettingsInAppPurchaseCellDelegate;
@class UIImageView, UILabel, SCButton, UIView;

@interface SCLagunaSettingsInAppPurchaseCell : UITableViewCell {

	UIImageView* _spectaclesIcon;
	UIImageView* _spectaclesTitle;
	UILabel* _subtitle;
	UILabel* _info;
	SCButton* _shopButton;
	UIImageView* _sampleVideo;
	UIView* _featuresSectionBackground;
	UIImageView* _pressFeatureImage;
	UIImageView* _syncFeatureImage;
	UILabel* _pressFeatureTitle;
	UILabel* _pressFeatureDescription;
	UILabel* _syncFeatureTitle;
	UILabel* _syncFeatureDescription;
	UIImageView* _productSpreadImage;
	UILabel* _productSpreadInfo;
	SCButton* _getYoursButton;
	id<SCLagunaSettingsInAppPurchaseCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCLagunaSettingsInAppPurchaseCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_imageFromPath:(id)arg1 ;
-(void)_tapShopButton;
-(void)setDelegate:(id<SCLagunaSettingsInAppPurchaseCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<SCLagunaSettingsInAppPurchaseCellDelegate>)delegate;
@end
