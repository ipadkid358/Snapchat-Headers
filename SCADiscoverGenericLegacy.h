/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:04 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCADiscoverGenericLegacy : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* timeViewed;
	NSNumber* fullView;
	NSNumber* numSnapsViewed;
	NSNumber* numLongformViewed;
	NSNumber* contentIndexCount;
	NSNumber* contentIndexPos;
	NSNumber* channelIndexPos;
	NSNumber* viewLocationVisibleCount;
	long long longformType;
	long long exitEvent;
	NSString* additional_info;
	NSString* push_notification_type;
	NSString* context;
	NSString* friendType;
	NSString* dsnapId;
	NSString* editionId;
	NSString* publisherId;
	NSString* adsnapId;
	NSString* adId;
	NSString* splashId;
	NSString* adsnapPlacementId;
	NSString* adsnapLineItemId;

}
-(void)setPublisherId:(id)arg1 ;
-(void)setExitEvent:(long long)arg1 ;
-(void)setAdId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getAdId;
-(id)getContext;
-(double)getTimeViewed;
-(void)setTimeViewed:(double)arg1 ;
-(BOOL)getFullView;
-(void)setFullView:(BOOL)arg1 ;
-(long long)getNumSnapsViewed;
-(void)setNumSnapsViewed:(long long)arg1 ;
-(long long)getNumLongformViewed;
-(void)setNumLongformViewed:(long long)arg1 ;
-(long long)getLongformType;
-(void)setLongformType:(long long)arg1 ;
-(long long)getExitEvent;
-(id)getAdditional_info;
-(void)setAdditional_info:(id)arg1 ;
-(id)getPush_notification_type;
-(void)setPush_notification_type:(id)arg1 ;
-(id)getFriendType;
-(void)setFriendType:(id)arg1 ;
-(id)getDsnapId;
-(void)setDsnapId:(id)arg1 ;
-(id)getEditionId;
-(void)setEditionId:(id)arg1 ;
-(id)getPublisherId;
-(id)getAdsnapId;
-(void)setAdsnapId:(id)arg1 ;
-(id)getSplashId;
-(void)setSplashId:(id)arg1 ;
-(id)getAdsnapPlacementId;
-(void)setAdsnapPlacementId:(id)arg1 ;
-(id)getAdsnapLineItemId;
-(void)setAdsnapLineItemId:(id)arg1 ;
-(long long)getContentIndexCount;
-(void)setContentIndexCount:(long long)arg1 ;
-(long long)getContentIndexPos;
-(void)setContentIndexPos:(long long)arg1 ;
-(long long)getChannelIndexPos;
-(void)setChannelIndexPos:(long long)arg1 ;
-(long long)getViewLocationVisibleCount;
-(void)setViewLocationVisibleCount:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContext:(id)arg1 ;
-(id)asDictionary;
@end
