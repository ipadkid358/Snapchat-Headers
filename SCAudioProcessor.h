/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCAudioProcessorProcessingWrapper;
#import <Snapchat/Snapchat-Structs.h>
@class AVAudioMix, SCAudioProcessWavFileMixer, NSString, AVAssetTrack;

@interface SCAudioProcessor : NSObject {

	AVAudioMix* _audioMix;
	SCAudioProcessorTapContext* _tapContext;
	int _usageType;
	id<SCAudioProcessorProcessingWrapper> _processingWrapper;
	SCAudioProcessWavFileMixer* _wavFileMixer;
	NSString* _backgroundAudioFilePath;
	AVAssetTrack* _audioAssetTrack;

}

@property (nonatomic,readonly) AVAssetTrack * audioAssetTrack;              //@synthesize audioAssetTrack=_audioAssetTrack - In the implementation block
@property (nonatomic,readonly) AVAudioMix * audioMix; 
-(AVAssetTrack *)audioAssetTrack;
-(void)setParametersWithAudioFilterStyleId:(id)arg1 ;
-(id)initWithAudioAssetTrack:(id)arg1 processingWrapper:(id)arg2 usageType:(int)arg3 ;
-(void)setBackgroundAudioFilePath:(id)arg1 ;
-(AVAudioMix *)audioMix;
@end
