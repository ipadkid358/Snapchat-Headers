/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCAdInteractionProtocol.h>
#import <Snapchat/SCAdTopSnapInteractionProtocol.h>
#import <Snapchat/SCAdSnapThirdPartyTrackInfo.h>

@class SCSnapAdsAdInteractionTimer, NSString;

@interface SCAdSnapThirdPartyViewingStatus : NSObject <SCAdInteractionProtocol, SCAdTopSnapInteractionProtocol, SCAdSnapThirdPartyTrackInfo> {

	long long _adType;
	SCSnapAdsAdInteractionTimer* _topSnapTotalDurationTimer;
	SCSnapAdsAdInteractionTimer* _topSnapTotalAudibleDurationTimer;
	SCSnapAdsAdInteractionTimer* _topSnapUnobstructedViewTimer;
	SCSnapAdsAdInteractionTimer* _topSnapUnobstructedAudibleViewTimer;
	double _firstReactionStartedTimestamp;
	BOOL _isFirstReactionTimerActive;
	BOOL _topSnapActive;
	long long _firstReactionTimeMillis;
	BOOL _wasFullyVisible;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long firstReactionTimeMillis; 
@property (nonatomic,readonly) BOOL wasFullyVisible; 
@property (nonatomic,readonly) double topSnapTotalViewTimeInMillis; 
@property (nonatomic,readonly) double topSnapTotalAudibleViewTimeInMillis; 
@property (nonatomic,readonly) double topSnapMaxUnobstructedAudibleViewTimeInMillis; 
@property (nonatomic,readonly) double topSnapTotalUnobstructedAudibleViewTimeInMillis; 
@property (nonatomic,readonly) double topSnapMaxUnobstructedViewTimeInMillis; 
@property (nonatomic,readonly) double topSnapTotalUnobstructedViewTimeInMillis; 
@property (nonatomic,readonly) double topSnapUncappedMaxUnobstructedViewTimeInMillis; 
@property (nonatomic,readonly) double topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis; 
-(void)_startFirstReactionTimer;
-(BOOL)_isNegativeReaction:(id)arg1 ;
-(void)_stopFirstReactionTimer:(BOOL)arg1 ;
-(void)_stopTopSnapTimerShouldStopTotalTimer:(BOOL)arg1 ;
-(void)adShowOnTopSnap:(BOOL)arg1 currentMediaVolumePercent:(double)arg2 ;
-(void)adHideWithSkipEvent:(id)arg1 ;
-(void)adSnapHideOnTopSnap:(BOOL)arg1 skipEvent:(id)arg2 ;
-(void)swipedFromTopSnap:(BOOL)arg1 exitEvent:(id)arg2 currentMediaVolumePercent:(double)arg3 ;
-(void)onAudibilityChange:(double)arg1 ;
-(void)obstructedOnTopSnap:(BOOL)arg1 ;
-(void)unobstructedOnTopSnap:(BOOL)arg1 currentMediaVolumePercent:(double)arg2 ;
-(void)adLongPressedOnTopSnap:(BOOL)arg1 ;
-(void)adScreenshotTaken;
-(void)resetForSwipeBackTracking;
-(void)setTopSnapMediaDurationMillis:(long long)arg1 topSnapReportedViewDurationMillis:(long long)arg2 topSnapMedia:(long long)arg3 ;
-(void)swipeUpToCard;
-(id)initWithAdType:(long long)arg1 topSnapMediaDurationMillis:(long long)arg2 ;
-(long long)firstReactionTimeMillis;
-(BOOL)wasFullyVisible;
-(double)topSnapTotalViewTimeInMillis;
-(double)topSnapTotalAudibleViewTimeInMillis;
-(double)topSnapMaxUnobstructedAudibleViewTimeInMillis;
-(double)topSnapTotalUnobstructedAudibleViewTimeInMillis;
-(double)topSnapMaxUnobstructedViewTimeInMillis;
-(double)topSnapTotalUnobstructedViewTimeInMillis;
-(double)topSnapUncappedMaxUnobstructedViewTimeInMillis;
-(double)topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis;
@end

