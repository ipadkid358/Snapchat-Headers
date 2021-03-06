/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableOrderedSet, UILongPressGestureRecognizer, NSString;

@interface SCCraftContentView : UIView <UIGestureRecognizerDelegate> {

	NSMutableOrderedSet* _touchViews;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UILongPressGestureRecognizer* _debugGestureRecognizer;
	UILongPressGestureRecognizer* _faceCraftDebugGestureRecognizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addTouchViews:(id)arg1 ;
-(void)addDebugGestureRecognizer:(id)arg1 ;
-(void)setTouchViews:(id)arg1 ;
-(void)addFaceCraftDebugGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)hide;
-(void)show;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)longPress:(id)arg1 ;
-(void)fadeOut;
-(void)fadeIn;
@end

