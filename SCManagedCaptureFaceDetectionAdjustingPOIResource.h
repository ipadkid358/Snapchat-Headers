/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSDictionary, NSNumber;

@interface SCManagedCaptureFaceDetectionAdjustingPOIResource : NSObject {

	CGPoint _defaultPointOfInterest;
	BOOL _shouldTargetOnFaceAutomatically;
	NSDictionary* _faceBoundsByFaceID;
	long long _adjustingPOIMode;
	NSNumber* _targetingFaceID;
	CGPoint _pointOfInterest;
	CGRect _targetingFaceBounds;

}

@property (assign,nonatomic) CGPoint pointOfInterest;                           //@synthesize pointOfInterest=_pointOfInterest - In the implementation block
@property (nonatomic,retain) NSDictionary * faceBoundsByFaceID;                 //@synthesize faceBoundsByFaceID=_faceBoundsByFaceID - In the implementation block
@property (assign,nonatomic) long long adjustingPOIMode;                        //@synthesize adjustingPOIMode=_adjustingPOIMode - In the implementation block
@property (assign,nonatomic) BOOL shouldTargetOnFaceAutomatically;              //@synthesize shouldTargetOnFaceAutomatically=_shouldTargetOnFaceAutomatically - In the implementation block
@property (nonatomic,retain) NSNumber * targetingFaceID;                        //@synthesize targetingFaceID=_targetingFaceID - In the implementation block
@property (assign,nonatomic) CGRect targetingFaceBounds;                        //@synthesize targetingFaceBounds=_targetingFaceBounds - In the implementation block
-(id)initWithDefaultPointOfInterest:(CGPoint)arg1 shouldTargetOnFaceAutomatically:(BOOL)arg2 ;
-(CGPoint)updateWithNewProposedPointOfInterest:(CGPoint)arg1 fromUser:(BOOL)arg2 ;
-(CGPoint)updateWithNewDetectedFaceBounds:(id)arg1 ;
-(NSDictionary *)faceBoundsByFaceID;
-(void)setFaceBoundsByFaceID:(NSDictionary *)arg1 ;
-(void)setAdjustingPOIMode:(long long)arg1 ;
-(void)setTargetingFaceID:(NSNumber *)arg1 ;
-(void)setTargetingFaceBounds:(CGRect)arg1 ;
-(void)setPointOfInterest:(CGPoint)arg1 ;
-(id)_getFaceIDOfFaceBoundsContainingPoint:(CGPoint)arg1 fromFaceBounds:(id)arg2 ;
-(CGPoint)_getPointOfInterestWithFaceID:(id)arg1 fromFaceBounds:(id)arg2 ;
-(BOOL)_isPointOfInterestValid:(CGPoint)arg1 ;
-(void)_setPointOfInterest:(CGPoint)arg1 targetingFaceID:(id)arg2 adjustingPOIMode:(long long)arg3 ;
-(long long)adjustingPOIMode;
-(BOOL)shouldTargetOnFaceAutomatically;
-(BOOL)_focusOnPreferredFaceInFaceBounds:(id)arg1 ;
-(NSNumber *)targetingFaceID;
-(BOOL)_focusOnFaceWithTargetFaceID:(id)arg1 inFaceBounds:(id)arg2 ;
-(id)_getPreferredFaceIDFromFaceBounds:(id)arg1 ;
-(BOOL)_shouldChangeToNewPoint:(CGPoint)arg1 withNewFaceID:(id)arg2 newFaceBounds:(CGRect)arg3 ;
-(CGRect)targetingFaceBounds;
-(void)setShouldTargetOnFaceAutomatically:(BOOL)arg1 ;
-(void)reset;
-(CGPoint)pointOfInterest;
@end

