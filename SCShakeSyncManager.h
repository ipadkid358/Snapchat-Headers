/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class SCShakeTicketTable, SCShakeUploadThrottleController, SCShakeTicket, NSString, SCSnapAirConfiguration;

@interface SCShakeSyncManager : NSObject {

	id<SCPerforming> _performer;
	SCShakeTicketTable* _mShakeTicketTable;
	SCShakeUploadThrottleController* _mThrottleController;
	BOOL _mIsCanceled;
	SCShakeTicket* _mCurrentTicket;
	long long _mCurrentState;
	NSString* _mLastBackoffTicketId;
	SCSnapAirConfiguration* _mConfiguration;

}

@property (retain) SCShakeTicket * mCurrentTicket;                       //@synthesize mCurrentTicket=_mCurrentTicket - In the implementation block
@property (assign) long long mCurrentState;                              //@synthesize mCurrentState=_mCurrentState - In the implementation block
@property (retain) NSString * mLastBackoffTicketId;                      //@synthesize mLastBackoffTicketId=_mLastBackoffTicketId - In the implementation block
@property (assign) BOOL mIsCanceled;                                     //@synthesize mIsCanceled=_mIsCanceled - In the implementation block
@property (retain) SCSnapAirConfiguration * mConfiguration;              //@synthesize mConfiguration=_mConfiguration - In the implementation block
+(void)deleteInstance;
+(id)sharedInstance;
-(void)setMIsCanceled:(BOOL)arg1 ;
-(void)setMConfiguration:(SCSnapAirConfiguration *)arg1 ;
-(BOOL)_isIdleState;
-(void)setMCurrentTicket:(SCShakeTicket *)arg1 ;
-(void)setMCurrentState:(long long)arg1 ;
-(void)setMLastBackoffTicketId:(NSString *)arg1 ;
-(long long)mCurrentState;
-(void)_transitionToState:(long long)arg1 backOffDelayMillis:(long long)arg2 ;
-(void)_transitionToStateRunner:(long long)arg1 wasBackedOff:(BOOL)arg2 ;
-(BOOL)mIsCanceled;
-(void)_checkNextTicketInternal;
-(void)_executePendingTicketInternal;
-(void)_cleanLogFilesInternal;
-(SCShakeTicket *)mCurrentTicket;
-(long long)_getBackupOffTime:(id)arg1 ;
-(SCSnapAirConfiguration *)mConfiguration;
-(void)_completeUploadTicket:(id)arg1 isUploadSucceed:(BOOL)arg2 ;
-(void)processNewTicketForConfiguration:(id)arg1 ;
-(NSString *)mLastBackoffTicketId;
-(id)init;
-(void)_transitionToState:(long long)arg1 ;
@end

