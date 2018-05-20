/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression, NSString, UILabel;

@interface SCTV3DebugLogsParser : NSObject {

	NSRegularExpression* _areStatsInRightDirectionChecker;
	NSRegularExpression* _checkAudio;
	NSRegularExpression* _bandwidthExtractor;
	NSRegularExpression* _lossExtractor;
	NSRegularExpression* _rttExtractor;
	NSRegularExpression* _fpsExtractor;
	NSRegularExpression* _codecExtractor;
	NSRegularExpression* _p2pExtractor;
	NSRegularExpression* _avOffsetExtractor;
	NSRegularExpression* _cpuExtractor;
	NSString* _prefix;
	UILabel* _output;
	int _audioRate;
	int _videoRate;
	int _audioLoss;
	int _videoLoss;
	int _rtt;
	int _fps;
	int _cpu;
	int _codec;
	int _avOffset;
	BOOL _isP2P;
	BOOL _isUplink;
	BOOL _isVideoEnabled;

}

@property (assign) BOOL isVideoEnabled;              //@synthesize isVideoEnabled=_isVideoEnabled - In the implementation block
-(id)processLogs:(id)arg1 ;
-(id)initWithDirection:(BOOL)arg1 dataOutput:(id)arg2 ;
-(int)_extractValue:(id)arg1 regex:(id)arg2 ;
-(id)_getCodecString;
-(BOOL)isVideoEnabled;
-(void)setIsVideoEnabled:(BOOL)arg1 ;
@end
