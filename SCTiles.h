/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCStoriesModelUpdateListener.h>
#import <Snapchat/SCMediaOwnerProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Snapchat/SCTimeProfilable.h>

@class FBKVOController, SCCache, NSArray, SCTilesListenerAnnouncer, NSString;

@interface SCTiles : NSObject <SCStoriesModelUpdateListener, SCMediaOwnerProtocol, NSCoding, SCTimeProfilable> {

	FBKVOController* _kvoController;
	SCCache* _cache;
	NSArray* _allTiles;
	SCTilesListenerAnnouncer* _eventAnnouncer;

}

@property (nonatomic,copy) NSArray * allTiles;                                       //@synthesize allTiles=_allTiles - In the implementation block
@property (nonatomic,retain) SCTilesListenerAnnouncer * eventAnnouncer;              //@synthesize eventAnnouncer=_eventAnnouncer - In the implementation block
@property (nonatomic,retain) SCCache * cache;                                        //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tileWithTileId:(id)arg1 tiles:(id)arg2 ;
+(id)discoverChannelForTileId:(id)arg1 ;
+(id)friendStoriesForTileId:(id)arg1 ;
+(int)context;
-(void)didDecodeObject;
-(SCTilesListenerAnnouncer *)eventAnnouncer;
-(void)setEventAnnouncer:(SCTilesListenerAnnouncer *)arg1 ;
-(id)cacheMediaIds;
-(void)storiesModelDidUpdateWithParams:(id)arg1 ;
-(void)ensureNonNilObjects;
-(void)removeExpiredMedia;
-(NSArray *)allTiles;
-(id)tileForDiscoverChannel:(id)arg1 ;
-(id)tileIdToTileMap;
-(void)setAllTiles:(NSArray *)arg1 ;
-(void)refreshTilesFromTilesUpdateOnly:(BOOL)arg1 ;
-(void)_refreshTilesFromChannelsUpdate;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(SCCache *)cache;
-(void)setCache:(SCCache *)arg1 ;
@end

