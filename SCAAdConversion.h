/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/NamedEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSDate;

@interface SCAAdConversion : NSObject <NamedEvent, NSCopying> {

	NSNumber* adTrackCount;
	NSNumber* swipe1Day;
	NSNumber* swipe7Day;
	NSNumber* swipe28Day;
	NSNumber* view1Hour;
	NSNumber* view3Hour;
	NSNumber* view6Hour;
	NSNumber* view1Day;
	NSNumber* view7Day;
	NSNumber* view28Day;
	NSNumber* isRegulatedContent;
	NSNumber* conversionValueLocalMicro;
	NSNumber* conversionValueUsdMicro;
	NSString* said;
	NSString* requestId;
	NSString* pixelId;
	NSString* eventType;
	NSString* adId;
	NSString* adSquadId;
	NSString* campaignId;
	NSString* adAccountId;
	NSString* eventData;
	NSString* osType;
	NSString* userAgent;
	NSString* adServeRequestId;
	NSString* adServeItemId;
	NSString* adTrackInstanceId;
	NSString* age;
	NSString* ageGroupSupplied;
	NSString* ageGroup;
	NSString* gender;
	NSString* country;
	NSString* edgeRegionCode;
	NSString* edgeMetroCode;
	NSString* osVersion;
	NSString* deviceModel;
	NSString* userInterest;
	NSString* adType;
	NSString* sponsoredUnlockableType;
	NSDate* serverTimestamp;
	NSDate* adTrackTimestamp;
	NSDate* conversionTimestamp;

}
-(id)getUserAgent;
-(void)setAdType:(id)arg1 ;
-(void)setAdAccountId:(id)arg1 ;
-(void)setAdId:(id)arg1 ;
-(id)getCountry;
-(id)getDeviceModel;
-(id)getOsType;
-(id)getOsVersion;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getRequestId;
-(id)getAdId;
-(BOOL)getIsRegulatedContent;
-(void)setIsRegulatedContent:(BOOL)arg1 ;
-(id)getAdAccountId;
-(id)getCampaignId;
-(id)getAdType;
-(id)getAge;
-(id)getAgeGroupSupplied;
-(void)setAgeGroupSupplied:(id)arg1 ;
-(id)getAgeGroup;
-(void)setAgeGroup:(id)arg1 ;
-(id)getGender;
-(id)getEdgeRegionCode;
-(void)setEdgeRegionCode:(id)arg1 ;
-(id)getEdgeMetroCode;
-(void)setEdgeMetroCode:(id)arg1 ;
-(id)getUserInterest;
-(void)setUserInterest:(id)arg1 ;
-(long long)getAdTrackCount;
-(void)setAdTrackCount:(long long)arg1 ;
-(BOOL)getSwipe1Day;
-(void)setSwipe1Day:(BOOL)arg1 ;
-(BOOL)getSwipe7Day;
-(void)setSwipe7Day:(BOOL)arg1 ;
-(BOOL)getSwipe28Day;
-(void)setSwipe28Day:(BOOL)arg1 ;
-(BOOL)getView1Hour;
-(void)setView1Hour:(BOOL)arg1 ;
-(BOOL)getView3Hour;
-(void)setView3Hour:(BOOL)arg1 ;
-(BOOL)getView6Hour;
-(void)setView6Hour:(BOOL)arg1 ;
-(BOOL)getView1Day;
-(void)setView1Day:(BOOL)arg1 ;
-(BOOL)getView7Day;
-(void)setView7Day:(BOOL)arg1 ;
-(BOOL)getView28Day;
-(void)setView28Day:(BOOL)arg1 ;
-(long long)getConversionValueLocalMicro;
-(void)setConversionValueLocalMicro:(long long)arg1 ;
-(long long)getConversionValueUsdMicro;
-(void)setConversionValueUsdMicro:(long long)arg1 ;
-(id)getSaid;
-(void)setSaid:(id)arg1 ;
-(id)getPixelId;
-(void)setPixelId:(id)arg1 ;
-(id)getEventType;
-(id)getAdSquadId;
-(void)setAdSquadId:(id)arg1 ;
-(id)getEventData;
-(id)getAdServeRequestId;
-(void)setAdServeRequestId:(id)arg1 ;
-(id)getAdServeItemId;
-(void)setAdServeItemId:(id)arg1 ;
-(id)getAdTrackInstanceId;
-(void)setAdTrackInstanceId:(id)arg1 ;
-(id)getSponsoredUnlockableType;
-(void)setSponsoredUnlockableType:(id)arg1 ;
-(id)getServerTimestamp;
-(id)getAdTrackTimestamp;
-(void)setAdTrackTimestamp:(id)arg1 ;
-(id)getConversionTimestamp;
-(void)setConversionTimestamp:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserAgent:(id)arg1 ;
-(void)setCountry:(id)arg1 ;
-(void)setEventType:(id)arg1 ;
-(void)setOsVersion:(id)arg1 ;
-(void)setServerTimestamp:(id)arg1 ;
-(void)setGender:(id)arg1 ;
-(void)setRequestId:(id)arg1 ;
-(void)setOsType:(id)arg1 ;
-(id)asDictionary;
-(void)setAge:(id)arg1 ;
-(void)setEventData:(id)arg1 ;
-(void)setCampaignId:(id)arg1 ;
-(void)setDeviceModel:(id)arg1 ;
@end

