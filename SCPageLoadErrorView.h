/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIButton, UILabel, UIImageView;

@interface SCPageLoadErrorView : UIView {

	UIButton* _retryButton;
	UILabel* _oopsLabel;
	UILabel* _connectionErrorLabel;
	UIImageView* _connectionErrorImage;

}

@property (nonatomic,retain) UILabel * oopsLabel;                             //@synthesize oopsLabel=_oopsLabel - In the implementation block
@property (nonatomic,retain) UILabel * connectionErrorLabel;                  //@synthesize connectionErrorLabel=_connectionErrorLabel - In the implementation block
@property (nonatomic,retain) UIImageView * connectionErrorImage;              //@synthesize connectionErrorImage=_connectionErrorImage - In the implementation block
@property (nonatomic,retain) UIButton * retryButton;                          //@synthesize retryButton=_retryButton - In the implementation block
-(UIButton *)retryButton;
-(void)initConnectionErrorImage:(id)arg1 ;
-(void)initConnectionErrorLabel;
-(void)initOopsLabel;
-(void)initRetryButton;
-(void)setConnectionErrorImage:(UIImageView *)arg1 ;
-(UIImageView *)connectionErrorImage;
-(void)setConnectionErrorLabel:(UILabel *)arg1 ;
-(UILabel *)connectionErrorLabel;
-(void)setOopsLabel:(UILabel *)arg1 ;
-(UILabel *)oopsLabel;
-(void)setRetryButton:(UIButton *)arg1 ;
-(id)initWithImage:(id)arg1 ;
@end

