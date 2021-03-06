/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SCObserveObjectHandler : NSObject {

	Class _objectClass;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _changeHandler;

}

@property (nonatomic,readonly) Class objectClass;                               //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id changeHandler;                           //@synthesize changeHandler=_changeHandler - In the implementation block
-(id)initWithObjectClass:(Class)arg1 queue:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(void)perform:(id)arg1 changedKeys:(id)arg2 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(Class)objectClass;
-(id)changeHandler;
@end

