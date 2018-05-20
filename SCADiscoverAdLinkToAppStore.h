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

@interface SCADiscoverAdLinkToAppStore : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* snapIndexCount;
	NSNumber* snapIndexPos;
	NSNumber* adIndexCount;
	NSNumber* adIndexPos;
	long long source;
	NSString* editionId;
	NSString* publisherId;
	NSString* adsnapId;
	NSString* adId;
	NSString* adProductId;
	NSString* destinationUrl;
	NSString* userAdId;

}
-(void)setPublisherId:(id)arg1 ;
-(void)setUserAdId:(id)arg1 ;
-(void)setAdId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getAdId;
-(long long)getSource;
-(id)getUserAdId;
-(id)getEditionId;
-(void)setEditionId:(id)arg1 ;
-(id)getPublisherId;
-(id)getAdsnapId;
-(void)setAdsnapId:(id)arg1 ;
-(long long)getSnapIndexCount;
-(void)setSnapIndexCount:(long long)arg1 ;
-(long long)getSnapIndexPos;
-(void)setSnapIndexPos:(long long)arg1 ;
-(long long)getAdIndexCount;
-(void)setAdIndexCount:(long long)arg1 ;
-(long long)getAdIndexPos;
-(void)setAdIndexPos:(long long)arg1 ;
-(id)getAdProductId;
-(void)setAdProductId:(id)arg1 ;
-(id)getDestinationUrl;
-(void)setDestinationUrl:(id)arg1 ;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
@end

