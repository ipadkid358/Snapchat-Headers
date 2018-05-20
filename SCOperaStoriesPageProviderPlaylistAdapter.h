/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCStoriesOperaPageProvider.h>

@protocol SCOperaPlaylistItemController;
@class SCStoriesOperaDataSource, NSString;

@interface SCOperaStoriesPageProviderPlaylistAdapter : NSObject <SCStoriesOperaPageProvider> {

	id<SCOperaPlaylistItemController> _playlistItemController;
	SCStoriesOperaDataSource* _storiesDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlaylistItemController:(id)arg1 storiesDataSource:(id)arg2 ;
-(unsigned long long)friendsPlayListCount;
-(void)injectStory:(id)arg1 afterStory:(id)arg2 ;
-(void)injectFriendStories:(id)arg1 ;
-(void)removeInjectedFriendStories:(id)arg1 ;
-(unsigned long long)indexOfFriendStoriesInPlaylist:(id)arg1 ;
-(void)updatePageForStory:(id)arg1 ;
-(id)firstStoryToDisplay;
-(unsigned long long)indexOfStoryRelativeToInitialStory:(id)arg1 ;
-(void)didStartToPlayStory:(id)arg1 ;
-(void)skipStory:(id)arg1 ;
-(BOOL)isLastStoryInFriendStories:(id)arg1 ;
-(BOOL)isLastFriendStoriesToDisplay:(id)arg1 ;
-(id)friendStoriesAtIndexInPlaylist:(unsigned long long)arg1 ;
-(unsigned long long)unviewedStoryCount;
@end

