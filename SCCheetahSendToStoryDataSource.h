/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCStoriesModelUpdateListener.h>
#import <Snapchat/SCSnapVideoFilterUpdateListener.h>
#import <Snapchat/MediaUpdateListener.h>
#import <Snapchat/SCStoryMediaStateListener.h>
#import <Snapchat/SCSearchEventAnnouncing.h>

@protocol OS_dispatch_queue, SCCanceling;
@class NSOrderedSet, NSDictionary, NSObject, SCSearchEventListenerAnnouncer, SCSendToConfiguration, EphemeralMedia, NSMutableArray, UIImage, NSString;

@interface SCCheetahSendToStoryDataSource : NSObject <SCStoriesModelUpdateListener, SCSnapVideoFilterUpdateListener, MediaUpdateListener, SCStoryMediaStateListener, SCSearchEventAnnouncing> {

	NSOrderedSet* _officialStories;
	NSOrderedSet* _sharedStories;
	NSOrderedSet* _groupStories;
	NSOrderedSet* _businessProfileHandlers;
	NSDictionary* _officialStoriesLookup;
	NSDictionary* _groupStoriesLookup;
	NSDictionary* _businessProfileHandlersLookup;
	NSDictionary* _officialStoriesIsActive;
	NSDictionary* _sharedStoriesIsActive;
	NSDictionary* _groupStoriesIsActive;
	NSObject*<OS_dispatch_queue> _officialStoriesQueue;
	NSObject*<OS_dispatch_queue> _sharedStoriesQueue;
	NSObject*<OS_dispatch_queue> _groupStoriesQueue;
	NSObject*<OS_dispatch_queue> _businessProfilesQueue;
	NSObject*<OS_dispatch_queue> _announceQueue;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	long long _storiesUpdateCount;
	BOOL _pendingStoriesUpdateAnnouncement;
	SCSendToConfiguration* _configuration;
	EphemeralMedia* _previewEphemeralMedia;
	NSMutableArray* _thumbnailStories;
	id<SCCanceling> _managedBusinessProfilesObserver;
	UIImage* _previewThumbnail;

}

@property (nonatomic,copy,readonly) NSOrderedSet * officialStories; 
@property (nonatomic,copy,readonly) NSOrderedSet * sharedStories; 
@property (nonatomic,copy,readonly) NSOrderedSet * groupStories; 
@property (nonatomic,copy,readonly) NSOrderedSet * businessProfileHandlers; 
@property (nonatomic,readonly) UIImage * previewThumbnail;                               //@synthesize previewThumbnail=_previewThumbnail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(NSOrderedSet *)groupStories;
-(void)storiesModelDidUpdateWithParams:(id)arg1 ;
-(void)story:(id)arg1 didChangeMediaState:(long long)arg2 ;
-(void)story:(id)arg1 didChangeThumbnailMediaState:(long long)arg2 ;
-(void)videoFilterThumbnailDataDidUpdate;
-(NSOrderedSet *)officialStories;
-(NSOrderedSet *)sharedStories;
-(void)updateStoryThumbnailForEphemeralMedia:(id)arg1 ;
-(id)groupStoryForId:(id)arg1 ;
-(UIImage *)previewThumbnail;
-(id)chatGroupForId:(id)arg1 ;
-(id)sharedStoryForId:(id)arg1 ;
-(id)businessProfileHandlersForBusinessIds:(id)arg1 ;
-(BOOL)shouldShowMyStoryFriendsOnly;
-(BOOL)shouldShowMyStoryCustom;
-(id)officialStoriesForOfficialStoryIds:(id)arg1 ;
-(id)sharedStoriesForStoryGroupIds:(id)arg1 ;
-(id)groupStoriesForPublicationIds:(id)arg1 ;
-(void)updateGroupStories;
-(void)removeGroupStoryForId:(id)arg1 ;
-(void)updateGroupStoryIdForNewPublication:(id)arg1 ;
-(void)addGroupStory:(id)arg1 ;
-(void)_updateSharedStories;
-(BOOL)shouldShowBusinessProfiles;
-(void)_updateBusinessProfilesAndAnnounce:(BOOL)arg1 ;
-(void)_updateOfficialStoriesAndAnnounce:(BOOL)arg1 ;
-(void)_updateSharedStoriesAndAnnounce:(BOOL)arg1 ;
-(void)_updateGroupStoriesAndAnnounce:(BOOL)arg1 ;
-(void)_removeEphemeralMediaListeners;
-(BOOL)_fetchThumbnailForFriendStories:(id)arg1 ;
-(void)_dispatchAndAnnounceStoriesUpdate;
-(void)_updateOfficialStories;
-(void)_accounceStoriesUpdate;
-(void)_announceStoriesUpdateImmediately;
-(void)mediaDataToUploadDidUpdate;
-(BOOL)shouldShowMyStory;
-(BOOL)shouldShowSharedStories;
-(BOOL)isMyStoryActive;
-(BOOL)isOfficialStoryActive:(id)arg1 ;
-(BOOL)isSharedStoryActive:(id)arg1 ;
-(BOOL)isGroupStoryActive:(id)arg1 ;
-(NSOrderedSet *)businessProfileHandlers;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

