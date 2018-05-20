/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol SCSearchSectionHeaderViewDelegate;
@class SCSearchLoadingIndicator, SCExpandedButton, NSString, UIView, UILabel, NSDictionary;

@interface SCSearchSectionHeaderView : UICollectionReusableView {

	SCSearchLoadingIndicator* _loadingIndicator;
	SCExpandedButton* _reloadButton;
	BOOL _shouldShowQueryStatus;
	BOOL _animating;
	id<SCSearchSectionHeaderViewDelegate> _delegate;
	long long _accessoryViewStyle;
	NSString* _title;
	UIView* _leftLine;
	UIView* _rightLine;
	UILabel* _titleLabel;
	NSDictionary* _textAttributes;

}

@property (nonatomic,retain) UIView * leftLine;                                                  //@synthesize leftLine=_leftLine - In the implementation block
@property (nonatomic,retain) UIView * rightLine;                                                 //@synthesize rightLine=_rightLine - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSDictionary * textAttributes;                                      //@synthesize textAttributes=_textAttributes - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                  //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic,__weak) id<SCSearchSectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long accessoryViewStyle;                                       //@synthesize accessoryViewStyle=_accessoryViewStyle - In the implementation block
@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL shouldShowQueryStatus;                                         //@synthesize shouldShowQueryStatus=_shouldShowQueryStatus - In the implementation block
-(void)_handleTapReloadButton;
-(UIView *)leftLine;
-(UIView *)rightLine;
-(void)_updateWithAccessoryViewStyle:(long long)arg1 ;
-(id)animationLayers;
-(void)setAccessoryViewStyle:(long long)arg1 ;
-(void)animateOut:(BOOL)arg1 ;
-(long long)accessoryViewStyle;
-(BOOL)shouldShowQueryStatus;
-(void)setShouldShowQueryStatus:(BOOL)arg1 ;
-(void)setLeftLine:(UIView *)arg1 ;
-(void)setRightLine:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchSectionHeaderViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<SCSearchSectionHeaderViewDelegate>)delegate;
-(NSString *)title;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)animateIn;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

