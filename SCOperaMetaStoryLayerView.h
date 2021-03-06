/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCOperaMetaStoryLayerViewDelegate;
@class SCScrollUpAffordanceView, UITapGestureRecognizer, NSString;

@interface SCOperaMetaStoryLayerView : UIView <UIGestureRecognizerDelegate> {

	SCScrollUpAffordanceView* _arrowView;
	UITapGestureRecognizer* _tapToShowGesture;
	BOOL _panToShow;
	id<SCOperaMetaStoryLayerViewDelegate> _delegate;
	long long _currentState;
	NSString* _affordanceText;

}

@property (assign,nonatomic,__weak) id<SCOperaMetaStoryLayerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long currentState;                                           //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy) NSString * affordanceText;                                            //@synthesize affordanceText=_affordanceText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)affordanceText;
-(void)setAffordanceText:(NSString *)arg1 ;
-(void)_tapToShow:(id)arg1 ;
-(void)_animateToState:(long long)arg1 ;
-(void)_endOrCancelPanGestureWithTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)showArrowViewAnimated:(BOOL)arg1 ;
-(void)updateLayerViewState:(long long)arg1 ;
-(void)hideArrowViewAnimated:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCOperaMetaStoryLayerViewDelegate>)arg1 ;
-(id<SCOperaMetaStoryLayerViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)currentState;
@end

