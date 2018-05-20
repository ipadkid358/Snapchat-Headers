/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayer.h>

@protocol SCAudioStitch;
@class NSURL, NSString, SCOperaPage, NSValue;

@interface SCOperaVideoLayer : NSObject <SCOperaLayer> {

	BOOL _controlsEnabled;
	BOOL _audioDisabled;
	BOOL _hasFraming;
	BOOL _loadingIndicatorEnabled;
	BOOL _streaming;
	BOOL _disableSwipeUp;
	BOOL _disableSwipeDown;
	BOOL _subtitlesSupported;
	BOOL _progressViewEnabled;
	BOOL _progressViewV2Enabled;
	BOOL _disableTapLeft;
	unsigned long long _docking;
	unsigned long long _playbackMode;
	NSURL* _url;
	NSURL* _shareableURL;
	NSString* _assetKey;
	unsigned long long _initialRotateDirection;
	double _controlsMinimumDuration;
	double _mediaStartTime;
	SCOperaPage* _page;
	id<SCAudioStitch> _audioStitch;
	double _audioStitchAnimationDuration;
	NSValue* _videoSize;
	NSString* _progressViewText;

}

@property (nonatomic,readonly) unsigned long long docking;                             //@synthesize docking=_docking - In the implementation block
@property (nonatomic,readonly) unsigned long long playbackMode;                        //@synthesize playbackMode=_playbackMode - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSURL * shareableURL;                                   //@synthesize shareableURL=_shareableURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetKey;                               //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,readonly) BOOL controlsEnabled;                                   //@synthesize controlsEnabled=_controlsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL audioDisabled;                                     //@synthesize audioDisabled=_audioDisabled - In the implementation block
@property (nonatomic,readonly) unsigned long long initialRotateDirection;              //@synthesize initialRotateDirection=_initialRotateDirection - In the implementation block
@property (nonatomic,readonly) double controlsMinimumDuration;                         //@synthesize controlsMinimumDuration=_controlsMinimumDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasFraming;                                        //@synthesize hasFraming=_hasFraming - In the implementation block
@property (nonatomic,readonly) double mediaStartTime;                                  //@synthesize mediaStartTime=_mediaStartTime - In the implementation block
@property (assign,nonatomic,__weak) SCOperaPage * page;                                //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) id<SCAudioStitch> audioStitch;                          //@synthesize audioStitch=_audioStitch - In the implementation block
@property (nonatomic,readonly) double audioStitchAnimationDuration;                    //@synthesize audioStitchAnimationDuration=_audioStitchAnimationDuration - In the implementation block
@property (nonatomic,readonly) BOOL loadingIndicatorEnabled;                           //@synthesize loadingIndicatorEnabled=_loadingIndicatorEnabled - In the implementation block
@property (nonatomic,readonly) BOOL streaming;                                         //@synthesize streaming=_streaming - In the implementation block
@property (nonatomic,copy,readonly) NSValue * videoSize;                               //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,readonly) BOOL disableSwipeUp;                                    //@synthesize disableSwipeUp=_disableSwipeUp - In the implementation block
@property (nonatomic,readonly) BOOL disableSwipeDown;                                  //@synthesize disableSwipeDown=_disableSwipeDown - In the implementation block
@property (nonatomic,readonly) BOOL subtitlesSupported;                                //@synthesize subtitlesSupported=_subtitlesSupported - In the implementation block
@property (nonatomic,readonly) BOOL progressViewEnabled;                               //@synthesize progressViewEnabled=_progressViewEnabled - In the implementation block
@property (nonatomic,readonly) BOOL progressViewV2Enabled;                             //@synthesize progressViewV2Enabled=_progressViewV2Enabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * progressViewText;                       //@synthesize progressViewText=_progressViewText - In the implementation block
@property (nonatomic,readonly) BOOL disableTapLeft;                                    //@synthesize disableTapLeft=_disableTapLeft - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithProperties:(id)arg1 page:(id)arg2 ;
-(BOOL)audioDisabled;
-(unsigned long long)docking;
-(id<SCAudioStitch>)audioStitch;
-(id)initWithProperties:(id)arg1 page:(id)arg2 ;
-(unsigned long long)initialRotateDirection;
-(BOOL)hasFraming;
-(BOOL)controlsEnabled;
-(double)controlsMinimumDuration;
-(double)mediaStartTime;
-(BOOL)loadingIndicatorEnabled;
-(BOOL)disableSwipeUp;
-(BOOL)progressViewEnabled;
-(BOOL)disableSwipeDown;
-(NSURL *)shareableURL;
-(BOOL)progressViewV2Enabled;
-(NSString *)progressViewText;
-(double)audioStitchAnimationDuration;
-(BOOL)subtitlesSupported;
-(BOOL)disableTapLeft;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)url;
-(unsigned long long)type;
-(SCOperaPage *)page;
-(void)setPage:(SCOperaPage *)arg1 ;
-(unsigned long long)playbackMode;
-(BOOL)streaming;
-(NSValue *)videoSize;
-(NSString *)assetKey;
@end
