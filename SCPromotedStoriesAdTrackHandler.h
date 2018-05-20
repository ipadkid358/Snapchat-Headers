/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaPlaylistAdTrackProtocol.h>

@class NSString;

@interface SCPromotedStoriesAdTrackHandler : NSObject <SCOperaPlaylistAdTrackProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)adSessionId;
-(id)adRequestClientIdForItem:(id)arg1 playlistItemController:(id)arg2 ;
-(long long)adSnapIndexForItem:(id)arg1 ;
-(id)skippedItemAroundItem:(id)arg1 pageLeft:(BOOL)arg2 ;
-(BOOL)isNofillAdItem:(id)arg1 ;
-(id)adViewContextForSkippedItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(BOOL)arg3 ;
-(void)logAdSkipWithAdItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(BOOL)arg3 ;
-(id)skippedAdGroupAroundGroup:(id)arg1 pagedLeft:(BOOL)arg2 ;
-(BOOL)isNofillAdGroup:(id)arg1 ;
-(id)adRequestClientIdForGroup:(id)arg1 ;
-(id)adViewContextForSkippedGroup:(id)arg1 ;
-(void)logAdSkipWithAdGroup:(id)arg1 ;
-(id)adViewContextForItem:(id)arg1 operaViewController:(id)arg2 ;
-(unsigned long long)adProductTypeForItem:(id)arg1 playlistItemController:(id)arg2 ;
-(BOOL)_isPromotedStoriesPlaylistItem:(id)arg1 playlistItemController:(id)arg2 ;
@end

