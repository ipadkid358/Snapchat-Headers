/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@class UIPanGestureRecognizer, UIGestureRecognizer;

@interface SCProfileV3TransitionControllerScrollView : UIScrollView {

	UIPanGestureRecognizer* _otherScrollViewPanGesture;
	UIGestureRecognizer* _searchGesture;

}

@property (assign,nonatomic,__weak) UIPanGestureRecognizer * otherScrollViewPanGesture;              //@synthesize otherScrollViewPanGesture=_otherScrollViewPanGesture - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * searchGesture;                             //@synthesize searchGesture=_searchGesture - In the implementation block
-(void)setOtherScrollViewPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(void)setSearchGesture:(UIGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)otherScrollViewPanGesture;
-(UIGestureRecognizer *)searchGesture;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end
