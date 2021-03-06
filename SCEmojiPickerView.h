/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCPreviewToolBarPickerView.h>

@protocol SCEmojiPickerViewDelegate;
@class SCShapeView, SCEmojiPickerListView, SCEmojiPickerDropletView, UIImpactFeedbackGenerator, UISelectionFeedbackGenerator;

@interface SCEmojiPickerView : SCPreviewToolBarPickerView {

	SCShapeView* _backgroundShapeView;
	SCEmojiPickerListView* _emojiListView;
	SCEmojiPickerDropletView* _dropletView;
	CGSize _previousBoundsSize;
	CGPoint _beginPanLocation;
	BOOL _expanded;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	double _heightScale;
	id<SCEmojiPickerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCEmojiPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)animateViews:(long long)arg1 ;
-(void)onPreAnimateForViews:(long long)arg1 ;
-(void)onPostAnimateForViews:(long long)arg1 ;
-(void)setDropletOriginY:(double)arg1 offsetX:(double)arg2 ;
-(BOOL)shouldExpandHeightWithGesture:(id)arg1 ;
-(double)containerHeight;
-(void)animatePathDefault;
-(void)_setAlphaForPickerAnimatableViews:(BOOL)arg1 ;
-(void)animatePathForLocation:(CGPoint)arg1 ;
-(void)_animatePath:(id)arg1 ;
-(id)initWithEmojiList:(id)arg1 emojiExtendList:(id)arg2 needOnboardingAnimation:(BOOL)arg3 ;
-(void)animateOnboarding;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCEmojiPickerViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SCEmojiPickerViewDelegate>)delegate;
-(void)longPress:(id)arg1 ;
-(void)_setExpanded:(BOOL)arg1 ;
@end

