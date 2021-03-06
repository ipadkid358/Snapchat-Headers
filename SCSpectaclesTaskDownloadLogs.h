/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSpectaclesTask.h>

@class NSArray, NSMutableData, SCWeakTimer;

@interface SCSpectaclesTaskDownloadLogs : SCSpectaclesTask {

	BOOL _finished;
	BOOL _didTimeOut;
	NSArray* _logFileList;
	long long _currentLogIndex;
	NSMutableData* _partialLog;
	/*^block*/id _callback;
	SCWeakTimer* _weakTimer;

}

@property (nonatomic,retain) NSArray * logFileList;                        //@synthesize logFileList=_logFileList - In the implementation block
@property (assign,nonatomic) long long currentLogIndex;                    //@synthesize currentLogIndex=_currentLogIndex - In the implementation block
@property (nonatomic,retain) NSMutableData * partialLog;                   //@synthesize partialLog=_partialLog - In the implementation block
@property (nonatomic,copy) id callback;                                    //@synthesize callback=_callback - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;              //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL didTimeOut;                              //@synthesize didTimeOut=_didTimeOut - In the implementation block
@property (nonatomic,retain) SCWeakTimer * weakTimer;                      //@synthesize weakTimer=_weakTimer - In the implementation block
-(id)nextRequest:(long long)arg1 ;
-(void)_resetWeakTimer;
-(void)_markFinished;
-(void)_handleCallbackWithLogs:(id)arg1 ;
-(id)logListRequest;
-(NSMutableData *)partialLog;
-(id)getLogRequestFilename:(id)arg1 range:(NSRange)arg2 ;
-(NSArray *)logFileList;
-(void)_clearDirectory;
-(void)_appendLogData:(id)arg1 forLog:(id)arg2 ;
-(void)setPartialLog:(NSMutableData *)arg1 ;
-(id)_filepathsInLogDirectory;
-(void)handleCallbackAfterDownloadingLogs;
-(void)setLogFileList:(NSArray *)arg1 ;
-(long long)currentLogIndex;
-(void)setCurrentLogIndex:(long long)arg1 ;
-(SCWeakTimer *)weakTimer;
-(void)setWeakTimer:(SCWeakTimer *)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(BOOL)isFinished;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)handleResponse:(id)arg1 ;
-(void)_timedOut;
-(id)cacheDirectory;
-(void)setDidTimeOut:(BOOL)arg1 ;
-(BOOL)didTimeOut;
@end

