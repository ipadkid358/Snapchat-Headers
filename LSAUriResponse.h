/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSData;

@interface LSAUriResponse : NSObject {

	NSURL* _uri;
	long long _responseCode;
	NSString* _responseDescription;
	NSData* _data;

}

@property (nonatomic,readonly) NSURL * uri;                                 //@synthesize uri=_uri - In the implementation block
@property (nonatomic,readonly) long long responseCode;                      //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,readonly) NSString * responseDescription;              //@synthesize responseDescription=_responseDescription - In the implementation block
@property (nonatomic,readonly) NSData * data;                               //@synthesize data=_data - In the implementation block
-(id)initWithUri:(id)arg1 code:(long long)arg2 description:(id)arg3 data:(id)arg4 ;
-(NSData *)data;
-(NSString *)responseDescription;
-(long long)responseCode;
-(NSURL *)uri;
@end

