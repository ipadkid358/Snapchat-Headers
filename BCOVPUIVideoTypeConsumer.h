/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/BCOVPlaybackSessionConsumer.h>

@class NSString;

@interface BCOVPUIVideoTypeConsumer : NSObject <BCOVPlaybackSessionConsumer> {

	unsigned long long _videoType;

}

@property (assign,nonatomic) unsigned long long videoType;              //@synthesize videoType=_videoType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)playbackSession:(id)arg1 didReceiveLifecycleEvent:(id)arg2 ;
-(void)configureSignal;
-(void)setVideoType:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)videoType;
@end
