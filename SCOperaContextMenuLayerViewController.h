/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayerViewController.h>
#import <Snapchat/SCContextPresentingViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class SCOperaContextMenuLayerView, UITapGestureRecognizer, UIViewController, UIView, NSString;

@interface SCOperaContextMenuLayerViewController : SCOperaLayerViewController <SCContextPresentingViewController, UIGestureRecognizerDelegate> {

	SCOperaContextMenuLayerView* _layerView;
	UITapGestureRecognizer* _arrowTapGestureRecognizer;
	UIViewController* _contextMenuController;
	BOOL _isContextMenuAvailable;
	BOOL _pageability;
	UIView* _swipeUpGestureView;
	UIView* _header;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIView * swipeUpGestureView;              //@synthesize swipeUpGestureView=_swipeUpGestureView - In the implementation block
@property (nonatomic,readonly) UIView * header;                               //@synthesize header=_header - In the implementation block
-(long long)pageabilityForRelativePosition:(unsigned long long)arg1 ;
-(void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2 ;
-(void)didReceiveUpdateProperties:(id)arg1 ;
-(void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(BOOL)arg2 ;
-(BOOL)isRecyclable;
-(void)_arrowHit:(id)arg1 ;
-(void)_createContextMenuObjects;
-(void)showArrow:(BOOL)arg1 ;
-(BOOL)_isContextMenuPresented;
-(void)setMediaLooping:(BOOL)arg1 ;
-(void)setTimerVisibility:(BOOL)arg1 ;
-(void)setChromeGradientAlpha:(double)arg1 ;
-(void)setChromeHeaderAlpha:(double)arg1 ;
-(void)showActionMenuButton:(BOOL)arg1 ;
-(void)_presentContextMenu;
-(void)updateMediaVolume:(double)arg1 ;
-(void)fadeMediaVolumeIn:(double)arg1 ;
-(void)fadeMediaVolumeOut:(double)arg1 ;
-(void)setMediaVerticalOffset:(double)arg1 ;
-(void)setPageability:(long long)arg1 ;
-(UIView *)swipeUpGestureView;
-(void)setSwipeUpGestureView:(UIView *)arg1 ;
-(void)animateForTransitionType:(unsigned long long)arg1 ;
-(id)viewForSwipeUpGesture;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)teardown;
-(void)resume;
-(UIView *)header;
@end
