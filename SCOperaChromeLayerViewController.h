/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayerViewController.h>
#import <Snapchat/SCTimeProfilable.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCOperaFadeTransitionCompatibleViewController.h>

@class SCOperaChromeLayerView, UITapGestureRecognizer, NSString;

@interface SCOperaChromeLayerViewController : SCOperaLayerViewController <SCTimeProfilable, UIGestureRecognizerDelegate, SCOperaFadeTransitionCompatibleViewController> {

	SCOperaChromeLayerView* _layerView;
	UITapGestureRecognizer* _tapGesture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(void)_didTap:(id)arg1 ;
-(void)viewDidFullyAppear;
-(void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2 ;
-(void)didReceiveUpdateProperties:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 ;
-(void)_didTapOnHDButton:(id)arg1 ;
-(id)movingViewsForFadeTransition;
-(id)fadingViewsForFadeTransition;
-(id)shareableMedia;
-(void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(BOOL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)image;
-(void)loadView;
-(void)teardown;
-(void)_fadeOut;
-(void)_setupTapGesture;
@end

