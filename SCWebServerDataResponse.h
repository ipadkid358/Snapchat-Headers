/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCWebServerResponse.h>

@class NSData;

@interface SCWebServerDataResponse : SCWebServerResponse {

	NSData* _data;
	BOOL _done;

}
+(id)responseWithData:(id)arg1 contentType:(id)arg2 ;
+(id)responseWithText:(id)arg1 ;
+(id)responseWithHTML:(id)arg1 ;
+(id)responseWithHTMLTemplate:(id)arg1 variables:(id)arg2 ;
+(id)responseWithJSONObject:(id)arg1 ;
+(id)responseWithJSONObject:(id)arg1 contentType:(id)arg2 ;
-(id)initWithHTMLTemplate:(id)arg1 variables:(id)arg2 ;
-(id)initWithJSONObject:(id)arg1 contentType:(id)arg2 ;
-(id)description;
-(id)initWithText:(id)arg1 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)readData:(id*)arg1 ;
-(id)initWithHTML:(id)arg1 ;
-(id)initWithJSONObject:(id)arg1 ;
@end
