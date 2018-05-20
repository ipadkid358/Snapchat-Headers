/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBaseMediaCardView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILabel, SCExpandedButton, UIActivityIndicatorView, UIView, UIImageView, UIColor, SCMediaCardViewModel, SCUserSession, NSString;

@interface SCTextMediaCardView : SCBaseMediaCardView <UIGestureRecognizerDelegate> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	SCExpandedButton* _actionButton;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _thumbnailImageView;
	UIImageView* _accessoryImageView;
	UIColor* _backgroundColor;
	UIView* _subtitleView;
	SCMediaCardViewModel* _viewModel;
	SCUserSession* _userSession;

}

@property (nonatomic,readonly) UIView * subtitleView;                           //@synthesize subtitleView=_subtitleView - In the implementation block
@property (nonatomic,readonly) UIImageView * thumbnailImageView; 
@property (nonatomic,readonly) UIImageView * accessoryImageView; 
@property (nonatomic,readonly) UIColor * backgroundColor;                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SCMediaCardViewModel * viewModel;                  //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,__weak,readonly) SCUserSession * userSession;              //@synthesize userSession=_userSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_actionButtonColor;
+(id)_actionButtonFont;
+(id)_actionButtonBorderColor;
-(UIView *)subtitleView;
-(void)thumbnailImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateWithViewModel:(id)arg1 backgroundColor:(id)arg2 ;
-(id)initWithBackgroundColor:(id)arg1 userSession:(id)arg2 ;
-(BOOL)shouldApplyThumbnailForLoadedViewModel:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 backgroundColor:(id)arg2 userSession:(id)arg3 ;
-(id)initWithBackgroundColor:(id)arg1 hasBorder:(BOOL)arg2 userSession:(id)arg3 ;
-(void)_initTitleLabel;
-(void)_initActivityIndicator;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 actionText:(id)arg3 accessoryIcon:(id)arg4 ;
-(void)_updateThumbnailImageViewShape;
-(void)_resetThumbnail;
-(void)showThumbnailImage:(id)arg1 isGrayScale:(BOOL)arg2 ;
-(void)_hideLoadingView;
-(void)setActionButtonText:(id)arg1 ;
-(void)layoutSubviews;
-(UIColor *)backgroundColor;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)height;
-(SCUserSession *)userSession;
-(UIImageView *)accessoryImageView;
-(id)subtitleLabel;
-(SCMediaCardViewModel *)viewModel;
-(void)setViewModel:(SCMediaCardViewModel *)arg1 ;
-(void)showLoadingView;
-(id)actionButton;
-(UIImageView *)thumbnailImageView;
-(void)actionButtonPressed:(id)arg1 ;
@end
