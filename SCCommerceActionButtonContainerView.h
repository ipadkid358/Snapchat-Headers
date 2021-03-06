/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCCommerceActionButtonContainerViewDelegate;
@class SCScanCardButton, NSString, SCLoadingIndicatorView, UIColor, UIView, UILabel;

@interface SCCommerceActionButtonContainerView : UIView {

	BOOL _isLoading;
	BOOL _hasError;
	id<SCCommerceActionButtonContainerViewDelegate> _delegate;
	SCScanCardButton* _actionButton;
	NSString* _title;
	NSString* _errorMessage;
	SCLoadingIndicatorView* _loadingIndicator;
	UIColor* _defaultActionButtonColor;
	UIView* _errorView;
	UILabel* _errorLabel;
	UIView* _extraBottomOperaPaddingView;

}

@property (nonatomic,retain) SCScanCardButton * actionButton;                                              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) SCLoadingIndicatorView * loadingIndicator;                                    //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,retain) UIColor * defaultActionButtonColor;                                           //@synthesize defaultActionButtonColor=_defaultActionButtonColor - In the implementation block
@property (nonatomic,retain) UIView * errorView;                                                           //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;                                                         //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) UIView * extraBottomOperaPaddingView;                                         //@synthesize extraBottomOperaPaddingView=_extraBottomOperaPaddingView - In the implementation block
@property (assign,nonatomic,__weak) id<SCCommerceActionButtonContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;                                                      //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                                               //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) BOOL hasError;                                                                //@synthesize hasError=_hasError - In the implementation block
+(double)measuredContainerHeight:(BOOL)arg1 ;
-(void)_didTapActionButton;
-(void)_reconfigureTextData;
-(UIColor *)defaultActionButtonColor;
-(void)setDefaultActionButtonColor:(UIColor *)arg1 ;
-(UIView *)extraBottomOperaPaddingView;
-(void)setExtraBottomOperaPaddingView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCCommerceActionButtonContainerViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<SCCommerceActionButtonContainerViewDelegate>)delegate;
-(NSString *)title;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(BOOL)hasError;
-(void)setHasError:(BOOL)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setLoadingIndicator:(SCLoadingIndicatorView *)arg1 ;
-(SCLoadingIndicatorView *)loadingIndicator;
-(void)setActionButton:(SCScanCardButton *)arg1 ;
-(SCScanCardButton *)actionButton;
-(UILabel *)errorLabel;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(UIView *)errorView;
-(void)setErrorView:(UIView *)arg1 ;
@end

