/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/BCOV_RACSignal.h>
#import <Snapchat/BCOV_RACSubscriber.h>

@class NSMutableArray, BCOV_RACCompoundDisposable, NSString;

@interface BCOV_RACSubject : BCOV_RACSignal <BCOV_RACSubscriber> {

	NSMutableArray* _subscribers;
	BCOV_RACCompoundDisposable* _disposable;

}

@property (nonatomic,readonly) NSMutableArray * subscribers;                         //@synthesize subscribers=_subscribers - In the implementation block
@property (nonatomic,readonly) BCOV_RACCompoundDisposable * disposable;              //@synthesize disposable=_disposable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)subject;
-(void)sendCompleted;
-(void)sendNext:(id)arg1 ;
-(void)didSubscribeWithDisposable:(id)arg1 ;
-(void)sendError:(id)arg1 ;
-(BCOV_RACCompoundDisposable *)disposable;
-(void)enumerateSubscribersUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)subscribe:(id)arg1 ;
-(NSMutableArray *)subscribers;
@end

