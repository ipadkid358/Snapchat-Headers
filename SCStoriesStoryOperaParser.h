/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCStoriesStoryOperaParser : NSObject
+(id)viewModelsForStory:(id)arg1 friendStories:(id)arg2 isSingleMyStory:(BOOL)arg3 showViewersTable:(BOOL)arg4 loadedStoryProperties:(id)arg5 loadingLayerBackgroundImageProperties:(id)arg6 viewersListIconProvider:(id)arg7 errorType:(unsigned long long)arg8 userSession:(id)arg9 viewLocation:(long long)arg10 mediaManager:(id)arg11 streamingURLProvider:(id)arg12 chromeAvatarProvider:(id)arg13 groupChatTitleProvider:(id)arg14 contextSession:(id)arg15 ;
+(id)pagesPropertiesForStory:(id)arg1 friendStories:(id)arg2 isSingleMyStory:(BOOL)arg3 showViewersTable:(BOOL)arg4 loadedStoryProperties:(id)arg5 loadingLayerBackgroundImageProperties:(id)arg6 viewersListIconProvider:(id)arg7 errorType:(unsigned long long)arg8 userSession:(id)arg9 viewLocation:(long long)arg10 mediaManager:(id)arg11 streamingURLProvider:(id)arg12 chromeAvatarProvider:(id)arg13 groupChatTitleProvider:(id)arg14 contextSession:(id)arg15 ;
+(id)loadingPageProperties;
+(id)dummyLoadingViewModel;
+(id)_sharedPagePropertiesForStory:(id)arg1 friendStories:(id)arg2 isSingleMyStory:(BOOL)arg3 viewLocation:(long long)arg4 loadingLayerBackgroundImageProperties:(id)arg5 userSession:(id)arg6 mediaManager:(id)arg7 chromeAvatarProvider:(id)arg8 groupChatTitleProvider:(id)arg9 ;
+(id)_loadingPagePropertiesForStory:(id)arg1 pageProperties:(id)arg2 userSession:(id)arg3 errorType:(unsigned long long)arg4 ;
+(id)_pagePropertiesForVideoStory:(id)arg1 loop:(BOOL)arg2 ;
+(BOOL)_shouldShowMyStoryPageProperties:(id)arg1 friendStories:(id)arg2 ;
+(id)_pagePropertiesForMyStory:(id)arg1 offsetEnabled:(BOOL)arg2 showViewersTable:(BOOL)arg3 viewersListIconProvider:(id)arg4 viewersListViewProvider:(id)arg5 userSession:(id)arg6 ;
+(id)_pagePropertiesForSpectaclesStory;
+(id)_pagePropertiesForShareableStory:(id)arg1 friendStories:(id)arg2 pageProperties:(id)arg3 experimentManager:(id)arg4 viewLocation:(long long)arg5 userSession:(id)arg6 ;
+(id)_sharedPropertiesForAdStory:(id)arg1 section:(id)arg2 friendStories:(id)arg3 userSession:(id)arg4 ;
+(BOOL)_isAdContentLooping:(id)arg1 ;
+(id)_pagePropertiesForLensMetadata:(id)arg1 sender:(id)arg2 ;
+(id)_pagePropertiesForSnappablesWithLensId:(id)arg1 storyId:(id)arg2 sender:(id)arg3 ;
+(id)_setupAttachmentsPageProperties:(id)arg1 url:(id)arg2 pageProperties:(id)arg3 ;
+(id)_pagePropertiesForChromeViewWithStory:(id)arg1 chromeAvatarProvider:(id)arg2 groupChatTitleProvider:(id)arg3 ;
+(id)_errorPropertiesForStory:(id)arg1 errorType:(unsigned long long)arg2 pageProperties:(id)arg3 ;
+(id)_dedupeViewers:(id)arg1 ;
+(long long)_screenshotCountFromViewerList:(id)arg1 ;
+(BOOL)_shouldUseGroupChatTitleProviderForChromeStoryViewModel:(id)arg1 titleProvider:(id)arg2 ;
+(id)_pagePropertiesForChromeAvatarIconWithViewModel:(id)arg1 chromeAvatarProvider:(id)arg2 ;
+(id)_pagePropertiesForChromeGroupChatTitleWithViewModel:(id)arg1 titleProvider:(id)arg2 ;
+(id)_pagePropertiesForSnappablesWithLensId:(id)arg1 sender:(id)arg2 ;
+(id)_pagePropertiesForAttachmentUrl:(id)arg1 url:(id)arg2 pageProperties:(id)arg3 ;
@end
