/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCXRenderLockManagerDelegate;
@class NSHashTable;

@interface SCXRenderLockManager : NSObject {

	NSHashTable* _locks;
	id<SCXRenderLockManagerDelegate> _delegate;
	long long _effectiveLockType;

}

@property (assign,nonatomic,__weak) id<SCXRenderLockManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long effectiveLockType;                                 //@synthesize effectiveLockType=_effectiveLockType - In the implementation block
-(long long)effectiveLockType;
-(void)_updateEffectiveLockType;
-(id)acquireLockWithType:(long long)arg1 ;
-(void)releaseLock:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SCXRenderLockManagerDelegate>)arg1 ;
-(id<SCXRenderLockManagerDelegate>)delegate;
@end

