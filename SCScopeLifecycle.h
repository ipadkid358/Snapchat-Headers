/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, SCAvailableScope, SCScopeLifecycleCoordinators, SCScopeLifecycleSubLifecycles, SCScopeCleanup, SCScopeContainer;

@interface SCScopeLifecycle : NSObject {

	NSOperationQueue* _operationQueue;
	SCAvailableScope* _availableScope;
	SCScopeLifecycleCoordinators* _coordinators;
	SCScopeLifecycleSubLifecycles* _subLifecycles;
	SCScopeCleanup* _cleanup;
	SCScopeContainer* _rootScopeContainer;

}

@property (nonatomic,readonly) SCScopeContainer * rootScopeContainer;              //@synthesize rootScopeContainer=_rootScopeContainer - In the implementation block
-(id)debugRepresentation;
-(void)setRootScope:(id)arg1 ;
-(id)initWithOperationQueue:(id)arg1 availableScope:(id)arg2 coordinators:(id)arg3 subLifecycles:(id)arg4 ;
-(void)initializeScopeContainers;
-(SCScopeContainer *)rootScopeContainer;
-(void)cleanScopeContainers;
-(id)initWithOperationQueue:(id)arg1 availableScope:(id)arg2 ;
-(id)end;
-(void)begin;
@end

