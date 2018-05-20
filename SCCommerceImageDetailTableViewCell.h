/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, SCUserSession, UIView, UIImageView, SCLoadingIndicatorView;

@interface SCCommerceImageDetailTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _rightLabel;
	SCUserSession* _userSession;
	UIView* _bottomBorderLine;
	BOOL _shouldShowBottomBorderLine;
	BOOL _isShowingImage;
	UIView* _leftViewContainer;
	UIImageView* _customImageView;
	SCLoadingIndicatorView* _activityView;

}

@property (nonatomic,retain) UIView * leftViewContainer;                         //@synthesize leftViewContainer=_leftViewContainer - In the implementation block
@property (nonatomic,retain) UIImageView * customImageView;                      //@synthesize customImageView=_customImageView - In the implementation block
@property (nonatomic,retain) SCLoadingIndicatorView * activityView;              //@synthesize activityView=_activityView - In the implementation block
@property (assign,nonatomic) BOOL isShowingImage;                                //@synthesize isShowingImage=_isShowingImage - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBottomBorderLine;                    //@synthesize shouldShowBottomBorderLine=_shouldShowBottomBorderLine - In the implementation block
+(id)subtitleStringForItem:(id)arg1 ;
+(double)heightForBillingItem:(id)arg1 ;
+(double)merchantHeight;
-(void)setIsShowingImage:(BOOL)arg1 ;
-(void)_setMerchantDetails:(id)arg1 ;
-(void)_loadImageData:(id)arg1 ;
-(void)setShouldShowBottomBorderLine:(BOOL)arg1 ;
-(void)configureForOrderSummary:(id)arg1 userSession:(id)arg2 ;
-(void)configureForBillingItem:(id)arg1 userSession:(id)arg2 ;
-(void)configureForMerchantInfo:(id)arg1 userSession:(id)arg2 ;
-(BOOL)shouldShowBottomBorderLine;
-(UIView *)leftViewContainer;
-(void)setLeftViewContainer:(UIView *)arg1 ;
-(BOOL)isShowingImage;
-(void)setNeedsLayout;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(SCLoadingIndicatorView *)activityView;
-(void)setActivityView:(SCLoadingIndicatorView *)arg1 ;
-(UIImageView *)customImageView;
-(void)setCustomImageView:(UIImageView *)arg1 ;
@end

