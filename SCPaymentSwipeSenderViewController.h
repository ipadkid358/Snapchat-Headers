/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Snapchat/SCPaymentSwipeSenderBillViewDelegate.h>

@protocol SCPaymentSwipeSenderDelegate;
@class NSString, NSDate, UILabel, NSMutableArray, SCPaymentSwipeSenderSparkleView, SCPaymentSwipeSenderBillView, NSTimer;

@interface SCPaymentSwipeSenderViewController : UIViewController <SCPaymentSwipeSenderBillViewDelegate> {

	BOOL _interacted;
	BOOL _isAnimatingCloseHint;
	id<SCPaymentSwipeSenderDelegate> _delegate;
	NSString* _recipient;
	NSDate* _lastSwipeTime;
	double _swipeInterval;
	UILabel* _counterLabel;
	NSMutableArray* _swipes;
	SCPaymentSwipeSenderSparkleView* _sparkleView;
	SCPaymentSwipeSenderBillView* _billView;
	NSTimer* _completionTimer;
	NSTimer* _closeHintTimer;
	double _keyboardY;

}

@property (assign,nonatomic) BOOL interacted;                                               //@synthesize interacted=_interacted - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingCloseHint;                                     //@synthesize isAnimatingCloseHint=_isAnimatingCloseHint - In the implementation block
@property (nonatomic,retain) NSDate * lastSwipeTime;                                        //@synthesize lastSwipeTime=_lastSwipeTime - In the implementation block
@property (assign,nonatomic) double swipeInterval;                                          //@synthesize swipeInterval=_swipeInterval - In the implementation block
@property (nonatomic,retain) UILabel * counterLabel;                                        //@synthesize counterLabel=_counterLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * swipes;                                       //@synthesize swipes=_swipes - In the implementation block
@property (nonatomic,retain) SCPaymentSwipeSenderSparkleView * sparkleView;                 //@synthesize sparkleView=_sparkleView - In the implementation block
@property (nonatomic,retain) SCPaymentSwipeSenderBillView * billView;                       //@synthesize billView=_billView - In the implementation block
@property (nonatomic,retain) NSTimer * completionTimer;                                     //@synthesize completionTimer=_completionTimer - In the implementation block
@property (nonatomic,retain) NSTimer * closeHintTimer;                                      //@synthesize closeHintTimer=_closeHintTimer - In the implementation block
@property (assign,nonatomic) double keyboardY;                                              //@synthesize keyboardY=_keyboardY - In the implementation block
@property (assign,nonatomic,__weak) id<SCPaymentSwipeSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * recipient;                                            //@synthesize recipient=_recipient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObservers;
-(void)removeObservers;
-(void)setSwipeInterval:(double)arg1 ;
-(void)setSwipes:(NSMutableArray *)arg1 ;
-(void)setKeyboardY:(double)arg1 ;
-(SCPaymentSwipeSenderBillView *)billView;
-(void)loadBillView;
-(void)loadSparkleView;
-(void)loadCountView;
-(void)playBlingtone;
-(void)exitWithoutActivityAfterDelay:(double)arg1 ;
-(BOOL)isAnimatingCloseHint;
-(void)setIsAnimatingCloseHint:(BOOL)arg1 ;
-(UILabel *)counterLabel;
-(NSMutableArray *)swipes;
-(void)completionTimerFired:(id)arg1 ;
-(void)setCompletionTimer:(NSTimer *)arg1 ;
-(void)didFinishSwipeToSendWithSuccess:(BOOL)arg1 ;
-(BOOL)interacted;
-(void)stopBlingtone;
-(NSTimer *)closeHintTimer;
-(void)setCloseHintTimer:(NSTimer *)arg1 ;
-(NSTimer *)completionTimer;
-(void)presentCloseHint;
-(void)swipeBegan;
-(void)swipeUpEnded;
-(void)swipeDownEnded;
-(void)swipeFailed;
-(void)setInteracted:(BOOL)arg1 ;
-(void)sendSwipe;
-(unsigned long long)numberOfSwipes;
-(void)updateBillColor;
-(double)swipeInterval;
-(SCPaymentSwipeSenderSparkleView *)sparkleView;
-(void)startCompletionTimerWithDelay:(double)arg1 ;
-(NSDate *)lastSwipeTime;
-(void)setLastSwipeTime:(NSDate *)arg1 ;
-(void)setCounterLabel:(UILabel *)arg1 ;
-(void)setSparkleView:(SCPaymentSwipeSenderSparkleView *)arg1 ;
-(double)keyboardY;
-(void)setBillView:(SCPaymentSwipeSenderBillView *)arg1 ;
-(void)updateSwipeInterval;
-(void)startCloseHintTimer;
-(void)didFinishBillAnimation;
-(double)previousSwipeInterval;
-(id)previousSwipeTimestamp;
-(id)initWithKeyboardY:(double)arg1 ;
-(void)setDelegate:(id<SCPaymentSwipeSenderDelegate>)arg1 ;
-(void)dealloc;
-(id<SCPaymentSwipeSenderDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)handlePan:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)willResignActive:(id)arg1 ;
-(NSString *)recipient;
-(void)setRecipient:(NSString *)arg1 ;
@end

