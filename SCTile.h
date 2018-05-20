/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SCTileDataSource;
@class NSString, NSURL, NSArray, UIColor, SCTileCover;

@interface SCTile : NSObject <NSCoding, NSCopying> {

	BOOL _displayHasChanged;
	BOOL _isVideo;
	id<SCTileDataSource> _dataSource;
	NSString* _tileId;
	unsigned long long _type;
	NSString* _discoverChannelName;
	NSString* _sharedStoryId;
	unsigned long long _logoType;
	NSString* _logoText;
	NSURL* _logoURL;
	NSArray* _covers;
	UIColor* _color;
	NSString* _currentTileCoverId;
	NSURL* _webURL;
	unsigned long long _logoIconMediaState;

}

@property (assign,nonatomic,__weak) id<SCTileDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * tileId;                            //@synthesize tileId=_tileId - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * discoverChannelName;               //@synthesize discoverChannelName=_discoverChannelName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharedStoryId;                     //@synthesize sharedStoryId=_sharedStoryId - In the implementation block
@property (nonatomic,readonly) unsigned long long logoType;                       //@synthesize logoType=_logoType - In the implementation block
@property (nonatomic,copy,readonly) NSString * logoText;                          //@synthesize logoText=_logoText - In the implementation block
@property (nonatomic,copy) NSURL * logoURL;                                       //@synthesize logoURL=_logoURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * covers;                             //@synthesize covers=_covers - In the implementation block
@property (nonatomic,readonly) UIColor * color;                                   //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL displayHasChanged;                              //@synthesize displayHasChanged=_displayHasChanged - In the implementation block
@property (nonatomic,copy) NSString * currentTileCoverId;                         //@synthesize currentTileCoverId=_currentTileCoverId - In the implementation block
@property (nonatomic,readonly) SCTileCover * currentTileCover; 
@property (nonatomic,copy,readonly) NSURL * webURL;                               //@synthesize webURL=_webURL - In the implementation block
@property (nonatomic,readonly) BOOL isVideo;                                      //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) unsigned long long logoIconMediaState;               //@synthesize logoIconMediaState=_logoIconMediaState - In the implementation block
+(unsigned long long)logoTypeWithLogoTypeString:(id)arg1 ;
+(/*^block*/id)fullyViewedDateSortComparator;
+(void)recoverMissingTileLogoIconForTile:(id)arg1 ;
-(void)didDecodeObject;
-(BOOL)isFullyViewed;
-(NSArray *)covers;
-(unsigned long long)logoType;
-(NSString *)sharedStoryId;
-(NSString *)discoverChannelName;
-(unsigned long long)logoIconMediaState;
-(NSString *)currentTileCoverId;
-(BOOL)displayHasChanged;
-(void)setLogoIconMediaState:(unsigned long long)arg1 ;
-(BOOL)displaysEqual:(id)arg1 ;
-(unsigned long long)coverLoadState;
-(id)cacheKeyForTileLogoImage;
-(id)cacheMediaIds;
-(void)updateWithTileId:(id)arg1 type:(unsigned long long)arg2 logoType:(unsigned long long)arg3 logo:(id)arg4 color:(id)arg5 sojuTiles:(id)arg6 dataSource:(id)arg7 ;
-(void)updateWithTileId:(id)arg1 type:(unsigned long long)arg2 logoType:(unsigned long long)arg3 logo:(id)arg4 color:(id)arg5 tileCovers:(id)arg6 dataSource:(id)arg7 ;
-(SCTileCover *)currentTileCover;
-(void)setDisplayHasChanged:(BOOL)arg1 ;
-(void)setCurrentTileCoverId:(NSString *)arg1 ;
-(void)logoIconWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchLogoImageMediaImmediately:(BOOL)arg1 ;
-(id)_currentTileCover;
-(void)fetchMediaImmediately:(BOOL)arg1 ;
-(void)coverWithPostProcess:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id<SCTileDataSource>)arg1 ;
-(id)description;
-(id<SCTileDataSource>)dataSource;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(BOOL)isLoading;
-(BOOL)isLoaded;
-(BOOL)isVideo;
-(NSURL *)webURL;
-(id)initWithTile:(id)arg1 ;
-(NSString *)tileId;
-(NSURL *)logoURL;
-(void)setLogoURL:(NSURL *)arg1 ;
-(NSString *)logoText;
@end
