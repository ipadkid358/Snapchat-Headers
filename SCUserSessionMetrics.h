/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCUserSessionMetrics : NSObject {

	int _snapsViewedInSession;
	int _snapsSentInSession;
	int _snapEngagementInSession;

}

@property (assign) int snapsViewedInSession;                 //@synthesize snapsViewedInSession=_snapsViewedInSession - In the implementation block
@property (assign) int snapsSentInSession;                   //@synthesize snapsSentInSession=_snapsSentInSession - In the implementation block
@property (assign) int snapEngagementInSession;              //@synthesize snapEngagementInSession=_snapEngagementInSession - In the implementation block
+(id)sharedInstance;
-(void)snapSent;
-(void)snapViewed;
-(void)logAndClearMetrics;
-(int)snapsViewedInSession;
-(void)setSnapsViewedInSession:(int)arg1 ;
-(int)snapsSentInSession;
-(void)setSnapsSentInSession:(int)arg1 ;
-(int)snapEngagementInSession;
-(void)setSnapEngagementInSession:(int)arg1 ;
-(id)init;
-(void)clear;
@end
