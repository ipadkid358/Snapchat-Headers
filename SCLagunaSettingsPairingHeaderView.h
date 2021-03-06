/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Snapchat/SCLagunaEventListener.h>

@protocol SCLagunaSettingsPairingHeaderViewDelegate;
@class UILabel, UIImageView, UIButton, NSString;

@interface SCLagunaSettingsPairingHeaderView : UIView <SCLagunaEventListener> {

	unsigned long long _state;
	id<SCLagunaSettingsPairingHeaderViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtextLabel;
	UIImageView* _imageView;
	UILabel* _infoLabel;
	UIButton* _infoButton;

}

@property (assign,nonatomic,__weak) id<SCLagunaSettingsPairingHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtextLabel;                                                     //@synthesize subtextLabel=_subtextLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                                        //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                                      //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                   //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)subtextLabel;
-(void)_didPressInfoButton;
-(void)_refreshViewForState:(unsigned long long)arg1 ;
-(double)_intrinsicHeightForLabel:(id)arg1 width:(double)arg2 ;
-(void)setSubtextLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<SCLagunaSettingsPairingHeaderViewDelegate>)arg1 ;
-(id<SCLagunaSettingsPairingHeaderViewDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(UILabel *)titleLabel;
-(double)height;
-(UIImageView *)imageView;
-(id)initWithDelegate:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
@end

