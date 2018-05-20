/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsBaseEvent.h>

@protocol SCAdSource;
@class SCSnapAdsIdentifier, SCSnapAdsAdResponse, NSString, NSArray;

@interface SCSnapAdsAdResolvedEvent : SCSnapAdsBaseEvent {

	BOOL _isError;
	SCSnapAdsIdentifier* _adIdentifier;
	SCSnapAdsAdResponse* _adResponse;
	NSString* _serverRequestId;
	NSArray* _impressionTrackingUrls;
	NSArray* _clickTrackingUrls;
	id<SCAdSource> _adSource;

}

@property (nonatomic,retain) SCSnapAdsIdentifier * adIdentifier;              //@synthesize adIdentifier=_adIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isError;                                    //@synthesize isError=_isError - In the implementation block
@property (nonatomic,retain) SCSnapAdsAdResponse * adResponse;                //@synthesize adResponse=_adResponse - In the implementation block
@property (nonatomic,retain) NSString * serverRequestId;                      //@synthesize serverRequestId=_serverRequestId - In the implementation block
@property (nonatomic,retain) NSArray * impressionTrackingUrls;                //@synthesize impressionTrackingUrls=_impressionTrackingUrls - In the implementation block
@property (nonatomic,retain) NSArray * clickTrackingUrls;                     //@synthesize clickTrackingUrls=_clickTrackingUrls - In the implementation block
@property (nonatomic,retain) id<SCAdSource> adSource;                         //@synthesize adSource=_adSource - In the implementation block
-(SCSnapAdsIdentifier *)adIdentifier;
-(void)setAdIdentifier:(SCSnapAdsIdentifier *)arg1 ;
-(SCSnapAdsAdResponse *)adResponse;
-(void)setAdResponse:(SCSnapAdsAdResponse *)arg1 ;
-(void)setIsError:(BOOL)arg1 ;
-(NSString *)serverRequestId;
-(void)setServerRequestId:(NSString *)arg1 ;
-(NSArray *)impressionTrackingUrls;
-(void)setImpressionTrackingUrls:(NSArray *)arg1 ;
-(NSArray *)clickTrackingUrls;
-(void)setClickTrackingUrls:(NSArray *)arg1 ;
-(id<SCAdSource>)adSource;
-(void)setAdSource:(id<SCAdSource>)arg1 ;
-(BOOL)isError;
@end

