/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCMusicAudioPlayerDelegate;
@class SCMusicTrack, NSData;

@interface SCMusicAudioPlayer : NSObject {

	float _volume;
	id<SCMusicAudioPlayerDelegate> _delegate;
	SCMusicTrack* _currentTrack;
	NSData* _currentAudioData;

}

@property (assign,nonatomic,__weak) id<SCMusicAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCMusicTrack * currentTrack;                                 //@synthesize currentTrack=_currentTrack - In the implementation block
@property (assign,nonatomic) float volume;                                                //@synthesize volume=_volume - In the implementation block
@property (nonatomic,copy,readonly) NSData * currentAudioData;                            //@synthesize currentAudioData=_currentAudioData - In the implementation block
-(id)initWithUserSession:(id)arg1 ;
-(SCMusicTrack *)currentTrack;
-(void)setCurrentTrack:(SCMusicTrack *)arg1 ;
-(NSData *)currentAudioData;
-(void)setDelegate:(id<SCMusicAudioPlayerDelegate>)arg1 ;
-(id<SCMusicAudioPlayerDelegate>)delegate;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)play;
-(void)pause;
@end
