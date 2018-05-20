/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCAudioSession, NSString;

@interface SCAudioSessionConfigurationMaker : NSObject {

	SCAudioSession* _session;
	NSString* _token;

}
-(id)initWithAudioSession:(id)arg1 token:(id)arg2 ;
-(void)requestPlayback;
-(void)releasePlayback;
-(void)requestRecording;
-(void)releaseRecording;
-(void)requestCalling;
-(void)releaseCalling;
-(void)requestCallKit:(BOOL)arg1 ;
-(void)releaseCallKit;
-(void)requestProximityRouting;
-(void)releaseProximityRouting;
-(void)releaseAll;
@end

