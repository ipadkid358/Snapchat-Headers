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

@interface SCADiscoverSnapShareBase : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* snapIndexCount;
	NSNumber* snapIndexPos;
	NSNumber* timeViewed;
	NSNumber* collectionPos;
	long long mediaType;
	long long source;
	long long collectionType;
	NSString* editionId;
	NSString* publisherId;
	NSString* dsnapId;
	NSString* collectionId;

}
-(void)setPublisherId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getSource;
-(double)getTimeViewed;
-(void)setTimeViewed:(double)arg1 ;
-(id)getDsnapId;
-(void)setDsnapId:(id)arg1 ;
-(id)getEditionId;
-(void)setEditionId:(id)arg1 ;
-(id)getPublisherId;
-(long long)getMediaType;
-(long long)getSnapIndexCount;
-(void)setSnapIndexCount:(long long)arg1 ;
-(long long)getSnapIndexPos;
-(void)setSnapIndexPos:(long long)arg1 ;
-(long long)getCollectionPos;
-(void)setCollectionPos:(long long)arg1 ;
-(long long)getCollectionType;
-(id)getCollectionId;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCollectionType:(long long)arg1 ;
-(void)setCollectionId:(id)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(id)asDictionary;
@end
