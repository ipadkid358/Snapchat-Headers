/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTransparentParentView.h>
#import <Snapchat/SCMapCarouselViewDelegate.h>
#import <Snapchat/SCMapCarouselViewDataSource.h>
#import <Snapchat/SCMapDoodleCarouselItemViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCMapDoodleCarouselViewDelegate;
@class SCUserSession, SCMapCarouselView, NSOrderedSet, SCMapDoodle, NSString;

@interface SCMapDoodleCarouselView : SCTransparentParentView <SCMapCarouselViewDelegate, SCMapCarouselViewDataSource, SCMapDoodleCarouselItemViewDelegate, UIGestureRecognizerDelegate> {

	SCUserSession* _userSession;
	SCMapCarouselView* _carouselView;
	NSOrderedSet* _doodles;
	id<SCMapDoodleCarouselViewDelegate> _delegate;
	SCMapDoodle* _visibleDoodle;

}

@property (assign,nonatomic,__weak) id<SCMapDoodleCarouselViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCMapDoodle * visibleDoodle;                                      //@synthesize visibleDoodle=_visibleDoodle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfViewsInMapCarouselView:(id)arg1 ;
-(void)mapCarouselView:(id)arg1 didShowViewAtIndex:(long long)arg2 actionType:(unsigned long long)arg3 ;
-(id)mapCarouselView:(id)arg1 viewForIndex:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 userSession:(id)arg2 ;
-(void)_springToHidden:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateInWithCompletion:(/*^block*/id)arg1 ;
-(void)doodleCarouselItemViewDidTap:(id)arg1 ;
-(void)doodleCarouselItemViewDidLongPress:(id)arg1 ;
-(void)setDoodles:(id)arg1 ;
-(void)setVisibleDoodle:(SCMapDoodle *)arg1 ;
-(SCMapDoodle *)visibleDoodle;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCMapDoodleCarouselViewDelegate>)arg1 ;
-(id<SCMapDoodleCarouselViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
@end

