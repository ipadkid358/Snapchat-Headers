/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOperaLayerViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class SCOperaLeftTapLayerView, UILongPressGestureRecognizer, UIView, NSString;

@interface SCOperaLeftTapLayerViewController : SCOperaLayerViewController <UIGestureRecognizerDelegate> {

	SCOperaLeftTapLayerView* _layerView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	CGPoint _startTappingLocation;
	BOOL _leftTapEnabled;
	UIView* _delegateViewForLeftTap;

}

@property (assign,nonatomic,__weak) UIView * delegateViewForLeftTap;              //@synthesize delegateViewForLeftTap=_delegateViewForLeftTap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)gestureDescription;
-(void)didReceiveUpdateProperties:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 ;
-(void)_clearLongPressGesture;
-(void)_setupLongPressGesture;
-(void)_checkLongPressValidateion:(CGPoint)arg1 ;
-(id)layerView;
-(UIView *)delegateViewForLeftTap;
-(void)didLongPress:(id)arg1 ;
-(void)setDelegateViewForLeftTap:(UIView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)loadView;
-(void)teardown;
@end
