/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCVideoChatFramingAnimator.h>

@class UIView, NSMutableArray, NSString;

@interface SCVideoChatViewAnimator : NSObject <SCVideoChatFramingAnimator> {

	int _startFrame;
	int _stopFrame;
	CGRect* _animatedRect;
	UIView* _view;
	NSMutableArray* _animators;

}

@property (assign,nonatomic) int startFrame;                          //@synthesize startFrame=_startFrame - In the implementation block
@property (assign,nonatomic) int stopFrame;                           //@synthesize stopFrame=_stopFrame - In the implementation block
@property (assign,nonatomic) CGRect* animatedRect;                    //@synthesize animatedRect=_animatedRect - In the implementation block
@property (nonatomic,retain) UIView * view;                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSMutableArray * animators;              //@synthesize animators=_animators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addAnimator:(id)arg1 ;
-(NSMutableArray *)animators;
-(void)setStopFrame:(int)arg1 ;
-(int)stopFrame;
-(void)animateForFrame:(int)arg1 ;
-(void)setAnimators:(NSMutableArray *)arg1 ;
-(CGRect*)animatedRect;
-(id)addRectAnimatorWithUpdater:(id)arg1 from:(int)arg2 to:(int)arg3 using:(id)arg4 ;
-(id)addSizeAnimator:(CGSize)arg1 fromFrame:(int)arg2 toFrame:(int)arg3 using:(id)arg4 ;
-(id)addPositionAnimator:(CGPoint)arg1 andAnchor:(CGVector)arg2 fromFrame:(int)arg3 toFrame:(int)arg4 using:(id)arg5 ;
-(id)addCenterAnimator:(CGPoint)arg1 fromFrame:(int)arg2 toFrame:(int)arg3 using:(id)arg4 ;
-(id)addAnchor:(CGVector)arg1 fromFrame:(int)arg2 toFrame:(int)arg3 ;
-(id)addAnchor:(CGVector)arg1 from:(double)arg2 to:(double)arg3 ;
-(id)addAlphaAnimator:(double)arg1 fromFrame:(int)arg2 toFrame:(int)arg3 using:(id)arg4 ;
-(id)addSizeAnimator:(CGSize)arg1 from:(double)arg2 to:(double)arg3 using:(id)arg4 ;
-(id)addPositionAnimator:(CGPoint)arg1 andAnchor:(CGVector)arg2 from:(double)arg3 to:(double)arg4 using:(id)arg5 ;
-(id)addPositionXAnimator:(double)arg1 andAnchor:(double)arg2 from:(double)arg3 to:(double)arg4 using:(id)arg5 ;
-(id)addPositionYAnimator:(double)arg1 andAnchor:(double)arg2 from:(double)arg3 to:(double)arg4 using:(id)arg5 ;
-(id)addCenterAnimator:(CGPoint)arg1 from:(double)arg2 to:(double)arg3 using:(id)arg4 ;
-(id)addCenterXAnimator:(double)arg1 from:(double)arg2 to:(double)arg3 using:(id)arg4 ;
-(id)addCenterYAnimator:(double)arg1 from:(double)arg2 to:(double)arg3 using:(id)arg4 ;
-(id)addAnchorAtCenterFrom:(double)arg1 to:(double)arg2 ;
-(id)addAlphaAnimator:(double)arg1 from:(double)arg2 to:(double)arg3 using:(id)arg4 ;
-(void)setAnimatedRect:(CGRect*)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)setStartFrame:(int)arg1 ;
-(int)startFrame;
@end
