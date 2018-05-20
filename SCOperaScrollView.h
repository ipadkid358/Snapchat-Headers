/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCOperaScrollViewDelegate;
@class UILongPressGestureRecognizer, CADisplayLink, NSString;

@interface SCOperaScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	unsigned long long _currentScrollDirection;
	CGPoint _previousOffset;
	CGPoint _offsetBeforeScrolling;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	CGPoint _startTappingLocation;
	CADisplayLink* _scrollDisplayLink;
	BOOL _ignoreTableViewGestures;
	id<SCOperaScrollViewDelegate> _operaScrollViewDelegate;

}

@property (assign,nonatomic,__weak) id<SCOperaScrollViewDelegate> operaScrollViewDelegate;              //@synthesize operaScrollViewDelegate=_operaScrollViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL ignoreTableViewGestures;                                              //@synthesize ignoreTableViewGestures=_ignoreTableViewGestures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)gestureDescription;
-(void)resetGestureIfNecessary;
-(void)didTap:(id)arg1 ;
-(void)_scrollViewDidEndScrolling;
-(void)_setupLongPressGesture;
-(void)didLongPress:(id)arg1 ;
-(void)setIgnoreTableViewGestures:(BOOL)arg1 ;
-(void)setContentOffsetWithoutCallback:(CGPoint)arg1 ;
-(void)_scrollViewDidScrollForAnimation;
-(id<SCOperaScrollViewDelegate>)operaScrollViewDelegate;
-(BOOL)_isScrollingDiagonally;
-(void)_cancelLongPressIfNecessary;
-(BOOL)_isLongPressGestureValid;
-(void)setContentOffset:(CGPoint)arg1 animationDuration:(double)arg2 ;
-(void)subviewScrollViewDidStopScrollingWithBoundaryHit:(BOOL)arg1 ;
-(void)subviewScrollViewDidStartScrolling;
-(void)subviewScrollViewIsAtTopBoundary:(BOOL)arg1 isVisible:(BOOL)arg2 ;
-(void)stopRecognizingGestures;
-(void)setOperaScrollViewDelegate:(id<SCOperaScrollViewDelegate>)arg1 ;
-(BOOL)ignoreTableViewGestures;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(BOOL)isScrolling;
@end

