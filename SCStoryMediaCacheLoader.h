/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatStoryLoader.h>

@interface SCStoryMediaCacheLoader : NSObject <SCChatStoryLoader>
+(id)findStoryMatchingStoryId:(id)arg1 recipient:(id)arg2 sentByUser:(BOOL)arg3 ;
+(void)loadMedia:(id)arg1 fromStory:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadChatMedia:(id)arg1 matchingStoryId:(id)arg2 recipient:(id)arg3 sentByUser:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
+(BOOL)_shouldLoadMediaFromStory:(id)arg1 storyId:(id)arg2 ;
+(void)_loadStoryBundleFromStory:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)findGroupStoryMatchingStoryId:(id)arg1 ;
-(void)findStoryMediaForStoryId:(id)arg1 recipient:(id)arg2 sentByUser:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)findGroupStoryMediaForStoryId:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
