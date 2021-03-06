/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface ADLService : NSObject {

	Handle<std::__1::shared_ptr<addlive::Service>, std::__1::shared_ptr<addlive::Service> >* _cppRefHandle;

}
+(void)androidInit:(void*)arg1 ;
+(void)androidFini;
+(id)sharedInstance;
-(id)initWithCpp:(const shared_ptr<addlive::Service>*)arg1 ;
-(void)injectNativeFrame:(long long)arg1 ;
-(void)initialize:(id)arg1 postToMainThread:(BOOL)arg2 ;
-(void)setApplicationId:(id)arg1 appId:(long long)arg2 ;
-(void)setVideoCaptureDevice:(id)arg1 devId:(id)arg2 ;
-(void)getVideoCaptureDeviceNames:(id)arg1 ;
-(void)setAudioCaptureDevice:(id)arg1 devId:(id)arg2 ;
-(void)getAudioCaptureDeviceNames:(id)arg1 ;
-(void)setAudioOutputDevice:(id)arg1 devId:(id)arg2 ;
-(void)getAudioOutputDeviceNames:(id)arg1 ;
-(void)startLocalVideo:(id)arg1 ;
-(void)connect:(id)arg1 desc:(id)arg2 ;
-(void)disconnect:(id)arg1 scopeId:(id)arg2 timeoutMs:(int)arg3 ;
-(void)publish:(id)arg1 scopeId:(id)arg2 mediaType:(long long)arg3 params:(id)arg4 ;
-(void)unpublish:(id)arg1 scopeId:(id)arg2 mediaType:(long long)arg3 ;
-(void)startMeasuringStatistics:(id)arg1 scopeId:(id)arg2 intervalSec:(int)arg3 ;
-(void)stopMeasuringStatistics:(id)arg1 scopeId:(id)arg2 ;
-(void)monitorSpeechActivity:(id)arg1 scopeId:(id)arg2 enabled:(BOOL)arg3 ;
-(void)restrictMediaReception:(id)arg1 scopeId:(id)arg2 mediaType:(long long)arg3 senders:(id)arg4 ;
-(void)unrestrictMediaReception:(id)arg1 scopeId:(id)arg2 mediaType:(long long)arg3 ;
-(void)sendMessage:(id)arg1 scopeId:(id)arg2 message:(id)arg3 userId:(id)arg4 ;
-(void)startDirectRender:(id)arg1 videoSinkId:(id)arg2 callback:(id)arg3 ;
-(void)stopRender:(id)arg1 rendererId:(int)arg2 ;
-(void)injectImageFrame:(id)arg1 ;
-(void)setExternalVideoService:(id)arg1 ;
-(void)setProperty:(id)arg1 value:(id)arg2 ;
-(void)dispose;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

