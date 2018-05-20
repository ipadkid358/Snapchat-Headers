/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSnapState.h>
@class NSDictionary, NSString, NSDate;


@protocol SCSnapState <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSDictionary * viewedTimestamps; 
@property (nonatomic,copy,readonly) NSDictionary * screenshotState; 
@property (nonatomic,copy,readonly) NSDictionary * screenCaptureShotState; 
@property (nonatomic,copy,readonly) NSDictionary * screenCaptureRecordingState; 
@property (nonatomic,copy,readonly) NSDictionary * replayState; 
@property (nonatomic,copy,readonly) NSString * stackId; 
@property (nonatomic,readonly) BOOL isFirstSnapInStack; 
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) long long replayAnimationState; 
@property (nonatomic,readonly) BOOL canBeReplayed; 
@property (nonatomic,copy,readonly) NSDate * lastOpenedTimestamp; 
@required
-(NSString *)stackId;
-(NSDate *)lastOpenedTimestamp;
-(BOOL)canBeReplayed;
-(NSDictionary *)screenshotState;
-(NSDictionary *)replayState;
-(NSDictionary *)viewedTimestamps;
-(NSDictionary *)screenCaptureShotState;
-(NSDictionary *)screenCaptureRecordingState;
-(BOOL)isFirstSnapInStack;
-(long long)replayAnimationState;
-(long long)playbackState;

@end


@class NSDictionary, NSString, NSDate;

@interface SCSnapState : NSObject <SCSnapState> {

	BOOL _isFirstSnapInStack;
	BOOL _canBeReplayed;
	NSDictionary* _viewedTimestamps;
	NSDictionary* _screenshotState;
	NSDictionary* _screenCaptureShotState;
	NSDictionary* _screenCaptureRecordingState;
	NSDictionary* _replayState;
	NSString* _stackId;
	long long _playbackState;
	long long _replayAnimationState;
	NSDate* _lastOpenedTimestamp;

}

@property (nonatomic,copy,readonly) NSDictionary * viewedTimestamps;                         //@synthesize viewedTimestamps=_viewedTimestamps - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * screenshotState;                          //@synthesize screenshotState=_screenshotState - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * screenCaptureShotState;                   //@synthesize screenCaptureShotState=_screenCaptureShotState - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * screenCaptureRecordingState;              //@synthesize screenCaptureRecordingState=_screenCaptureRecordingState - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * replayState;                              //@synthesize replayState=_replayState - In the implementation block
@property (nonatomic,copy,readonly) NSString * stackId;                                      //@synthesize stackId=_stackId - In the implementation block
@property (nonatomic,readonly) BOOL isFirstSnapInStack;                                      //@synthesize isFirstSnapInStack=_isFirstSnapInStack - In the implementation block
@property (nonatomic,readonly) long long playbackState;                                      //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) long long replayAnimationState;                               //@synthesize replayAnimationState=_replayAnimationState - In the implementation block
@property (nonatomic,readonly) BOOL canBeReplayed;                                           //@synthesize canBeReplayed=_canBeReplayed - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastOpenedTimestamp;                            //@synthesize lastOpenedTimestamp=_lastOpenedTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)stackId;
-(BOOL)isScreenshotted;
-(BOOL)isReplayed;
-(BOOL)isScreenRecorded;
-(NSDate *)lastOpenedTimestamp;
-(BOOL)canBeReplayed;
-(NSDictionary *)screenshotState;
-(BOOL)isScreenCaptured;
-(NSDictionary *)replayState;
-(NSDictionary *)viewedTimestamps;
-(long long)SOJUSnapStateMessageState;
-(NSDictionary *)screenCaptureShotState;
-(NSDictionary *)screenCaptureRecordingState;
-(id)checkAndCorrectSnapState;
-(BOOL)isFirstSnapInStack;
-(long long)replayAnimationState;
-(id)initWithViewedTimestamps:(id)arg1 screenshotState:(id)arg2 screenCaptureShotState:(id)arg3 screenCaptureRecordingState:(id)arg4 replayState:(id)arg5 stackId:(id)arg6 isFirstSnapInStack:(BOOL)arg7 playbackState:(long long)arg8 replayAnimationState:(long long)arg9 canBeReplayed:(BOOL)arg10 lastOpenedTimestamp:(id)arg11 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)playbackState;
@end

