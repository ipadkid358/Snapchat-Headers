/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSArray;

@interface SCAudioNoteWaveformAnimation : NSObject {

	NSArray* _waveformAnimationFrames;

}
+(id)generateAnimationDataWithLinearPCMData:(id)arg1 sampleRate:(double)arg2 ;
+(id)waveformAnimationWithAnimationData:(id)arg1 ;
+(id)waveformAnimationFramesWithAnimationData:(id)arg1 ;
-(id)initWithAnimationFrames:(id)arg1 ;
-(SCAudioNoteWaveformAnimationFrame)animationFrameForTime:(double)arg1 ;
-(double)duration;
@end

