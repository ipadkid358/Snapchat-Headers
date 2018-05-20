/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCTimePickerViewControllerDelegate;
@class UIView, UIScrollView, UIImageView, UIImage, UIVisualEffectView, SCGradientView, UILabel, NSArray, SCTimePickerItem, UITapGestureRecognizer, NSString;

@interface SCTimePickerViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	id<SCTimePickerViewControllerDelegate> _delegate;
	UIView* _contentView;
	UIScrollView* _contentScrollView;
	UIScrollView* _trackingScrollView;
	UIImageView* _backgroundImageView;
	UIImage* _scaledBackgroundImage;
	UIVisualEffectView* _blurView;
	UIView* _selectionView;
	SCGradientView* _gradientView;
	UILabel* _detailTimeLabel;
	NSArray* _items;
	NSArray* _views;
	SCTimePickerItem* _selectedItem;
	UITapGestureRecognizer* _tapGestureRecognizer;
	CGPoint _gestureBeginLocation;

}

@property (nonatomic,retain) UIView * contentView;                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIScrollView * contentScrollView;                             //@synthesize contentScrollView=_contentScrollView - In the implementation block
@property (nonatomic,retain) UIScrollView * trackingScrollView;                            //@synthesize trackingScrollView=_trackingScrollView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                            //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIImage * scaledBackgroundImage;                              //@synthesize scaledBackgroundImage=_scaledBackgroundImage - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIView * selectionView;                                       //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) SCGradientView * gradientView;                                //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) UILabel * detailTimeLabel;                                    //@synthesize detailTimeLabel=_detailTimeLabel - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * views;                                                //@synthesize views=_views - In the implementation block
@property (nonatomic,retain) SCTimePickerItem * selectedItem;                              //@synthesize selectedItem=_selectedItem - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint gestureBeginLocation;                                 //@synthesize gestureBeginLocation=_gestureBeginLocation - In the implementation block
@property (nonatomic,retain) id<SCTimePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCTimePickerItem * selectedTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateOut:(/*^block*/id)arg1 ;
-(void)updateSelectionWithGesture:(id)arg1 ;
-(id)initWithSelectedTimeItem:(id)arg1 backgroundImageView:(id)arg2 ;
-(SCTimePickerItem *)selectedTime;
-(UIImage *)scaledBackgroundImage;
-(void)_setupTrackingView;
-(void)_setupSelectedView;
-(void)_setupTimeItemViews;
-(void)_updateDetailTitleLabel;
-(void)setDetailTimeLabel:(UILabel *)arg1 ;
-(UILabel *)detailTimeLabel;
-(void)_updatecontentScrollViewOffset;
-(CGPoint)centerForItemAtIndex:(long long)arg1 ;
-(void)setGestureBeginLocation:(CGPoint)arg1 ;
-(CGPoint)gestureBeginLocation;
-(long long)itemIndexForLocation:(CGPoint)arg1 ;
-(long long)scaledItemIndexForLocation:(CGPoint)arg1 ;
-(void)setScaledBackgroundImage:(UIImage *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setDelegate:(id<SCTimePickerViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<SCTimePickerViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(UIImageView *)backgroundImageView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIView *)selectionView;
-(UIScrollView *)contentScrollView;
-(void)viewDidLoad;
-(void)setSelectedItem:(SCTimePickerItem *)arg1 ;
-(void)animateIn;
-(SCTimePickerItem *)selectedItem;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(NSArray *)views;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)_updateScrollOffset;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setContentScrollView:(UIScrollView *)arg1 ;
-(void)setGradientView:(SCGradientView *)arg1 ;
-(SCGradientView *)gradientView;
-(void)setViews:(NSArray *)arg1 ;
-(void)tapped:(id)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(UIScrollView *)trackingScrollView;
-(void)setTrackingScrollView:(UIScrollView *)arg1 ;
@end

