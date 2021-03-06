/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsPortalEntity.h>

@class NSString, NSNumber;

@interface SCSnapAdsPortalAdSetEntity : SCSnapAdsPortalEntity {

	NSString* _adSetName;
	NSNumber* _dailyBudget;
	NSNumber* _startTimestampInMillis;
	NSNumber* _endTimestampInMillis;
	NSString* _campaignName;

}

@property (nonatomic,copy,readonly) NSString * adSetName;                           //@synthesize adSetName=_adSetName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * dailyBudget;                         //@synthesize dailyBudget=_dailyBudget - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * startTimestampInMillis;              //@synthesize startTimestampInMillis=_startTimestampInMillis - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * endTimestampInMillis;                //@synthesize endTimestampInMillis=_endTimestampInMillis - In the implementation block
@property (nonatomic,copy,readonly) NSString * campaignName;                        //@synthesize campaignName=_campaignName - In the implementation block
-(NSNumber *)startTimestampInMillis;
-(NSNumber *)endTimestampInMillis;
-(NSString *)campaignName;
-(NSString *)adSetName;
-(NSNumber *)dailyBudget;
-(BOOL)_isValidSojuAdSet:(id)arg1 campaignId:(id)arg2 ;
-(id)initWithSojuAdSet:(id)arg1 campaignId:(id)arg2 objective:(long long)arg3 ;
-(id)initWithAdSetId:(id)arg1 campaignId:(id)arg2 ;
@end

