/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCCachingMediaRequest;
@class SCStoryMediaCache;

@interface SCSingleIconConfigurer : NSObject {

	id<SCCachingMediaRequest> _loadingRequest;
	SCStoryMediaCache* _storyMediaCache;
	long long _retriesRemaining;
	BOOL _didSetImageForID;

}
+(id)getStoryThumbnailMediaFromCache:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureSingleIconView:(id)arg1 withMyStory:(id)arg2 ;
-(void)configureSingleIconView:(id)arg1 withMyStory:(id)arg2 progress:(double)arg3 ;
-(void)configureSingleIconView:(id)arg1 withFriendStories:(id)arg2 viewingType:(long long)arg3 ;
-(void)configureSingleIconViewForNoStoriesVisible:(id)arg1 ;
-(BOOL)_preConfigureWithSingleIconView:(id)arg1 ID:(unsigned long long)arg2 ;
-(void)_loadThumbnailForIconView:(id)arg1 story:(id)arg2 iconViewTagID:(long long)arg3 thumbnailState:(long long)arg4 hasNewStoryID:(BOOL)arg5 ;
-(long long)_loadStateWithMyStory:(id)arg1 ;
-(void)_updateIconView:(id)arg1 withLoadState:(long long)arg2 ;
-(void)_loadIconWithFriendStories:(id)arg1 viewingType:(long long)arg2 iconView:(id)arg3 ;
-(long long)_loadStateWithFriendStories:(id)arg1 viewingType:(long long)arg2 ;
-(void)_loadIconMediaForIconView:(id)arg1 friendStories:(id)arg2 ID:(long long)arg3 hasNewStoryID:(BOOL)arg4 ;
-(void)_loadIconMediaForIconView:(id)arg1 discoverChannel:(id)arg2 ID:(long long)arg3 postProcess:(/*^block*/id)arg4 ;
-(long long)_loadStateWithDiscoverChannel:(id)arg1 ;
-(void)_loadThumbnailForIconView:(id)arg1 thumbnailKey:(id)arg2 encryptionDictionary:(id)arg3 encryptor:(id)arg4 expiration:(id)arg5 cacheDataSource:(id)arg6 isStoryMedia:(BOOL)arg7 iconViewTagID:(long long)arg8 thumbnailState:(long long)arg9 completion:(/*^block*/id)arg10 ;
-(void)configureSingleIconView:(id)arg1 withDiscoverChannel:(id)arg2 postProcess:(/*^block*/id)arg3 ;
-(void)configureSingleIconViewForFetching:(id)arg1 withFriendStories:(id)arg2 viewingType:(long long)arg3 ;
-(id)init;
-(void)prepareForReuse;
@end

