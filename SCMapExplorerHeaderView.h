/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCMapExplorerHeaderViewDelegate;
@class UILabel, CALayer, SCGrowingButton, SCMapLocationSettingsButton, NSString;

@interface SCMapExplorerHeaderView : UIView {

	UILabel* _titleLabel;
	CALayer* _lineLayer;
	id<SCMapExplorerHeaderViewDelegate> _delegate;
	SCGrowingButton* _closeButton;
	SCMapLocationSettingsButton* _locationSettingsButton;

}

@property (assign,nonatomic,__weak) id<SCMapExplorerHeaderViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCGrowingButton * closeButton;                                     //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) SCMapLocationSettingsButton * locationSettingsButton;              //@synthesize locationSettingsButton=_locationSettingsButton - In the implementation block
@property (nonatomic,copy) NSString * title; 
+(id)_titleLabelTextAttributes;
-(void)_didTapCloseButton;
-(void)_didTapShareLocation;
-(SCMapLocationSettingsButton *)locationSettingsButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCMapExplorerHeaderViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<SCMapExplorerHeaderViewDelegate>)delegate;
-(NSString *)title;
-(SCGrowingButton *)closeButton;
@end

