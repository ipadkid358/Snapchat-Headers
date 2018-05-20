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

@interface SCAExplorerReportSnap : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* level;
	long long storyType;
	long long reason;
	NSString* geoFence;
	NSString* poster_id;
	NSString* sponser;
	NSString* storySnapId;
	NSString* storyRootSnapId;
	NSString* ghost_poster_id;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getStoryType;
-(long long)getReason;
-(id)getGhost_poster_id;
-(void)setGhost_poster_id:(id)arg1 ;
-(id)getGeoFence;
-(id)getStorySnapId;
-(void)setStorySnapId:(id)arg1 ;
-(id)getPoster_id;
-(void)setPoster_id:(id)arg1 ;
-(id)getSponser;
-(void)setSponser:(id)arg1 ;
-(id)getStoryRootSnapId;
-(void)setStoryRootSnapId:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(void)setGeoFence:(id)arg1 ;
-(void)setReason:(long long)arg1 ;
-(long long)getLevel;
-(id)asDictionary;
-(void)setStoryType:(long long)arg1 ;
@end

