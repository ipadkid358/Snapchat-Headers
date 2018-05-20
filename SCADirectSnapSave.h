/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCADirectSnapSaveBase.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCADirectSnapSave : SCADirectSnapSaveBase <MapSerializable, NSCopying> {

	NSNumber* deviceScore;
	long long lensSource;
	NSString* filterLensId;
	NSString* lensOptionId;
	NSString* snapSessionId;
	NSString* snapId;
	NSString* mediaId;
	NSString* entryId;
	NSString* captureSessionId;
	NSString* saveSessionId;

}
-(void)setSnapSessionId:(id)arg1 ;
-(void)setLensOptionId:(id)arg1 ;
-(void)setDeviceScore:(long long)arg1 ;
-(void)setSnapId:(id)arg1 ;
-(void)setEntryId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getSnapSessionId;
-(id)getSnapId;
-(long long)getLensSource;
-(void)setLensSource:(long long)arg1 ;
-(id)getLensOptionId;
-(id)getCaptureSessionId;
-(void)setCaptureSessionId:(id)arg1 ;
-(long long)getDeviceScore;
-(id)getEntryId;
-(id)getFilterLensId;
-(void)setFilterLensId:(id)arg1 ;
-(id)getSaveSessionId;
-(void)setSaveSessionId:(id)arg1 ;
-(id)getMediaId;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
-(void)setMediaId:(id)arg1 ;
@end

