/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SOJUAdTargeting, SCSnapAdsAdResponse, NSString;

@interface SCSnapAdsSnapAdsAdResponse : NSObject {

	long long _trackSequenceNumber;
	long long _attemptSequenceNumber;
	SOJUAdTargeting* _requestTargeting;
	SCSnapAdsAdResponse* _adResponse;
	NSString* _requestId;
	NSString* _rawUserData;
	NSString* _rawAdData;
	NSString* _trackUrl;
	NSString* _trackAndGetUrl;

}

@property (nonatomic,readonly) SOJUAdTargeting * requestTargeting;              //@synthesize requestTargeting=_requestTargeting - In the implementation block
@property (nonatomic,readonly) SCSnapAdsAdResponse * adResponse;                //@synthesize adResponse=_adResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestId;                       //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) NSString * rawUserData;                     //@synthesize rawUserData=_rawUserData - In the implementation block
@property (nonatomic,copy,readonly) NSString * rawAdData;                       //@synthesize rawAdData=_rawAdData - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackUrl;                        //@synthesize trackUrl=_trackUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackAndGetUrl;                  //@synthesize trackAndGetUrl=_trackAndGetUrl - In the implementation block
-(NSString *)rawUserData;
-(NSString *)rawAdData;
-(NSString *)trackUrl;
-(NSString *)trackAndGetUrl;
-(SCSnapAdsAdResponse *)adResponse;
-(id)initWithRequestId:(id)arg1 rawUserData:(id)arg2 rawAdData:(id)arg3 trackUrl:(id)arg4 trackAndGetUrl:(id)arg5 adResponse:(id)arg6 requestTargeting:(id)arg7 ;
-(SOJUAdTargeting *)requestTargeting;
-(long long)getAndIncrementAttemptSequenceNumber;
-(long long)getAndIncrementTrackSequenceNumber;
-(NSString *)requestId;
@end
