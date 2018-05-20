/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCLazy : NSObject {

	id _target;
	/*^block*/id _initializationBlock;
	BOOL _isAutoCreation;
	BOOL _targetCreated;

}

@property (nonatomic,readonly) BOOL isCreated; 
+(id)automaticCreationWithInitializationBlock:(/*^block*/id)arg1 ;
+(id)manualCreationWithInitializationBlock:(/*^block*/id)arg1 ;
-(id)initWithInitializationBlock:(/*^block*/id)arg1 isAutoCreation:(BOOL)arg2 ;
-(void)createNow;
-(BOOL)isCreated;
-(id)target;
@end

