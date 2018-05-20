/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCPerforming.h>

@class NSMutableArray, NSString;

@interface SCFakeQueuePerformer : NSObject <SCPerforming> {

	BOOL _performImmediately;
	NSMutableArray* _pendingBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCurrentPerformer;
-(void)perform:(/*^block*/id)arg1 after:(double)arg2 ;
-(void)performWithQoS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)performImmediatelyIfCurrentPerformer:(/*^block*/id)arg1 ;
-(id)initWithPerformImmediately:(BOOL)arg1 ;
-(void)runAllPendingBlocks;
-(void)performAndWait:(/*^block*/id)arg1 ;
-(id)init;
-(void)perform:(/*^block*/id)arg1 ;
-(id)queue;
@end
