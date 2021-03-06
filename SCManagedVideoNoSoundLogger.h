/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSError, NSString;

@interface SCManagedVideoNoSoundLogger : NSObject {

	BOOL _isAudioSessionDeactivated;
	int _lenseResumeCount;
	BOOL _retryAudioQueueSuccess;
	BOOL _retryAudioQueueSuccessSetDataSource;
	BOOL _lenseActiveWhileRecording;
	BOOL _audioQueueStarted;
	NSError* _audioSessionError;
	NSError* _audioQueueError;
	NSError* _assetWriterError;
	NSString* _brokenMicCodeType;
	NSString* _activeLensId;
	SCD_Struct_LS191 _firstWrittenAudioBufferDelay;

}

@property (nonatomic,retain) NSError * audioSessionError;                                //@synthesize audioSessionError=_audioSessionError - In the implementation block
@property (nonatomic,retain) NSError * audioQueueError;                                  //@synthesize audioQueueError=_audioQueueError - In the implementation block
@property (nonatomic,retain) NSError * assetWriterError;                                 //@synthesize assetWriterError=_assetWriterError - In the implementation block
@property (assign,nonatomic) BOOL retryAudioQueueSuccess;                                //@synthesize retryAudioQueueSuccess=_retryAudioQueueSuccess - In the implementation block
@property (assign,nonatomic) BOOL retryAudioQueueSuccessSetDataSource;                   //@synthesize retryAudioQueueSuccessSetDataSource=_retryAudioQueueSuccessSetDataSource - In the implementation block
@property (nonatomic,retain) NSString * brokenMicCodeType;                               //@synthesize brokenMicCodeType=_brokenMicCodeType - In the implementation block
@property (assign,nonatomic) BOOL lenseActiveWhileRecording;                             //@synthesize lenseActiveWhileRecording=_lenseActiveWhileRecording - In the implementation block
@property (nonatomic,retain) NSString * activeLensId;                                    //@synthesize activeLensId=_activeLensId - In the implementation block
@property (assign,nonatomic) SCD_Struct_LS191 firstWrittenAudioBufferDelay;              //@synthesize firstWrittenAudioBufferDelay=_firstWrittenAudioBufferDelay - In the implementation block
@property (assign,nonatomic) BOOL audioQueueStarted;                                     //@synthesize audioQueueStarted=_audioQueueStarted - In the implementation block
+(void)logAudioSessionCategoryHaveBeenFixed;
+(void)logAudioSessionBrokenMicHaveBeenFixed:(id)arg1 ;
+(void)logVideoNoSoundHaveBeenFixedIfNeeded;
+(void)increaseNoSoundCount;
+(unsigned long long)noSoundCount;
+(id)appSessionIdForNoSound;
+(void)startCountingVideoNoSoundHaveBeenFixed;
-(void)_audioSessionWillDeactivate;
-(SCD_Struct_LS191)firstWrittenAudioBufferDelay;
-(BOOL)audioQueueStarted;
-(NSString *)activeLensId;
-(void)setFirstWrittenAudioBufferDelay:(SCD_Struct_LS191)arg1 ;
-(void)_audioSessionDidActivate;
-(BOOL)lenseActiveWhileRecording;
-(void)checkVideoFileAndLogIfNeeded:(id)arg1 ;
-(void)managedLensesProcessorDidCallResumeAllSounds;
-(NSError *)audioSessionError;
-(void)setAudioSessionError:(NSError *)arg1 ;
-(NSError *)audioQueueError;
-(void)setAudioQueueError:(NSError *)arg1 ;
-(NSError *)assetWriterError;
-(void)setAssetWriterError:(NSError *)arg1 ;
-(BOOL)retryAudioQueueSuccess;
-(void)setRetryAudioQueueSuccess:(BOOL)arg1 ;
-(BOOL)retryAudioQueueSuccessSetDataSource;
-(void)setRetryAudioQueueSuccessSetDataSource:(BOOL)arg1 ;
-(NSString *)brokenMicCodeType;
-(void)setBrokenMicCodeType:(NSString *)arg1 ;
-(void)setLenseActiveWhileRecording:(BOOL)arg1 ;
-(void)setActiveLensId:(NSString *)arg1 ;
-(void)setAudioQueueStarted:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)resetAll;
@end

