/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSHashTable, SCOperaRemoteVideoLayer, SCWebServer;

@interface SCOperaRemoteVideoProxy : NSObject {

	NSString* _authToken;
	NSHashTable* _listeners;
	BOOL _enabled;
	SCOperaRemoteVideoLayer* _layer;
	SCWebServer* _server;

}

@property (nonatomic,retain) SCWebServer * server;                         //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) SCOperaRemoteVideoLayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                 //@synthesize enabled=_enabled - In the implementation block
+(id)shared;
-(long long)cachedTSFileCount;
-(void)setupServer;
-(id)redirectResponseForRequest:(id)arg1 ;
-(id)remoteURLForRequest:(id)arg1 ;
-(id)loopbackedPlaylistString:(id)arg1 ;
-(id)loopbackedURLForURL:(id)arg1 ;
-(void)startLoopbackServer;
-(void)stopLoopbackServer;
-(id)init;
-(SCOperaRemoteVideoLayer *)layer;
-(BOOL)enabled;
-(SCWebServer *)server;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setLayer:(SCOperaRemoteVideoLayer *)arg1 ;
-(id)handleRequest:(id)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(BOOL)serverRunning;
-(void)addListener:(id)arg1 ;
-(void)setServer:(SCWebServer *)arg1 ;
@end
