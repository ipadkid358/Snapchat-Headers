/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:06 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCAMapExploreScreenshot : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* mapSessionId;
	NSNumber* statusTypeEnum;
	NSNumber* isMyStatus;
	NSString* statusType;
	NSString* statusId;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getMapSessionId;
-(void)setMapSessionId:(long long)arg1 ;
-(long long)getStatusTypeEnum;
-(void)setStatusTypeEnum:(long long)arg1 ;
-(id)getStatusType;
-(void)setStatusType:(id)arg1 ;
-(id)getStatusId;
-(void)setStatusId:(id)arg1 ;
-(BOOL)getIsMyStatus;
-(void)setIsMyStatus:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
@end

