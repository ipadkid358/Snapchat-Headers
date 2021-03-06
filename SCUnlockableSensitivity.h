/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate, NSString, SCULSyncInfo;

@interface SCUnlockableSensitivity : NSObject {

	NSArray* _purposes;
	NSDate* _lastLowSensitivityResponse;

}

@property (nonatomic,retain) NSArray * purposes;                               //@synthesize purposes=_purposes - In the implementation block
@property (nonatomic,retain) NSDate * lastLowSensitivityResponse;              //@synthesize lastLowSensitivityResponse=_lastLowSensitivityResponse - In the implementation block
@property (nonatomic,readonly) NSString * purposeString; 
@property (nonatomic,readonly) SCULSyncInfo * syncInfo; 
-(NSArray *)purposes;
-(NSDate *)lastLowSensitivityResponse;
-(NSString *)purposeString;
-(SCULSyncInfo *)syncInfo;
-(void)setPurposes:(NSArray *)arg1 ;
-(void)setLastLowSensitivityResponse:(NSDate *)arg1 ;
@end

