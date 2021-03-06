/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCShakeToReportDelegate.h>

@protocol SCSelectGroupRecipientsDelegate;
@class SCTableIndex, SCGradientView, UICollectionView, SCSendConfirmationView, SCSendToPreviewPopupView, UIImageView, NSString;

@interface SCSendToView : UIView <SCShakeToReportDelegate> {

	double _bottomOffset;
	SCTableIndex* _indexView;
	BOOL _hideScrollView;
	double _indexScrollTopOffset;
	double _topSectionOffset;
	SCGradientView* _gradientView;
	unsigned long long _sendToViewStyle;
	UICollectionView* _contentCollectionView;
	SCSendConfirmationView* _sendConfirmationView;
	double _keyboardHeight;
	id<SCSelectGroupRecipientsDelegate> _groupRecipientsDelegate;
	SCSendToPreviewPopupView* _sendPreviewPopupView;
	UIImageView* _backgroundImagePreviewView;
	UIEdgeInsets _layoutInset;

}

@property (nonatomic,retain) UICollectionView * contentCollectionView;                                        //@synthesize contentCollectionView=_contentCollectionView - In the implementation block
@property (nonatomic,retain) SCSendConfirmationView * sendConfirmationView;                                   //@synthesize sendConfirmationView=_sendConfirmationView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutInset;                                                        //@synthesize layoutInset=_layoutInset - In the implementation block
@property (assign,nonatomic) double keyboardHeight;                                                           //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic,__weak) id<SCSelectGroupRecipientsDelegate> groupRecipientsDelegate;              //@synthesize groupRecipientsDelegate=_groupRecipientsDelegate - In the implementation block
@property (nonatomic,retain) SCSendToPreviewPopupView * sendPreviewPopupView;                                 //@synthesize sendPreviewPopupView=_sendPreviewPopupView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImagePreviewView;                                        //@synthesize backgroundImagePreviewView=_backgroundImagePreviewView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UICollectionView *)contentCollectionView;
-(id)initWithIndexView:(id)arg1 topSectionOffset:(double)arg2 confirmationViewConfig:(id)arg3 ;
-(SCSendConfirmationView *)sendConfirmationView;
-(void)setLayoutInset:(UIEdgeInsets)arg1 ;
-(void)updateConfirmationViewWithRecipients:(id)arg1 ;
-(void)updateConfirmationViewWithAnimationDuration:(double)arg1 animationCurve:(long long)arg2 ;
-(void)updateScrollBarWithTopOffset:(double)arg1 skipStorySection:(BOOL)arg2 ;
-(void)updateScrollVisibility;
-(void)updateScrollBarWithTopOffset:(double)arg1 skipStorySection:(BOOL)arg2 shouldShowSpacingForFullCellStory:(BOOL)arg3 ;
-(SCSendToPreviewPopupView *)sendPreviewPopupView;
-(UIImageView *)backgroundImagePreviewView;
-(id)initWithIndexView:(id)arg1 topSectionOffset:(double)arg2 confirmationViewConfig:(id)arg3 sendToViewStyle:(unsigned long long)arg4 ;
-(CGRect)_confirmationViewFrame;
-(double)_confirmationViewBottomInset;
-(void)_animateConfirmationView;
-(void)_updateConfirmationViewFrame:(CGRect)arg1 contentBottomInset:(double)arg2 ;
-(void)_setConfirmationViewVisibility;
-(BOOL)_showScroll;
-(double)_confirmationViewHeight;
-(id)_lastCell;
-(void)updateConfirmationViewWithFriends:(id)arg1 groups:(id)arg2 ;
-(void)setContentCollectionView:(UICollectionView *)arg1 ;
-(void)setSendConfirmationView:(SCSendConfirmationView *)arg1 ;
-(UIEdgeInsets)layoutInset;
-(id<SCSelectGroupRecipientsDelegate>)groupRecipientsDelegate;
-(void)setGroupRecipientsDelegate:(id<SCSelectGroupRecipientsDelegate>)arg1 ;
-(void)setSendPreviewPopupView:(SCSendToPreviewPopupView *)arg1 ;
-(void)setBackgroundImagePreviewView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)setKeyboardHeight:(double)arg1 ;
-(double)keyboardHeight;
@end

