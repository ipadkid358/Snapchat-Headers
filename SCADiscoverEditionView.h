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

@interface SCADiscoverEditionView : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* withSubscription;
	NSNumber* collectionPos;
	NSNumber* viewLocation;
	NSNumber* fullView;
	NSNumber* timeViewed;
	NSNumber* numSnapsViewed;
	NSNumber* numLongformViewed;
	NSNumber* snapIndexCount;
	NSNumber* viewLocationPos;
	NSNumber* autoAdvanceIndex;
	long long readState;
	long long tileSize;
	long long collectionType;
	long long viewSource;
	long long exitEvent;
	long long source;
	long long viewLocationSorting;
	NSString* editionId;
	NSString* editionVersion;
	NSString* publisherId;
	NSString* scanActionId;
	NSString* deepLinkId;
	NSString* collectionId;
	NSString* sortOrderId;
	NSString* trackingId;

}
-(void)setPublisherId:(id)arg1 ;
-(void)setExitEvent:(long long)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getAutoAdvanceIndex;
-(void)setAutoAdvanceIndex:(long long)arg1 ;
-(id)getDeepLinkId;
-(void)setDeepLinkId:(id)arg1 ;
-(long long)getSource;
-(double)getTimeViewed;
-(void)setTimeViewed:(double)arg1 ;
-(BOOL)getFullView;
-(void)setFullView:(BOOL)arg1 ;
-(long long)getNumSnapsViewed;
-(void)setNumSnapsViewed:(long long)arg1 ;
-(long long)getNumLongformViewed;
-(void)setNumLongformViewed:(long long)arg1 ;
-(long long)getExitEvent;
-(id)getEditionId;
-(void)setEditionId:(id)arg1 ;
-(id)getPublisherId;
-(long long)getViewSource;
-(void)setViewSource:(long long)arg1 ;
-(BOOL)getWithSubscription;
-(void)setWithSubscription:(BOOL)arg1 ;
-(long long)getSnapIndexCount;
-(void)setSnapIndexCount:(long long)arg1 ;
-(long long)getCollectionPos;
-(void)setCollectionPos:(long long)arg1 ;
-(long long)getCollectionType;
-(id)getTrackingId;
-(void)setTrackingId:(id)arg1 ;
-(id)getCollectionId;
-(id)getScanActionId;
-(void)setScanActionId:(id)arg1 ;
-(id)getSortOrderId;
-(void)setSortOrderId:(id)arg1 ;
-(long long)getViewLocationPos;
-(void)setViewLocationPos:(long long)arg1 ;
-(long long)getTileSize;
-(long long)getViewLocation;
-(void)setViewLocation:(long long)arg1 ;
-(long long)getReadState;
-(void)setReadState:(long long)arg1 ;
-(long long)getViewLocationSorting;
-(void)setViewLocationSorting:(long long)arg1 ;
-(id)getEditionVersion;
-(void)setEditionVersion:(id)arg1 ;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTileSize:(long long)arg1 ;
-(void)setCollectionType:(long long)arg1 ;
-(void)setCollectionId:(id)arg1 ;
-(id)asDictionary;
@end

