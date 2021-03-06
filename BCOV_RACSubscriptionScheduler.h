/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/BCOV_RACScheduler.h>

@class BCOV_RACScheduler;

@interface BCOV_RACSubscriptionScheduler : BCOV_RACScheduler {

	BCOV_RACScheduler* _backgroundScheduler;

}

@property (nonatomic,readonly) BCOV_RACScheduler * backgroundScheduler;              //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
-(id)schedule:(/*^block*/id)arg1 ;
-(id)after:(id)arg1 schedule:(/*^block*/id)arg2 ;
-(id)after:(id)arg1 repeatingEvery:(double)arg2 withLeeway:(double)arg3 schedule:(/*^block*/id)arg4 ;
-(id)init;
-(BCOV_RACScheduler *)backgroundScheduler;
@end

