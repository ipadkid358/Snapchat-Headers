/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMediaOwnerProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSString;

@interface SCCheetahStoriesCollection : NSObject <SCMediaOwnerProtocol, NSCoding> {

	NSMutableDictionary* _usernameToFriendStories;
	NSMutableDictionary* _cachedPlayableViewModels;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cacheMediaIds;
-(id)mediaFileNames;
-(id)cheetahStoryForPlayableViewModel:(id)arg1 ;
-(void)cancelPrefetchMediaForCheetahStoriesArray:(id)arg1 ;
-(id)playableViewModelArrayForCheetahStoryArray:(id)arg1 ;
-(id)playableViewModelForCheetahStory:(id)arg1 ;
-(void)_ensureNonNilObjects;
-(void)reloadStoriesCollectionWithStories:(id)arg1 ;
-(void)removeStoryMediaFromCachedFriendStories:(id)arg1 ;
-(void)clearExpiredStories;
-(void)updateWithCheetahStoriesCollection:(id)arg1 ;
-(void)prefetchMediaForCheetahStoriesArray:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

