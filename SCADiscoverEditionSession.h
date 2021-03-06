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

@class NSNumber;

@interface SCADiscoverEditionSession : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* fullView;
	NSNumber* editionViewCount;
	NSNumber* numSnapsViewed;
	NSNumber* viewLocationPos;
	NSNumber* editionCount;
	NSNumber* timeViewed;
	long long exitEvent;
	long long tileSize;
	long long viewSource;

}
-(void)setExitEvent:(long long)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(double)getTimeViewed;
-(void)setTimeViewed:(double)arg1 ;
-(BOOL)getFullView;
-(void)setFullView:(BOOL)arg1 ;
-(long long)getNumSnapsViewed;
-(void)setNumSnapsViewed:(long long)arg1 ;
-(long long)getExitEvent;
-(long long)getViewSource;
-(void)setViewSource:(long long)arg1 ;
-(long long)getEditionViewCount;
-(void)setEditionViewCount:(long long)arg1 ;
-(long long)getViewLocationPos;
-(void)setViewLocationPos:(long long)arg1 ;
-(long long)getEditionCount;
-(void)setEditionCount:(long long)arg1 ;
-(long long)getTileSize;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTileSize:(long long)arg1 ;
-(id)asDictionary;
@end

