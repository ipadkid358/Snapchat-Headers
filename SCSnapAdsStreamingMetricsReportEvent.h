/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsBaseEvent.h>

@class SCSnapAdsIdentifier;

@interface SCSnapAdsStreamingMetricsReportEvent : SCSnapAdsBaseEvent {

	SCSnapAdsIdentifier* _adIdentifier;
	long long _totalStallCount;
	long long _totalStallDurationMillis;
	long long _firstStallDurationMillis;
	unsigned long long _adProductType;

}

@property (nonatomic,retain) SCSnapAdsIdentifier * adIdentifier;              //@synthesize adIdentifier=_adIdentifier - In the implementation block
@property (assign,nonatomic) long long totalStallCount;                       //@synthesize totalStallCount=_totalStallCount - In the implementation block
@property (assign,nonatomic) long long totalStallDurationMillis;              //@synthesize totalStallDurationMillis=_totalStallDurationMillis - In the implementation block
@property (assign,nonatomic) long long firstStallDurationMillis;              //@synthesize firstStallDurationMillis=_firstStallDurationMillis - In the implementation block
@property (assign,nonatomic) unsigned long long adProductType;                //@synthesize adProductType=_adProductType - In the implementation block
-(SCSnapAdsIdentifier *)adIdentifier;
-(void)setAdIdentifier:(SCSnapAdsIdentifier *)arg1 ;
-(unsigned long long)adProductType;
-(void)setAdProductType:(unsigned long long)arg1 ;
-(void)setTotalStallDurationMillis:(long long)arg1 ;
-(void)setTotalStallCount:(long long)arg1 ;
-(void)setFirstStallDurationMillis:(long long)arg1 ;
-(long long)totalStallCount;
-(long long)totalStallDurationMillis;
-(long long)firstStallDurationMillis;
@end

