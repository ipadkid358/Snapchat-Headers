/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/LSAVideoPlayerProtocol.h>

@class NSString, AVPlayerLooper, AVPlayer, NSURL;

@interface LSAVideoPlayer : NSObject <LSAVideoPlayerProtocol> {

	BOOL _statusReady;
	BOOL _shouldLoop;
	float _persistentRate;
	long long _numberOfFrames;
	long long _nativeFrameRate;
	AVPlayerLooper* _looper;
	AVPlayer* _player;
	NSURL* _url;
	long long _loopCount;
	SCD_Struct_LS191 _duration;
	CGAffineTransform _preferredTransform;

}

@property (nonatomic,retain) AVPlayerLooper * looper;                           //@synthesize looper=_looper - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                 //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) SCD_Struct_LS191 duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float persistentRate;                              //@synthesize persistentRate=_persistentRate - In the implementation block
@property (assign,nonatomic) BOOL statusReady;                                  //@synthesize statusReady=_statusReady - In the implementation block
@property (nonatomic,retain) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) CGAffineTransform preferredTransform;              //@synthesize preferredTransform=_preferredTransform - In the implementation block
@property (assign,nonatomic) long long nativeFrameRate;                         //@synthesize nativeFrameRate=_nativeFrameRate - In the implementation block
@property (assign,nonatomic) long long numberOfFrames;                          //@synthesize numberOfFrames=_numberOfFrames - In the implementation block
@property (assign,nonatomic) BOOL shouldLoop;                                   //@synthesize shouldLoop=_shouldLoop - In the implementation block
@property (assign,nonatomic) long long loopCount;                               //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) BOOL isPaused; 
@property (assign,nonatomic) float playbackRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isReady; 
@property (nonatomic,readonly) int playCount; 
@property (assign,nonatomic) double volume; 
@property (nonatomic,readonly) NSString * filepath; 
-(void)playedToEnd:(id)arg1 ;
-(void)createLooperAndQueuePlayer;
-(void)createRegularPlayer;
-(void)setNativeFrameRate:(long long)arg1 ;
-(long long)nativeFrameRate;
-(void)setNumberOfFrames:(long long)arg1 ;
-(void)destroyLooperAndQueuePlayer;
-(void)destroyRegularPlayer;
-(void)prepareWithRate:(float)arg1 loop:(BOOL)arg2 ;
-(CVBufferRef)copyNextFrame;
-(SCD_Struct_LS191)_endTime;
-(CGSize)renderingResolutionForPixelBuffer:(CVBufferRef)arg1 ;
-(AVPlayerLooper *)looper;
-(void)setLooper:(AVPlayerLooper *)arg1 ;
-(float)persistentRate;
-(void)setPersistentRate:(float)arg1 ;
-(BOOL)statusReady;
-(void)setStatusReady:(BOOL)arg1 ;
-(void)setLoopCount:(long long)arg1 ;
-(void)dealloc;
-(SCD_Struct_LS191)duration;
-(NSURL *)url;
-(void)setDuration:(SCD_Struct_LS191)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)resume;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(BOOL)isPaused;
-(long long)loopCount;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(int)playCount;
-(NSString *)filepath;
-(id)createOutput;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(SCD_Struct_LS191)_startTime;
-(BOOL)shouldLoop;
-(void)setShouldLoop:(BOOL)arg1 ;
-(CGAffineTransform)preferredTransform;
-(long long)numberOfFrames;
-(BOOL)isReady;
@end

