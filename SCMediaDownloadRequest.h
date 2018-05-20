/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCanceling.h>
#import <Snapchat/SCProgressReporting.h>

@protocol SCMediaDownloadLogger, OS_dispatch_queue, SCProgressReceiving;
@class NSObject, SCSentinel, SCMediaDownloadRequestGroup, NSString;

@interface SCMediaDownloadRequest : NSObject <SCCanceling, SCProgressReporting> {

	id<SCMediaDownloadLogger> _logger;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completionHandler;
	SCSentinel* _sentinel;
	id<SCProgressReceiving> _progressReceiver;
	SCD_Struct_SC329 _mediaScenePath;
	SCMediaDownloadRequestGroup* _requestGroup;

}

@property (nonatomic,readonly) SCD_Struct_SC329 mediaScenePath;                              //@synthesize mediaScenePath=_mediaScenePath - In the implementation block
@property (assign,nonatomic,__weak) SCMediaDownloadRequestGroup * requestGroup;              //@synthesize requestGroup=_requestGroup - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCProgressReceiving> progressReceiver;                //@synthesize progressReceiver=_progressReceiver - In the implementation block
-(id<SCProgressReceiving>)progressReceiver;
-(void)setProgressReceiver:(id<SCProgressReceiving>)arg1 ;
-(SCMediaDownloadRequestGroup *)requestGroup;
-(void)setRequestGroup:(SCMediaDownloadRequestGroup *)arg1 ;
-(id)initWithScenePath:(SCD_Struct_SC329)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performWithStatus:(unsigned long long)arg1 data:(id)arg2 error:(id)arg3 ;
-(SCD_Struct_SC329)mediaScenePath;
-(void)cancel;
-(BOOL)isCancelled;
@end
