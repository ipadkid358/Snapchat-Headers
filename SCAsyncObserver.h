/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCObserver.h>

@protocol SCObserver;
@class SCObservable, NSOperationQueue;

@interface SCAsyncObserver : NSObject <SCObserver> {

	SCObservable* _observable;
	id<SCObserver> _observer;
	NSOperationQueue* _queue;

}
-(id)initWithObservable:(id)arg1 observer:(id)arg2 queue:(id)arg3 ;
-(void)complete;
-(void)next:(id)arg1 ;
@end

