/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionDataTask.h>

@class SCRequest;

@interface SCMapboxURLSessionDataTask : NSURLSessionDataTask {

	SCRequest* _request;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)initWithSCRequest:(id)arg1 ;
-(void)cancel;
-(long long)state;
-(void)suspend;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)resume;
@end
