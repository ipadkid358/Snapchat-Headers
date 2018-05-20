/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCChatViewControllerParentDelegate;
@class SCUserSession, NSMutableArray;

@interface SCChatChildViewControllerFactory : NSObject {

	SCUserSession* _userSession;
	NSMutableArray* _v2VCPool;
	NSMutableArray* _v3VCPool;
	id<SCChatViewControllerParentDelegate> _parentDelegate;

}
-(id)initWithUserSession:(id)arg1 parentDelegate:(id)arg2 ;
-(id)dequeueChatV2ViewController;
-(id)dequeueChatV3ViewController;
-(void)enqueue:(id)arg1 ;
-(void)warmup;
@end
