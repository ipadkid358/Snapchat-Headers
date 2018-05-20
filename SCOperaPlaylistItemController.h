/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCOperaPlaylistItemController <NSObject>
@required
-(BOOL)insertPlaylistItemGroup:(id)arg1 afterPlaylistItemGroup:(id)arg2;
-(void)playlistItemDidUpdateForID:(id)arg1;
-(id)playlistItemForPageID:(id)arg1;
-(id)dataModelForPlaylistItemGroup:(id)arg1;
-(id)dataModelForPlaylistItem:(id)arg1;
-(BOOL)insertPlaylistItem:(id)arg1 afterPlaylistItem:(id)arg2;
-(id)playlistItemForItemID:(id)arg1;
-(id)playlistItemGroupForGroupId:(id)arg1;
-(id)firstPlaylistItemToDisplay;
-(id)initialPlaylistItemToDisplayInGroup:(id)arg1;
-(void)removePlaylistItemForID:(id)arg1;
-(void)setPlaylistCurrentGroupId:(id)arg1 resetCurrentItem:(BOOL)arg2;
-(void)updatePlaylistWithGroups:(id)arg1;
-(void)asyncUpdatePlaylistItemGroupForID:(id)arg1;
-(void)setPlaylistCurrentItemId:(id)arg1;
-(id)rightMostViewedPlaylistItemGroup;
-(id)playlist;

@end

