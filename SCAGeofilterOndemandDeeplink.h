/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAGeofilterOndemandEventBase.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCAGeofilterOndemandDeeplink : SCAGeofilterOndemandEventBase <MapSerializable, NSCopying> {

	NSString* scCampaign;
	NSString* scSource;
	NSString* scMedium;
	NSString* scContent;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getScCampaign;
-(void)setScCampaign:(id)arg1 ;
-(id)getScSource;
-(void)setScSource:(id)arg1 ;
-(id)getScMedium;
-(void)setScMedium:(id)arg1 ;
-(id)getScContent;
-(void)setScContent:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
@end
