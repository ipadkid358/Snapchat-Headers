/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIImageView, UILabel, SCBitmojiOutfitBrand;

@interface SCBitmojiOutfitCollectionViewHeader : UICollectionReusableView {

	UIImageView* _logoView;
	UIImageView* _backgroundView;
	UILabel* _brandLabel;
	SCBitmojiOutfitBrand* _brand;

}

@property (nonatomic,retain) SCBitmojiOutfitBrand * brand;              //@synthesize brand=_brand - In the implementation block
-(void)setText:(id)arg1 color:(id)arg2 ;
-(SCBitmojiOutfitBrand *)brand;
-(void)setBrand:(SCBitmojiOutfitBrand *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackground:(id)arg1 ;
-(void)setLogo:(id)arg1 ;
@end

