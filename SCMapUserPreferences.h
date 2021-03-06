/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCPreferences, NSDate, NSDictionary;

@interface SCMapUserPreferences : NSObject {

	SCPreferences* _preferences;

}

@property (assign,nonatomic) BOOL alertRequiredBeforeLeavingGhostMode; 
@property (nonatomic,retain) NSDate * lastNotSharingLocationTooltipDisplayDate; 
@property (assign,nonatomic) unsigned long long locationSharingNotificationDisplayCount; 
@property (assign,nonatomic) double lastLocationSharingNotificationDisplayTimeIntervalSince1970; 
@property (assign,nonatomic) double timeIntervalSinceBootWhenGhostModeWasEntered; 
@property (assign,nonatomic) double durationOfGhostMode; 
@property (nonatomic,readonly) NSDictionary * viewedExploreTimestampSecsByUniqueId; 
@property (nonatomic,retain) NSDate * lastManageMyExploreUpdatesTooltipDisplayDate; 
-(BOOL)alertRequiredBeforeLeavingGhostMode;
-(void)setAlertRequiredBeforeLeavingGhostMode:(BOOL)arg1 ;
-(NSDate *)lastNotSharingLocationTooltipDisplayDate;
-(void)setLastNotSharingLocationTooltipDisplayDate:(NSDate *)arg1 ;
-(unsigned long long)locationSharingNotificationDisplayCount;
-(void)setLocationSharingNotificationDisplayCount:(unsigned long long)arg1 ;
-(double)timeIntervalSinceBootWhenGhostModeWasEntered;
-(void)setTimeIntervalSinceBootWhenGhostModeWasEntered:(double)arg1 ;
-(double)durationOfGhostMode;
-(void)setDurationOfGhostMode:(double)arg1 ;
-(double)lastLocationSharingNotificationDisplayTimeIntervalSince1970;
-(void)setLastLocationSharingNotificationDisplayTimeIntervalSince1970:(double)arg1 ;
-(NSDictionary *)viewedExploreTimestampSecsByUniqueId;
-(BOOL)isViewedExploreTimestamp:(double)arg1 uniqueId:(id)arg2 ;
-(void)markViewedExploreTimestamp:(double)arg1 uniqueId:(id)arg2 ;
-(void)clearViewedExploreTimestamps;
-(void)setLastManageMyExploreUpdatesTooltipDisplayDate:(NSDate *)arg1 ;
-(NSDate *)lastManageMyExploreUpdatesTooltipDisplayDate;
-(void)resetTooltipDisplayDate;
-(BOOL)hasSeenWarningForGame:(id)arg1 ;
-(void)markSeenWarningForGame:(id)arg1 ;
-(BOOL)hasSeenLeaderboardTooltip;
-(void)markSeenLeaderboardTooltip;
-(void)clearWarningsSeen;
-(id)initWithPreferences:(id)arg1 ;
@end

