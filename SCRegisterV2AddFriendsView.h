/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCRegisterV2BaseView.h>

@class UIView, UILabel, SCRegisterV2AddFriendsInterstitialView, UIButton;

@interface SCRegisterV2AddFriendsView : SCRegisterV2BaseView {

	UIEdgeInsets _horizontalInsets;
	UIView* _titleView;
	UILabel* _titleLabel;
	UILabel* _descLabel;
	UIView* _descContainer;
	SCRegisterV2AddFriendsInterstitialView* _interstitial;
	UIView* _currentTableView;
	double _headerOffset;
	double _descLabelMinOffset;
	UIButton* _skipButton;

}

@property (nonatomic,retain) UIButton * skipButton;              //@synthesize skipButton=_skipButton - In the implementation block
-(void)addObservers;
-(void)removeObservers;
-(void)onSkipPressed;
-(BOOL)isInterstitialShowing;
-(void)setContinueActivityAnimating:(BOOL)arg1 ;
-(void)setContinueButtonHidden:(BOOL)arg1 ;
-(void)hideIntersitial;
-(void)updateToInvite;
-(void)updateToOfficialAccountSuggestion;
-(BOOL)setHeaderOffset:(double)arg1 ;
-(void)initTitle;
-(void)initNextButton;
-(void)initDescription;
-(void)initSkipButton;
-(void)initInterstitial:(CGRect)arg1 ;
-(void)dealloc;
-(void)setTableView:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setSkipButton:(UIButton *)arg1 ;
-(UIButton *)skipButton;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
@end

