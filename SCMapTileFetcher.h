/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCXTileFetcher.h>

@class SCMapService, NSString;

@interface SCMapTileFetcher : NSObject <SCXTileFetcher> {

	SCMapService* _mapService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)rpcGetLatestTileSet:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)rpcGetMapTiles:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)rpcGetMapTilesMetadata:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)initWithMapService:(id)arg1 ;
@end
