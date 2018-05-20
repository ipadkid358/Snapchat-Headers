/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/BCOV_RACDisposable.h>

@class BCOV_RACDisposable;

@interface BCOV_RACSerialDisposable : BCOV_RACDisposable {

	BCOV_RACDisposable* _disposable;
	BOOL _disposed;
	opaque_pthread_mutex_t _mutex;

}

@property (retain) BCOV_RACDisposable * disposable; 
+(id)serialDisposableWithDisposable:(id)arg1 ;
-(id)swapInDisposable:(id)arg1 ;
-(void)setDisposable:(BCOV_RACDisposable *)arg1 ;
-(BOOL)isDisposed;
-(BCOV_RACDisposable *)disposable;
-(id)init;
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)dispose;
@end
