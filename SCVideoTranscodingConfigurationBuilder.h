/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface SCVideoTranscodingConfigurationBuilder : NSObject {

	BOOL _muteAudio;
	BOOL _enableStreaming;
	BOOL _enableQualityScoreCalculation;
	CGSize _videoSize;
	double _videoBitrate;
	double _audioBitrate;
	unsigned long long _keyFrameInterval;
	unsigned long long _maxFrameRate;
	unsigned long long _codecType;

}
+(id)withVideoTranscodingConfiguration:(id)arg1 ;
-(id)setMuteAudio:(BOOL)arg1 ;
-(id)setEnableStreaming:(BOOL)arg1 ;
-(id)setEnableQualityScoreCalculation:(BOOL)arg1 ;
-(id)setVideoBitrate:(double)arg1 ;
-(id)setAudioBitrate:(double)arg1 ;
-(id)setMaxFrameRate:(unsigned long long)arg1 ;
-(id)build;
-(id)setVideoSize:(CGSize)arg1 ;
-(id)setKeyFrameInterval:(unsigned long long)arg1 ;
-(id)setCodecType:(unsigned long long)arg1 ;
@end
