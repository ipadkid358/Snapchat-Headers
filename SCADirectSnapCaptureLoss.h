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

@class NSString;

@interface SCADirectSnapCaptureLoss : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	long long mediaType;
	long long actionType;
	long long buttonName;
	NSString* captureSessionId;
	NSString* errorMessage;
	NSString* page;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getPage;
-(long long)getActionType;
-(id)getErrorMessage;
-(long long)getMediaType;
-(id)getCaptureSessionId;
-(void)setCaptureSessionId:(id)arg1 ;
-(long long)getButtonName;
-(void)setButtonName:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPage:(id)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(void)setErrorMessage:(id)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(id)asDictionary;
@end

