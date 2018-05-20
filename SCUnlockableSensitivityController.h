/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface SCUnlockableSensitivityController : NSObject <NSCoding> {

	NSDate* _lastLowSensitivityRequest;
	NSDate* _lastLowSensitivityResponse;

}
-(id)fetchAndUpdateSensitivitySettings;
-(void)markLowSensitivityResponseReceived;
-(id)_dateForTimestamp:(long long)arg1 ;
-(id)_touchTimestamp:(long long)arg1 ;
-(BOOL)_shouldRequestLowSensitivityWithExpiry:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)clear;
@end

