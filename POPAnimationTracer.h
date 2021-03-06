/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class POPAnimation, NSMutableArray, NSArray;

@interface POPAnimationTracer : NSObject {

	POPAnimation* _animation;
	POPAnimationState* _animationState;
	NSMutableArray* _events;
	BOOL _animationHasVelocity;
	BOOL _shouldLogAndResetOnCompletion;

}

@property (nonatomic,readonly) NSArray * allEvents; 
@property (nonatomic,readonly) NSArray * writeEvents; 
@property (assign,nonatomic) BOOL shouldLogAndResetOnCompletion;              //@synthesize shouldLogAndResetOnCompletion=_shouldLogAndResetOnCompletion - In the implementation block
-(id)initWithAnimation:(id)arg1 ;
-(id)eventsWithType:(unsigned long long)arg1 ;
-(NSArray *)writeEvents;
-(BOOL)shouldLogAndResetOnCompletion;
-(void)setShouldLogAndResetOnCompletion:(BOOL)arg1 ;
-(void)autoreversed;
-(void)writePropertyValue:(id)arg1 ;
-(void)updateVelocity:(id)arg1 ;
-(void)readPropertyValue:(id)arg1 ;
-(void)didReachToValue:(id)arg1 ;
-(void)updateFromValue:(id)arg1 ;
-(void)updateToValue:(id)arg1 ;
-(void)updateSpeed:(float)arg1 ;
-(void)updateBounciness:(float)arg1 ;
-(void)updateTension:(float)arg1 ;
-(void)updateFriction:(float)arg1 ;
-(void)updateMass:(float)arg1 ;
-(void)reset;
-(void)stop;
-(void)start;
-(void)didStart;
-(NSArray *)allEvents;
-(void)didStop:(BOOL)arg1 ;
@end

