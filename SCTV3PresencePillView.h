/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCTV3PresencePillViewDelegate, SCTV3PresencePillSelectionListener;
@class SCTV3PresencePillState, SCTV3RoundCornerView, SCTPresenceTypingBubbleView, UIView, SCTV3PresenceBitmojiView;

@interface SCTV3PresencePillView : UIView {

	double _stateUpdatedTimeInterval;
	id<SCTV3PresencePillViewDelegate> _delegate;
	id<SCTV3PresencePillSelectionListener> _selectionListener;
	SCTV3PresencePillState* _state;
	SCTV3RoundCornerView* _roundContainer;
	SCTPresenceTypingBubbleView* _typingBubbleView;
	UIView* _mediaView;
	SCTV3PresenceBitmojiView* _bitmojiView;

}

@property (nonatomic,readonly) SCTV3PresenceBitmojiView * bitmojiView;                                     //@synthesize bitmojiView=_bitmojiView - In the implementation block
@property (nonatomic,readonly) double timeIntervalSinceStateChange; 
@property (assign,nonatomic,__weak) id<SCTV3PresencePillViewDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCTV3PresencePillSelectionListener> selectionListener;              //@synthesize selectionListener=_selectionListener - In the implementation block
@property (nonatomic,readonly) SCTV3PresencePillState * state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SCTV3RoundCornerView * roundContainer;                                      //@synthesize roundContainer=_roundContainer - In the implementation block
@property (nonatomic,readonly) SCTPresenceTypingBubbleView * typingBubbleView;                             //@synthesize typingBubbleView=_typingBubbleView - In the implementation block
@property (nonatomic,readonly) UIView * mediaView;                                                         //@synthesize mediaView=_mediaView - In the implementation block
@property (nonatomic,readonly) BOOL needsAvatarUpdate; 
-(double)heightForState:(id)arg1 ;
-(void)animateToState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMediaViewWithLocalParticipantState:(id)arg1 remoteParticipantState:(id)arg2 fullscreen:(BOOL)arg3 ;
-(BOOL)needsAvatarUpdate;
-(void)makeLeftConstraintEqualTo:(id)arg1 offset:(double)arg2 ;
-(void)animateAvatarUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)setHorizonalStretch:(double)arg1 ;
-(void)makeBottomConstraintEqualTo:(id)arg1 offset:(double)arg2 ;
-(double)timeIntervalSinceStateChange;
-(SCTV3PresenceBitmojiView *)bitmojiView;
-(SCTV3RoundCornerView *)roundContainer;
-(void)_reloadAvatarView;
-(CGSize)_pillSizeForState:(id)arg1 ;
-(double)_pillWidthForState:(id)arg1 ;
-(void)_updateMediaView:(id)arg1 ;
-(SCTV3PresenceBitmojiState)_bitmojiStateForState:(id)arg1 ;
-(double)_pillHeightForState:(id)arg1 ;
-(void)_animateBitmojiToTypingState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(SCTPresenceTypingBubbleView *)typingBubbleView;
-(id)_colorForPresenceState:(BOOL)arg1 ;
-(void)_updateUIForModeNoCall;
-(void)_updateUIForModeRinging;
-(void)_updateUIForModeNoMedia;
-(void)_updateUIForModeAudio;
-(void)_updateUIForModeVideo;
-(void)_animateToState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didLoadAvatarView;
-(void)_updateTypingIndicator;
-(void)reattachVideoView:(id)arg1 ;
-(void)setSelectionListener:(id<SCTV3PresencePillSelectionListener>)arg1 ;
-(void)_uninstallConstraintsWithLayoutAttribute:(long long)arg1 ;
-(void)animateToMode:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id<SCTV3PresencePillSelectionListener>)selectionListener;
-(long long)_mediaStatusFromParticipantState:(id)arg1 connecting:(BOOL)arg2 ;
-(double)widthForState:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SCTV3PresencePillViewDelegate>)arg1 ;
-(id<SCTV3PresencePillViewDelegate>)delegate;
-(SCTV3PresencePillState *)state;
-(void)_updateColors;
-(UIView *)mediaView;
-(void)updateLabelText;
-(void)updateToState:(id)arg1 ;
@end

