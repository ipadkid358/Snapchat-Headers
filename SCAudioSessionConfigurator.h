/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming, OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject;

@interface SCAudioSessionConfigurator : NSObject {

	NSString* _label;
	/*^block*/id _requestBlock;
	NSMutableArray* _requestCompletions;
	NSMutableArray* _releaseCompletions;
	NSString* _audioSessionToken;
	BOOL _requesting;
	BOOL _releasing;
	id<SCPerforming> _performer;
	NSObject*<OS_dispatch_queue> _completionQueue;

}
-(id)initWithLabel:(id)arg1 completionQueue:(id)arg2 requestBlock:(/*^block*/id)arg3 ;
-(id)initWithLabel:(id)arg1 requestBlock:(/*^block*/id)arg2 ;
-(void)setupWithCompletion:(/*^block*/id)arg1 ;
-(void)teardownWithCompletion:(/*^block*/id)arg1 ;
@end
