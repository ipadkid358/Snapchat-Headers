/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsBaseEvent.h>

@class SCSnapAdsIdentifier, NSArray, NSString;

@interface SCCheetahPromotedStoriesAdTrackEvent : SCSnapAdsBaseEvent {

	SCSnapAdsIdentifier* _adIdentifier;
	NSArray* _trackedUrls;
	NSString* _sessionId;

}

@property (nonatomic,retain) SCSnapAdsIdentifier * adIdentifier;              //@synthesize adIdentifier=_adIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * trackedUrls;                           //@synthesize trackedUrls=_trackedUrls - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                              //@synthesize sessionId=_sessionId - In the implementation block
-(SCSnapAdsIdentifier *)adIdentifier;
-(void)setAdIdentifier:(SCSnapAdsIdentifier *)arg1 ;
-(void)setTrackedUrls:(NSArray *)arg1 ;
-(NSArray *)trackedUrls;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
@end

