/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BCOV_RACSubject, BCOV_RACSignal, BCOV_RACSerialDisposable;

@interface BCOV_RACMulticastConnection : NSObject {

	BCOV_RACSubject* _signal;
	int _hasConnected;
	BCOV_RACSignal* _sourceSignal;
	BCOV_RACSerialDisposable* _serialDisposable;

}

@property (nonatomic,readonly) BCOV_RACSignal * sourceSignal;                //@synthesize sourceSignal=_sourceSignal - In the implementation block
@property (retain) BCOV_RACSerialDisposable * serialDisposable;              //@synthesize serialDisposable=_serialDisposable - In the implementation block
@property (nonatomic,readonly) BCOV_RACSignal * signal;                      //@synthesize signal=_signal - In the implementation block
-(id)autoconnect;
-(BCOV_RACSerialDisposable *)serialDisposable;
-(BCOV_RACSignal *)sourceSignal;
-(id)initWithSourceSignal:(id)arg1 subject:(id)arg2 ;
-(void)setSerialDisposable:(BCOV_RACSerialDisposable *)arg1 ;
-(id)connect;
-(BCOV_RACSignal *)signal;
@end

