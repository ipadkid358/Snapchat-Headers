/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition;

@interface SCLagunaDeviceManagerIdleWatch : NSObject {

	BOOL _isIdle;
	NSCondition* _condition;

}

@property (nonatomic,retain) NSCondition * condition;              //@synthesize condition=_condition - In the implementation block
-(void)awaitIsIdle;
-(id)init;
-(NSCondition *)condition;
-(void)setCondition:(NSCondition *)arg1 ;
-(void)setIsIdle:(BOOL)arg1 ;
@end

