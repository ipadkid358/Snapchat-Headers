/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/LSAAudioPlayerProtocol.h>

@class NSArray, LSAScenariumAudioPlayer, LSAAudioPlayer, NSString;

@interface LSAAudioPlayerBridge : NSObject <LSAAudioPlayerProtocol> {

	NSArray* _allPlayers;
	LSAScenariumAudioPlayer* _scenariumAudioPlayer;
	LSAAudioPlayer* _audioPlayer;

}

@property (nonatomic,readonly) LSAScenariumAudioPlayer * scenariumAudioPlayer;              //@synthesize scenariumAudioPlayer=_scenariumAudioPlayer - In the implementation block
@property (nonatomic,readonly) LSAAudioPlayer * audioPlayer;                                //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)muteAllSoundsWithCompletion:(/*^block*/id)arg1 ;
-(void)unmuteAllSoundsWithCompletion:(/*^block*/id)arg1 ;
-(void)suspendAllSoundsWithCompletion:(/*^block*/id)arg1 ;
-(void)resumeAllSoundsWithCompletion:(/*^block*/id)arg1 ;
-(void)_invokeSelectorOnAllPlayers:(SEL)arg1 completion:(/*^block*/id)arg2 ;
-(LSAScenariumAudioPlayer *)scenariumAudioPlayer;
-(id)init;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(LSAAudioPlayer *)audioPlayer;
-(void)deactivateWithCompletion:(/*^block*/id)arg1 ;
@end

