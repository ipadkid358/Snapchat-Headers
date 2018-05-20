/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCCheetahPromotedStoriesAdResponse : NSObject {

	long long _trackSequenceNumber;
	NSString* _currentSessionId;
	NSString* _requestId;
	NSString* _trackUrl;
	NSString* _rawAdData;
	NSString* _rawUserData;

}

@property (nonatomic,copy,readonly) NSString * requestId;                //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackUrl;                 //@synthesize trackUrl=_trackUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * rawAdData;                //@synthesize rawAdData=_rawAdData - In the implementation block
@property (nonatomic,copy,readonly) NSString * rawUserData;              //@synthesize rawUserData=_rawUserData - In the implementation block
-(NSString *)rawUserData;
-(NSString *)rawAdData;
-(NSString *)trackUrl;
-(id)initWithRequestId:(id)arg1 trackUrl:(id)arg2 rawAdData:(id)arg3 rawUesrData:(id)arg4 ;
-(long long)trackSequenceNumberWithSessionId:(id)arg1 ;
-(NSString *)requestId;
@end

