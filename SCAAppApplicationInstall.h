/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCAAppApplicationInstall : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	long long source;
	long long deepLinkSource;
	NSString* deepLinkId;
	NSString* channelId;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getDeepLinkSource;
-(void)setDeepLinkSource:(long long)arg1 ;
-(id)getDeepLinkId;
-(void)setDeepLinkId:(id)arg1 ;
-(long long)getSource;
-(id)getChannelId;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
-(void)setChannelId:(id)arg1 ;
@end

