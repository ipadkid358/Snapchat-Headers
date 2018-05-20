/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:04 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAGalleryBrowseSnapBase.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCAGeofilterGalleryBrowseSnapView : SCAGalleryBrowseSnapBase <MapSerializable, NSCopying> {

	NSNumber* filterIndexPos;
	NSNumber* filterIndexCount;
	NSString* adsnapPlacementId;
	NSString* encGeoData;
	NSString* filterGeofilterId;
	NSString* filterGeolensId;
	NSString* lensOptionId;

}
-(void)setFilterIndexPos:(long long)arg1 ;
-(void)setLensOptionId:(id)arg1 ;
-(void)setEncGeoData:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getAdsnapPlacementId;
-(void)setAdsnapPlacementId:(id)arg1 ;
-(id)getFilterGeofilterId;
-(void)setFilterGeofilterId:(id)arg1 ;
-(id)getFilterGeolensId;
-(void)setFilterGeolensId:(id)arg1 ;
-(id)getLensOptionId;
-(long long)getFilterIndexPos;
-(long long)getFilterIndexCount;
-(void)setFilterIndexCount:(long long)arg1 ;
-(id)getEncGeoData;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
@end
