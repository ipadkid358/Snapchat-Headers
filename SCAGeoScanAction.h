/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserNotTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCAGeoScanAction : SCAUserNotTrackedEvent <MapSerializable, NSCopying> {

	long long scanActionType;
	long long source;
	long long action;
	NSString* scanData;
	NSString* scannableId;
	NSString* geocell;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getAction;
-(long long)getSource;
-(long long)getScanActionType;
-(void)setScanActionType:(long long)arg1 ;
-(id)getScanData;
-(void)setScanData:(id)arg1 ;
-(id)getScannableId;
-(void)setScannableId:(id)arg1 ;
-(id)getGeocell;
-(void)setGeocell:(id)arg1 ;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(long long)arg1 ;
-(id)asDictionary;
@end

