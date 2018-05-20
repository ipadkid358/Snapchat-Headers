/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SCStoryAdTrackInfo <NSObject>
@property (nonatomic,readonly) long long snapCount; 
@property (nonatomic,readonly) long long totalTopSnapsMediaDurationMillis; 
@property (nonatomic,readonly) unsigned long long totalSwipeUps; 
@property (nonatomic,readonly) unsigned long long uniqueSwipeUps; 
@property (nonatomic,readonly) BOOL isAudioOn; 
@property (nonatomic,readonly) double timeViewedInMillis; 
@property (nonatomic,copy,readonly) NSString * exitEvent; 
@required
-(BOOL)isAudioOn;
-(long long)snapCount;
-(NSString *)exitEvent;
-(unsigned long long)uniqueSwipeUps;
-(unsigned long long)totalSwipeUps;
-(long long)totalTopSnapsMediaDurationMillis;
-(double)timeViewedInMillis;

@end

