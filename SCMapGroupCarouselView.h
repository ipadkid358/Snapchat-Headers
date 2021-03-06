/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTransparentParentView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCMapCarouselViewDataSource.h>
#import <Snapchat/SCMapGroupVerticalScrollingViewDelegate.h>

@protocol SCMapGroupCarouselViewDelegate, SCChatGroup;
@class SCMapCarouselView, SCUserSession, NSString;

@interface SCMapGroupCarouselView : SCTransparentParentView <UIGestureRecognizerDelegate, SCMapCarouselViewDataSource, SCMapGroupVerticalScrollingViewDelegate> {

	SCMapCarouselView* _carouselView;
	SCUserSession* _userSession;
	id<SCMapGroupCarouselViewDelegate> _delegate;
	id<SCChatGroup> _group;

}

@property (assign,nonatomic,__weak) id<SCMapGroupCarouselViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SCChatGroup> group;                                           //@synthesize group=_group - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfViewsInMapCarouselView:(id)arg1 ;
-(id)mapCarouselView:(id)arg1 viewForIndex:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 userSession:(id)arg2 ;
-(void)_springToHidden:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)personCarouselItemViewDidTapStory:(id)arg1 ;
-(void)personCarouselItemViewDidTapProfile:(id)arg1 ;
-(void)personCarouselItemViewDidLongPressProfile:(id)arg1 ;
-(void)animateInWithCompletion:(/*^block*/id)arg1 ;
-(void)groupVerticalScrollingViewDidTapGroup:(id)arg1 ;
-(void)groupVerticalScrollingView:(id)arg1 wantsToPresentStoryFromBaseView:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCMapGroupCarouselViewDelegate>)arg1 ;
-(id<SCMapGroupCarouselViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
-(void)setGroup:(id<SCChatGroup>)arg1 ;
-(id<SCChatGroup>)group;
@end

