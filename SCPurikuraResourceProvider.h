/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class SCUserSession, SCQueuePerformer, NSMutableDictionary, SOJUPurikuraMetadataResponse, NSDate, SCCache;

@interface SCPurikuraResourceProvider : NSObject <NSCoding> {

	SCUserSession* _userSession;
	SCQueuePerformer* _performer;
	NSMutableDictionary* _purikuraMetadata;
	SOJUPurikuraMetadataResponse* _sojuResponseInUse;
	NSDate* _lastCheckTimestamp;
	SCCache* _cache;
	BOOL _forceUseExistingMetadata;
	long long _selectedIndex;
	long long _deviceMode;

}
-(id)purikuraMetadata;
-(id)initWithUserSession:(id)arg1 ;
-(void)_updateLastCheckTimestamp;
-(void)_fetchImageWithURLString:(id)arg1 key:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(void)purikuraResourceForId:(id)arg1 urlString:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(void)setPurikuraMetadataFromSOJUResponse:(id)arg1 selectedId:(id)arg2 ;
-(void)_fetchPurikuraResourceFromLocalAndServer:(/*^block*/id)arg1 ;
-(void)_checkPurikuraMetadataAndUpdatePatternsIfNeeded:(/*^block*/id)arg1 ;
-(BOOL)_isPurikuraPatternsTTLExpired;
-(void)_setSOJUResponseInUse:(id)arg1 ;
-(void)_fetchSingleRandomPurikuraPatternFromLocalAndServer:(/*^block*/id)arg1 ;
-(void)_fetchPurikuraMetadata:(id)arg1 completeBlock:(/*^block*/id)arg2 ;
-(id)_deviceImageForImageData:(id)arg1 ;
-(id)_purikuraImageFromImage:(id)arg1 uuid:(id)arg2 urlString:(id)arg3 ;
-(void)_fetchSinglePurikuraPattern:(id)arg1 URLString:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)_thumbnailForImageData:(id)arg1 inRect:(CGRect)arg2 ;
-(void)fetchPurikuraResource:(/*^block*/id)arg1 ;
-(void)fetchSingleRandomPurikuraResource:(/*^block*/id)arg1 ;
-(void)fetchImageForThumbnail:(id)arg1 completeQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)selectedIndex;
-(void)clearMemoryCache;
-(void)_cacheImage:(id)arg1 forKey:(id)arg2 ;
@end
