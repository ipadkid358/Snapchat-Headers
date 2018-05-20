/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTV3PresenceBarVC.h>
#import <Snapchat/SCT4GPresenceGroupPillViewDelegate.h>

@class NSMutableArray, NSMutableDictionary, SCTV3PresenceGroupGradientView, NSString;

@interface SCT4GPresenceGroupBarVC : SCTV3PresenceBarVC <SCT4GPresenceGroupPillViewDelegate> {

	NSMutableArray* _participants;
	NSMutableDictionary* _participantsPills;
	SCTV3PresenceGroupGradientView* _gradientView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_pillLabelsForParticipantStates:(id)arg1 ;
-(id)_orderedParticipants;
-(void)_initView;
-(void)_updateBottomConstraintOfPills;
-(void)_updateLeftConstraintOfPills;
-(void)_updateUsersWithState:(id)arg1 ;
-(unsigned long long)_pillModeForParticipantState:(id)arg1 callingState:(long long)arg2 callingMedia:(long long)arg3 fullscreen:(BOOL)arg4 ;
-(void)_animateAvatarUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_animatePresenceChangeWithCompletion:(/*^block*/id)arg1 ;
-(double)_tallestPillHeightForState:(id)arg1 ;
-(id)_createParticipantWithState:(id)arg1 labelText:(id)arg2 ;
-(void)_updateBottomConstraintOfPill:(id)arg1 ;
-(void)_reorderPills;
-(void)_updateLeftConstraintOfPill:(id)arg1 withPreviousPill:(id)arg2 ;
-(void)addFullscreenPillPositionAnimation:(id)arg1 pill:(id)arg2 fullscreen:(BOOL)arg3 ;
-(id)initWithParticipants:(id)arg1 participantPresences:(id)arg2 avatarServices:(id)arg3 chatServices:(id)arg4 talkUIController:(id)arg5 speechActivityAnnouncer:(id)arg6 ;
-(id)_createPillView;
-(void)_performChangeMediaAnimationForState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performChangePresenceOrderAnimationForState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performEnterFullscreenAnimationForState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performExitFullscreenAnimationForState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_pillForUsername:(id)arg1 ;
-(BOOL)presenceBar:(id)arg1 pointInside:(CGPoint)arg2 ;
-(id)_createDragContextWithPoint:(CGPoint)arg1 ;
-(void)_processDragMove;
-(void)_processDragEndWithCompletion:(/*^block*/id)arg1 ;
-(id)_userForUsername:(id)arg1 ;
-(void)_updateScrollViewContentSize;
@end
