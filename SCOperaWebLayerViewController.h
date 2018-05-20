/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayerViewController.h>
#import <Snapchat/SCOperaWebLayerVideoGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCOperaRemoteVideoControllerDelegate.h>
#import <Snapchat/SCOperaPageableViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol UIViewControllerTransitioningDelegate;
@class UITapGestureRecognizer, SCOperaRemoteVideoViewController, NSMutableDictionary, NSMutableArray, SCOperaInlineVideo, UIView, UILongPressGestureRecognizer, NSString;

@interface SCOperaWebLayerViewController : SCOperaLayerViewController <SCOperaWebLayerVideoGestureRecognizer, UIGestureRecognizerDelegate, SCOperaRemoteVideoControllerDelegate, SCOperaPageableViewControllerDelegate, UIScrollViewDelegate> {

	UITapGestureRecognizer* _tapGesture;
	SCOperaRemoteVideoViewController* _inlineVideoViewController;
	UITapGestureRecognizer* _tapToOpenInlineVideoRecognizer;
	BOOL _shouldPresentInlineVideoWhenInlineVideoDidDisappear;
	NSMutableDictionary* _inlineVideosProgress;
	NSMutableArray* _inlineVideos;
	SCOperaInlineVideo* _lastVideoPlayed;
	NSMutableDictionary* _videoFirstFrameKeyToImageView;
	id<UIViewControllerTransitioningDelegate> _inlineVideoTransitioningDelegate;
	UIView* _screenshotHidingView;
	BOOL _isScrolling;
	BOOL _scrollViewIsAtTopBoundary;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
-(void)_didTap:(id)arg1 ;
-(void)viewDidFullyAppear;
-(void)viewDidFullyDisappear;
-(void)remoteVideoViewControllerWasPresented;
-(void)remoteVideoViewControllerDidDisappear:(BOOL)arg1 ;
-(void)remoteVideoViewControllerDidRotateToLandscape:(BOOL)arg1 ;
-(void)remoteVideoViewControllerDidFinishPlaying;
-(BOOL)pageIsFullyVisible:(id)arg1 ;
-(void)remoteVideoViewControllerDidPressExitButton;
-(void)remoteVideoViewControllerDidPressShowActionMenuButton;
-(id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 ;
-(BOOL)pageIsPartiallyVisible:(id)arg1 ;
-(id)addVideoParams:(id)arg1 ;
-(void)addInlineVideoWithParameters:(id)arg1 ;
-(unsigned long long)relativePositionForPageId:(id)arg1 ;
-(void)didResetWebView;
-(void)initInstanceVars;
-(void)_scrollViewDidEndScrolling;
-(void)_sendSubviewScrollViewIsAtTopBoundaryEvent:(BOOL)arg1 ;
-(void)tearDownInlineVideos;
-(void)setupTapGestureRecognizers;
-(void)_setUpTapToOpenInlineVideoRecognizer;
-(BOOL)isPresentingInlineVideo;
-(void)didTapToOpenInlineVideo:(id)arg1 ;
-(unsigned long long)inlineVideoCount;
-(void)playProperVideoIfAvailable;
-(void)playInlineVideo:(id)arg1 ;
-(void)updateCurrentInlineVideoScreenshot;
-(void)replacePreviousInlineVideoWithScreenshot;
-(void)setupScreenshotHidingViewForVideo:(id)arg1 ;
-(void)tearDownCurrentInlineInlineVideo;
-(void)didReceiveInlineVideoFirstFrameImageData:(id)arg1 forKey:(id)arg2 fromURL:(id)arg3 ;
-(void)fetchInlineVideoFirstFrameImage:(id)arg1 ;
-(void)expandInlineVideo:(id)arg1 ;
-(void)didTapVideo:(id)arg1 ;
-(void)_sendSubviewScrollViewStopEvent;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)reset;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)scrollView;
-(void)setVolume:(double)arg1 ;
-(void)teardown;
-(void)resume;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)pause;
-(void)_setupTapGesture;
@end

