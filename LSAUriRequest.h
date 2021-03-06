/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSData;

@interface LSAUriRequest : NSObject {

	NSURL* _uri;
	NSString* _identifier;
	NSString* _method;
	NSData* _data;

}

@property (nonatomic,readonly) NSURL * uri;                        //@synthesize uri=_uri - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * method;                  //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
-(id)initWithUri:(id)arg1 requestId:(id)arg2 method:(id)arg3 data:(id)arg4 ;
-(NSString *)identifier;
-(NSData *)data;
-(NSString *)method;
-(NSURL *)uri;
@end

