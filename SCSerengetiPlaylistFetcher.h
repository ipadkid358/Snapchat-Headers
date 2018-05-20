/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaPlaylistFetcher.h>

@protocol SCOperaPlaylistFetcherDelegate;
@class NSString, Story;

@interface SCSerengetiPlaylistFetcher : NSObject <SCOperaPlaylistFetcher> {

	NSString* _storyId;
	unsigned long long _loadingState;
	Story* _story;
	id<SCOperaPlaylistFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCOperaPlaylistFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resolvedDataModels;
-(void)fetchPlaylist;
-(id)currentLoadingProperties;
-(id)initWithStoryId:(id)arg1 ;
-(void)_handleLoadCompleteWithStory:(id)arg1 success:(BOOL)arg2 ;
-(void)setDelegate:(id<SCOperaPlaylistFetcherDelegate>)arg1 ;
-(id<SCOperaPlaylistFetcherDelegate>)delegate;
-(unsigned long long)loadingState;
-(void)_setLoadingState:(unsigned long long)arg1 ;
@end
