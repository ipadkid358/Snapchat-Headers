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

@interface SCAGeolocationMusicDetect : SCAUserNotTrackedEvent <MapSerializable, NSCopying> {

	NSString* songTitle;
	NSString* artistName;
	NSString* filterGeolensId;
	NSString* geocell;

}
-(void)setSongTitle:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getFilterGeolensId;
-(void)setFilterGeolensId:(id)arg1 ;
-(id)getSongTitle;
-(id)getArtistName;
-(id)getGeocell;
-(void)setGeocell:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setArtistName:(id)arg1 ;
-(id)asDictionary;
@end

