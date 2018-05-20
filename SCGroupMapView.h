/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Snapchat/SCMapCarouselViewDelegate.h>
#import <Snapchat/SCMapCarouselViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCEmbeddedMapViewDelegate.h>

@protocol SCChatGroup, SCGroupMapViewDelegate;
@class UIButton, SCUserSession, SCMapCarouselView, SCEmbeddedMapView, NSArray, SCGroupMapRequestLocationView, NSString;

@interface SCGroupMapView : UIView <SCMapCarouselViewDelegate, SCMapCarouselViewDataSource, UIGestureRecognizerDelegate, SCEmbeddedMapViewDelegate> {

	UIButton* _mapTapCatcher;
	long long _prevCarouselIndex;
	id<SCChatGroup> _group;
	id<SCGroupMapViewDelegate> _delegate;
	SCUserSession* _userSession;
	SCMapCarouselView* _carouselView;
	SCEmbeddedMapView* _mapView;
	NSArray* _people;
	NSArray* _carouselItems;
	SCGroupMapRequestLocationView* _requestLocationOverlay;

}

@property (assign,nonatomic,__weak) SCUserSession * userSession;                                  //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) SCMapCarouselView * carouselView;                                    //@synthesize carouselView=_carouselView - In the implementation block
@property (nonatomic,retain) SCEmbeddedMapView * mapView;                                         //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,copy) NSArray * people;                                                      //@synthesize people=_people - In the implementation block
@property (nonatomic,copy) NSArray * carouselItems;                                               //@synthesize carouselItems=_carouselItems - In the implementation block
@property (nonatomic,retain) SCGroupMapRequestLocationView * requestLocationOverlay;              //@synthesize requestLocationOverlay=_requestLocationOverlay - In the implementation block
@property (nonatomic,retain) id<SCChatGroup> group;                                               //@synthesize group=_group - In the implementation block
@property (assign,nonatomic,__weak) id<SCGroupMapViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfViewsInMapCarouselView:(id)arg1 ;
-(void)mapCarouselView:(id)arg1 didShowViewAtIndex:(long long)arg2 actionType:(unsigned long long)arg3 ;
-(id)mapCarouselView:(id)arg1 viewForIndex:(long long)arg2 ;
-(SCMapCarouselView *)carouselView;
-(void)_updateForSelectedCarouselIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_groupMemberUserIds;
-(SCGroupMapRequestLocationView *)requestLocationOverlay;
-(void)embeddedMapViewDidUpdateFriendLocations:(id)arg1 ;
-(id)initWithEmbeddedMapView:(id)arg1 userSession:(id)arg2 ;
-(void)setCarouselView:(SCMapCarouselView *)arg1 ;
-(void)setCarouselItems:(NSArray *)arg1 ;
-(void)setRequestLocationOverlay:(SCGroupMapRequestLocationView *)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCGroupMapViewDelegate>)arg1 ;
-(id<SCGroupMapViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setGroup:(id<SCChatGroup>)arg1 ;
-(id<SCChatGroup>)group;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(id)_selectedPerson;
-(void)setPeople:(NSArray *)arg1 ;
-(NSArray *)people;
-(NSArray *)carouselItems;
-(void)setMapView:(SCEmbeddedMapView *)arg1 ;
-(SCEmbeddedMapView *)mapView;
-(void)_tapped:(id)arg1 ;
@end

