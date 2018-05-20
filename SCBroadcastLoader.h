/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class SOJUBroadcastPrecachingLookaheadPrecache, NSArray, SOJUBroadcastPrecachingPrecache;

@interface SCBroadcastLoader : NSObject <NSCoding> {

	SOJUBroadcastPrecachingLookaheadPrecache* _currentLookahead;
	SOJUBroadcastPrecachingLookaheadPrecache* _defaultLookahead;
	NSArray* _tiles;
	SOJUBroadcastPrecachingPrecache* _soju;

}

@property (nonatomic,retain) SOJUBroadcastPrecachingPrecache * soju;              //@synthesize soju=_soju - In the implementation block
+(int)context;
-(void)autoloadDiscoverChannels;
-(void)loadForChangeInChunksInEdition:(id)arg1 ;
-(void)loadForDiscoverEdition:(id)arg1 currentChunk:(id)arg2 ;
-(id)_stringForContext:(unsigned long long)arg1 ;
-(void)loadForFriendStories:(id)arg1 startAtIndex:(long long)arg2 viewingType:(long long)arg3 ;
-(void)_autoloadForType:(long long)arg1 ;
-(void)_loadForDiscoverItemCountPairs:(id)arg1 ;
-(void)_loadForStoriesItemCountPairs:(id)arg1 ;
-(long long)_countForPrecacheCounts:(id)arg1 ;
-(long long)_countForTypeSpecificConfigs:(id)arg1 type:(long long)arg2 ;
-(void)_loadForFriendStories:(id)arg1 count:(long long)arg2 offset:(long long)arg3 isLookahead:(BOOL)arg4 ;
-(void)_loadForDiscoverEdition:(id)arg1 currentChunk:(id)arg2 ;
-(void)_loadTilesAfterTileWithTileId:(id)arg1 ;
-(void)_loadAllTilesForDiscoverEdition:(id)arg1 ;
-(id)_currentLookahead;
-(void)_loadForTile:(id)arg1 ;
-(long long)_precachingTypeForTileType:(unsigned long long)arg1 ;
-(id)_defaultClientLookahead;
-(void)autoloadLiveStories;
-(void)_loadForItemCountPairs:(id)arg1 type:(long long)arg2 ;
-(id)_itemCountPairsForType:(long long)arg1 ;
-(void)didBeginViewingInContext:(unsigned long long)arg1 ;
-(void)tilesBeingViewedDidChange:(id)arg1 ;
-(void)didFinishViewingTiles;
-(SOJUBroadcastPrecachingPrecache *)soju;
-(void)setSoju:(SOJUBroadcastPrecachingPrecache *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
