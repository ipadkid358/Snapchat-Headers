/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCAStoryAdScreenshot : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* viewLocation;
	NSNumber* timeViewed;
	NSNumber* fullView;
	NSNumber* snapIndexCount;
	NSNumber* snapIndexPos;
	NSNumber* adIndexCount;
	NSNumber* adIndexPos;
	NSNumber* snapTime;
	NSNumber* withGallery;
	long long viewSource;
	long long storyType;
	long long mediaType;
	NSString* storySnapId;
	NSString* posterId;
	NSString* geoFence;
	NSString* sponsor;
	NSString* adsnapId;
	NSString* adId;
	NSString* adsnapPlacementId;
	NSString* adsnapLineItemId;
	NSString* userAdId;
	NSString* hydraResultId;
	NSString* ghost_poster_id;

}
-(void)setUserAdId:(id)arg1 ;
-(void)setAdId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getAdId;
-(long long)getStoryType;
-(id)getUserAdId;
-(double)getTimeViewed;
-(void)setTimeViewed:(double)arg1 ;
-(BOOL)getFullView;
-(void)setFullView:(BOOL)arg1 ;
-(id)getSponsor;
-(void)setSponsor:(id)arg1 ;
-(id)getAdsnapId;
-(void)setAdsnapId:(id)arg1 ;
-(BOOL)getWithGallery;
-(void)setWithGallery:(BOOL)arg1 ;
-(long long)getViewSource;
-(void)setViewSource:(long long)arg1 ;
-(id)getAdsnapPlacementId;
-(void)setAdsnapPlacementId:(id)arg1 ;
-(id)getAdsnapLineItemId;
-(void)setAdsnapLineItemId:(id)arg1 ;
-(long long)getMediaType;
-(long long)getSnapIndexCount;
-(void)setSnapIndexCount:(long long)arg1 ;
-(long long)getSnapIndexPos;
-(void)setSnapIndexPos:(long long)arg1 ;
-(long long)getAdIndexCount;
-(void)setAdIndexCount:(long long)arg1 ;
-(long long)getAdIndexPos;
-(void)setAdIndexPos:(long long)arg1 ;
-(long long)getViewLocation;
-(void)setViewLocation:(long long)arg1 ;
-(id)getPosterId;
-(void)setPosterId:(id)arg1 ;
-(id)getGhost_poster_id;
-(void)setGhost_poster_id:(id)arg1 ;
-(id)getGeoFence;
-(id)getStorySnapId;
-(void)setStorySnapId:(id)arg1 ;
-(double)getSnapTime;
-(void)setSnapTime:(double)arg1 ;
-(id)getHydraResultId;
-(void)setHydraResultId:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGeoFence:(id)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(id)asDictionary;
-(void)setStoryType:(long long)arg1 ;
@end

