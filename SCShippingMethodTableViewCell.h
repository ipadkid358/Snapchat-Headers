/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCPaymentsSettingsTableViewCell.h>

@class UIImageView, UILabel;

@interface SCShippingMethodTableViewCell : SCPaymentsSettingsTableViewCell {

	UIImageView* _checkmarkImageView;
	UILabel* _shippingMethodLabel;
	UILabel* _priceLabel;
	BOOL _isCellSelected;

}
-(void)setCellSelected:(BOOL)arg1 ;
-(BOOL)isCellSelected;
-(void)setSelectedLayout;
-(void)setDeselectedLayout;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setItem:(id)arg1 ;
-(void)setShippingMethod:(id)arg1 ;
@end

