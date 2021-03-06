/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCUnlockableTrackerBase.h>

@class NSString;

@interface SCUnlockableViewTracker : SCUnlockableTrackerBase {

	BOOL _canFire;
	NSString* _url;

}
+(id)sharedInstance;
-(void)fireSnapAdsTrackForDirectSnapView:(id)arg1 userSession:(id)arg2 ;
-(void)fireSnapAdsTrackForStoryView:(id)arg1 userSession:(id)arg2 ;
-(void)_fireTrackViaSnapAdsClient:(id)arg1 ;
-(void)_trackWithDuration:(id)arg1 mediaDurationSec:(id)arg2 encGeoData:(id)arg3 viewType:(long long)arg4 snapInfo:(id)arg5 userSession:(id)arg6 ;
-(id)init;
@end

