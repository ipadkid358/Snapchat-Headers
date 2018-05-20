/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>
#import <Snapchat/LSAAudioPlayerProtocol.h>

@protocol OS_dispatch_semaphore;
@class NSMutableDictionary, LSAQueuePerformer, NSObject, NSString;

@interface LSAAudioPlayer : NSObject <AVAudioPlayerDelegate, LSAAudioPlayerProtocol> {

	NSMutableDictionary* _audioPlayers;
	BOOL _active;
	BOOL _muted;
	BOOL _suspended;
	LSAQueuePerformer* _performer;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)muteAllSoundsWithCompletion:(/*^block*/id)arg1 ;
-(void)unmuteAllSoundsWithCompletion:(/*^block*/id)arg1 ;
-(void)suspendAllSoundsWithCompletion:(/*^block*/id)arg1 ;
-(void)resumeAllSoundsWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopAudioPlayer:(id)arg1 ;
-(BOOL)_isKeyValid:(id)arg1 ;
-(void)_doVolumeFade:(id)arg1 ;
-(void)playAudioWithPath:(id)arg1 numberOfLoops:(long long)arg2 ;
-(void)stopAudioWithPath:(id)arg1 shouldFade:(BOOL)arg2 ;
-(void)setVolume:(float)arg1 forAudioWithPath:(id)arg2 ;
-(BOOL)isPlayingAudioWithPath:(id)arg1 ;
-(id)init;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)deactivateWithCompletion:(/*^block*/id)arg1 ;
@end
