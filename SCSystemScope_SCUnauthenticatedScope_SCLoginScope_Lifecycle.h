/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScopeLifecycle.h>

@class SCSystemScope_SCUnauthenticatedScope_Lifecycle, SCScopeContainer;

@interface SCSystemScope_SCUnauthenticatedScope_SCLoginScope_Lifecycle : SCScopeLifecycle {

	SCSystemScope_SCUnauthenticatedScope_Lifecycle* _parent;
	SCScopeContainer* _loginScopeContainer;

}

@property (assign,nonatomic,__weak) SCSystemScope_SCUnauthenticatedScope_Lifecycle * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) SCScopeContainer * loginScopeContainer;                                    //@synthesize loginScopeContainer=_loginScopeContainer - In the implementation block
-(void)setRootScope:(id)arg1 ;
-(void)initializeScopeContainers;
-(id)rootScopeContainer;
-(void)cleanScopeContainers;
-(SCScopeContainer *)loginScopeContainer;
-(void)begin;
-(SCSystemScope_SCUnauthenticatedScope_Lifecycle *)parent;
-(void)setParent:(SCSystemScope_SCUnauthenticatedScope_Lifecycle *)arg1 ;
@end

