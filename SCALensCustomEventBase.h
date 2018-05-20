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

@class NSNumber, NSString, SCALensMetadata;

@interface SCALensCustomEventBase : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* sessionTotalCount;
	NSNumber* actionSequenceCount;
	NSNumber* camera;
	NSString* lensSessionId;
	NSString* interactionName;
	NSString* interactionValue;
	SCALensMetadata* lensMetadata;

}
-(void)setLensSessionId:(id)arg1 ;
-(void)setLensMetadata:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getCamera;
-(id)getLensSessionId;
-(long long)getActionSequenceCount;
-(void)setActionSequenceCount:(long long)arg1 ;
-(long long)getSessionTotalCount;
-(void)setSessionTotalCount:(long long)arg1 ;
-(id)getInteractionName;
-(void)setInteractionName:(id)arg1 ;
-(id)getInteractionValue;
-(void)setInteractionValue:(id)arg1 ;
-(id)getLensMetadata;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCamera:(long long)arg1 ;
-(id)asDictionary;
@end

