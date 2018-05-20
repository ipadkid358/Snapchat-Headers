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

@interface SCADirectSnapViewOpen : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* snapTimeSec;
	NSNumber* snapTimeIsLoop;
	NSNumber* isOpera;
	long long mediaType;
	NSString* correspondentId;
	NSString* snapId;
	NSString* mischiefId;

}
-(void)setCorrespondentId:(id)arg1 ;
-(void)setSnapId:(id)arg1 ;
-(void)setMischiefId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getMediaType;
-(id)getMischiefId;
-(id)getCorrespondentId;
-(id)getSnapId;
-(double)getSnapTimeSec;
-(void)setSnapTimeSec:(double)arg1 ;
-(BOOL)getSnapTimeIsLoop;
-(void)setSnapTimeIsLoop:(BOOL)arg1 ;
-(BOOL)getIsOpera;
-(void)setIsOpera:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(id)asDictionary;
@end
