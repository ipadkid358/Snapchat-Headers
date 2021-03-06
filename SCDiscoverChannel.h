/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Snapchat/SCAdOwnerProtocol.h>
#import <Snapchat/SCMediaOwnerProtocol.h>
#import <Snapchat/SCPublicContentMiniProfileDataEntry.h>
#import <Snapchat/SCStoriesViewDataModel.h>
#import <Snapchat/SCFilterableProtocol.h>
#import <Snapchat/SCSubscribableContent.h>
#import <Snapchat/SCTileDataSource.h>

@class SCDiscoverChannels, NSString, UIColor, SCTile, NSURL, SCSearchImageDownloader, SCDiscoverEdition, SCTileDataSourceListenerAnnouncer;

@interface SCDiscoverChannel : NSObject <NSCoding, SCAdOwnerProtocol, SCMediaOwnerProtocol, SCPublicContentMiniProfileDataEntry, SCStoriesViewDataModel, SCFilterableProtocol, SCSubscribableContent, SCTileDataSource> {

	BOOL _isShow;
	BOOL _isNews;
	BOOL _allowSubscribe;
	BOOL _isOutOfRegionChannel;
	BOOL _rollingNewsEnabled;
	BOOL _mediaIsLoadingUserInitiated;
	SCDiscoverChannels* _channels;
	NSString* _displayName;
	NSString* _name;
	NSString* _uniqueName;
	UIColor* _primaryPublisherColor;
	UIColor* _secondaryPublisherColor;
	UIColor* _logoGradientColor;
	NSString* _currentHash;
	NSString* _publisherDescription;
	long long _publisherId;
	long long _editionId;
	SCTile* _tile;
	unsigned long long _filledIconMediaState;
	NSURL* _filledIconURL;
	SCSearchImageDownloader* _imageDownloader;
	unsigned long long _horizontalIconMediaState;
	NSURL* _horizontalIconURL;
	unsigned long long _searchIconMediaState;
	NSURL* _searchIconURL;
	SCDiscoverEdition* _archivedEdition;
	SCDiscoverEdition* _currentEdition;
	long long _generationTimestamp;
	long long _editionPublishingTimestamp;
	unsigned long long _subscribeState;
	NSString* _currentTrackingId;
	NSString* _publisherDeepLink;
	SCTileDataSourceListenerAnnouncer* _tileDataSourceAnnouncer;
	SCDiscoverEdition* _displayedOutdatedEdition;

}

@property (nonatomic,copy) NSString * displayName;                                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * uniqueName;                                                      //@synthesize uniqueName=_uniqueName - In the implementation block
@property (nonatomic,retain) UIColor * primaryPublisherColor;                                          //@synthesize primaryPublisherColor=_primaryPublisherColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryPublisherColor;                                        //@synthesize secondaryPublisherColor=_secondaryPublisherColor - In the implementation block
@property (nonatomic,copy) NSString * publisherDescription;                                            //@synthesize publisherDescription=_publisherDescription - In the implementation block
@property (nonatomic,copy) NSString * publisherDeepLink;                                               //@synthesize publisherDeepLink=_publisherDeepLink - In the implementation block
@property (assign,nonatomic) BOOL allowSubscribe;                                                      //@synthesize allowSubscribe=_allowSubscribe - In the implementation block
@property (nonatomic,copy) NSString * currentHash;                                                     //@synthesize currentHash=_currentHash - In the implementation block
@property (assign,nonatomic) BOOL rollingNewsEnabled;                                                  //@synthesize rollingNewsEnabled=_rollingNewsEnabled - In the implementation block
@property (nonatomic,retain) SCTile * tile;                                                            //@synthesize tile=_tile - In the implementation block
@property (nonatomic,retain) SCTileDataSourceListenerAnnouncer * tileDataSourceAnnouncer;              //@synthesize tileDataSourceAnnouncer=_tileDataSourceAnnouncer - In the implementation block
@property (assign,nonatomic) unsigned long long filledIconMediaState;                                  //@synthesize filledIconMediaState=_filledIconMediaState - In the implementation block
@property (nonatomic,retain) NSURL * filledIconURL;                                                    //@synthesize filledIconURL=_filledIconURL - In the implementation block
@property (assign,nonatomic) unsigned long long horizontalIconMediaState;                              //@synthesize horizontalIconMediaState=_horizontalIconMediaState - In the implementation block
@property (nonatomic,retain) NSURL * horizontalIconURL;                                                //@synthesize horizontalIconURL=_horizontalIconURL - In the implementation block
@property (assign,nonatomic) unsigned long long searchIconMediaState;                                  //@synthesize searchIconMediaState=_searchIconMediaState - In the implementation block
@property (nonatomic,retain) NSURL * searchIconURL;                                                    //@synthesize searchIconURL=_searchIconURL - In the implementation block
@property (nonatomic,retain) SCDiscoverEdition * currentEdition;                                       //@synthesize currentEdition=_currentEdition - In the implementation block
@property (nonatomic,retain) SCDiscoverEdition * displayedOutdatedEdition;                             //@synthesize displayedOutdatedEdition=_displayedOutdatedEdition - In the implementation block
@property (assign,nonatomic,__weak) SCDiscoverChannels * channels;                                     //@synthesize channels=_channels - In the implementation block
@property (nonatomic,readonly) UIColor * logoGradientColor;                                            //@synthesize logoGradientColor=_logoGradientColor - In the implementation block
@property (nonatomic,readonly) BOOL isShow;                                                            //@synthesize isShow=_isShow - In the implementation block
@property (nonatomic,readonly) BOOL isNews;                                                            //@synthesize isNews=_isNews - In the implementation block
@property (nonatomic,readonly) BOOL isOutOfRegionChannel;                                              //@synthesize isOutOfRegionChannel=_isOutOfRegionChannel - In the implementation block
@property (nonatomic,readonly) long long publisherId;                                                  //@synthesize publisherId=_publisherId - In the implementation block
@property (nonatomic,readonly) long long editionId;                                                    //@synthesize editionId=_editionId - In the implementation block
@property (assign,nonatomic,__weak) SCSearchImageDownloader * imageDownloader;                         //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (assign,nonatomic) BOOL mediaIsLoadingUserInitiated;                                         //@synthesize mediaIsLoadingUserInitiated=_mediaIsLoadingUserInitiated - In the implementation block
@property (nonatomic,retain) SCDiscoverEdition * archivedEdition;                                      //@synthesize archivedEdition=_archivedEdition - In the implementation block
@property (assign,nonatomic) long long generationTimestamp;                                            //@synthesize generationTimestamp=_generationTimestamp - In the implementation block
@property (nonatomic,readonly) long long editionPublishingTimestamp;                                   //@synthesize editionPublishingTimestamp=_editionPublishingTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long subscribeState;                                        //@synthesize subscribeState=_subscribeState - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentTrackingId;                                      //@synthesize currentTrackingId=_currentTrackingId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForViewContext:(unsigned long long)arg1 ;
+(long long)blizzardEnumForViewContext:(unsigned long long)arg1 ;
+(void)recoverMissingFilledIconInChatForChannel:(id)arg1 ;
+(void)checkIntegrityOfChannel:(id)arg1 withSojuChannel:(id)arg2 ;
+(void)iconForChannel:(id)arg1 postProcess:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(void)recoverMissingIconForChannel:(id)arg1 ;
+(void)recoverMissingHorizontalIconForChannel:(id)arg1 ;
+(void)recoverMissingSearchIconForChannel:(id)arg1 ;
-(long long)publisherId;
-(BOOL)isFullyViewed;
-(NSString *)publisherDescription;
-(long long)editionId;
-(long long)editionPublishingTimestamp;
-(BOOL)isShow;
-(BOOL)rollingNewsEnabled;
-(unsigned long long)subscribeState;
-(NSURL *)filledIconURL;
-(NSURL *)horizontalIconURL;
-(void)setImageDownloader:(SCSearchImageDownloader *)arg1 ;
-(SCSearchImageDownloader *)imageDownloader;
-(BOOL)matchesByDisplayName:(id)arg1 ;
-(NSURL *)searchIconURL;
-(id)cacheMediaIds;
-(id)fullyViewedDate;
-(void)_didDecodeObject;
-(id)cacheAdIds;
-(id)mediaFileNames;
-(id)tileLoggingPosterId;
-(SCDiscoverEdition *)currentEdition;
-(id)publicContentMiniProfileDescription;
-(id)publicContentMiniProfileTitle;
-(void)publicContentMiniProfileImageWithCompletion:(/*^block*/id)arg1 ;
-(id)publicContentMiniProfileDeeplinkURL;
-(id)publicContentMiniProfileButtonText;
-(void)fetchPublicContentMiniProfileIcon;
-(id)iconLoadStateKVOKeyPath;
-(id)miniProfileConfig;
-(id)miniProfileSourceTileId;
-(long long)uniqueCellDataIdWithSection:(long long)arg1 ;
-(UIColor *)logoGradientColor;
-(NSString *)currentTrackingId;
-(id)initOutOfRegionChannelWithName:(id)arg1 displayName:(id)arg2 uniqueName:(id)arg3 publisherDescription:(id)arg4 searchIconURL:(id)arg5 filledIconURL:(id)arg6 horizontalIconURL:(id)arg7 primaryPublisherColor:(id)arg8 secondaryPublisherColor:(id)arg9 logoGradientColor:(id)arg10 publisherDeepLink:(id)arg11 allowSubscribe:(BOOL)arg12 SCSubscribeState:(unsigned long long)arg13 isRemotePublisher:(BOOL)arg14 isShow:(BOOL)arg15 editionPublishingTimestamp:(long long)arg16 isNews:(BOOL)arg17 publisherId:(long long)arg18 editionId:(long long)arg19 ;
-(void)setSubscribeState:(unsigned long long)arg1 ;
-(BOOL)isFilledIconMediaLoaded;
-(void)iconWithType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchIconMediaIfNecessaryUserInitiated:(BOOL)arg1 context:(unsigned long long)arg2 ;
-(void)setArchivedEdition:(SCDiscoverEdition *)arg1 ;
-(SCDiscoverEdition *)archivedEdition;
-(BOOL)updateWithSojuChannel:(id)arg1 chunks:(id)arg2 useV2Logo:(BOOL)arg3 ;
-(void)updatePublisherId:(long long)arg1 ;
-(long long)_getEditionPublishingTimestampWithCoder:(id)arg1 ;
-(UIColor *)primaryPublisherColor;
-(UIColor *)secondaryPublisherColor;
-(BOOL)allowSubscribe;
-(NSString *)currentHash;
-(unsigned long long)filledIconMediaState;
-(unsigned long long)horizontalIconMediaState;
-(unsigned long long)searchIconMediaState;
-(long long)generationTimestamp;
-(void)_updateTileLogoIconMediaState;
-(void)setCurrentHash:(NSString *)arg1 ;
-(void)setRollingNewsEnabled:(BOOL)arg1 ;
-(void)setPrimaryPublisherColor:(UIColor *)arg1 ;
-(void)setSecondaryPublisherColor:(UIColor *)arg1 ;
-(void)setFilledIconURL:(NSURL *)arg1 ;
-(void)setFilledIconMediaState:(unsigned long long)arg1 ;
-(void)setHorizontalIconURL:(NSURL *)arg1 ;
-(void)setHorizontalIconMediaState:(unsigned long long)arg1 ;
-(void)setSearchIconURL:(NSURL *)arg1 ;
-(void)setSearchIconMediaState:(unsigned long long)arg1 ;
-(void)setTile:(SCTile *)arg1 ;
-(void)setDisplayedOutdatedEdition:(SCDiscoverEdition *)arg1 ;
-(void)setCurrentEdition:(SCDiscoverEdition *)arg1 ;
-(void)didFinishViewing;
-(SCTileDataSourceListenerAnnouncer *)tileDataSourceAnnouncer;
-(void)_fetchIconWithImageDownloader:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchMediaIfNecessaryForIconType:(unsigned long long)arg1 userInitiated:(BOOL)arg2 context:(unsigned long long)arg3 ;
-(void)setIconMediaState:(unsigned long long)arg1 iconType:(unsigned long long)arg2 ;
-(id)cacheKeyForIconType:(unsigned long long)arg1 ;
-(void)fetchFilledIconMediaIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchHorizontalIconMediaIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)iconWithType:(unsigned long long)arg1 postProcess:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(SCDiscoverEdition *)displayedOutdatedEdition;
-(void)fetchFilledIconMediaWithPostProcess:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchIconMediaIfNecessary;
-(long long)uniqueCellDataId;
-(id)posterName;
-(BOOL)isUnsubscribed;
-(id)tileIdForTileCollection;
-(id)tileLoggingTrackingId;
-(void)addTileDataSourceListener:(id)arg1 ;
-(void)removeTileDataSourceListener:(id)arg1 ;
-(void)updateEditionId:(long long)arg1 ;
-(void)didStartViewingWithUserSession:(id)arg1 ;
-(void)didFullyViewCurrentEdition;
-(void)didUpdateCurrentEditionCover;
-(void)fetchSearchIconMediaIfNecessary;
-(BOOL)isIconMediaLoaded;
-(BOOL)isFilledIconMediaLoading;
-(unsigned long long)iconTypeForCacheKey:(id)arg1 ;
-(id)cacheIconMediaIds;
-(BOOL)supportsHiding;
-(void)setAllowSubscribe:(BOOL)arg1 ;
-(BOOL)isOutOfRegionChannel;
-(BOOL)mediaIsLoadingUserInitiated;
-(void)setMediaIsLoadingUserInitiated:(BOOL)arg1 ;
-(void)setGenerationTimestamp:(long long)arg1 ;
-(NSString *)publisherDeepLink;
-(void)setPublisherDeepLink:(NSString *)arg1 ;
-(void)setTileDataSourceAnnouncer:(SCTileDataSourceListenerAnnouncer *)arg1 ;
-(void)setPublisherDescription:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(SCDiscoverChannels *)channels;
-(NSString *)displayName;
-(NSString *)uniqueName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)isSubscribed;
-(void)setChannels:(SCDiscoverChannels *)arg1 ;
-(SCTile *)tile;
-(id)entityType;
-(BOOL)supportsSubscription;
-(BOOL)isNews;
-(void)setUniqueName:(NSString *)arg1 ;
-(id)entityId;
-(id)requestContexts;
@end

