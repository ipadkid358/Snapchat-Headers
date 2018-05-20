/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, SCOperaPlaylistItemGroup;

@interface SCOperaPlaylist : NSObject {

	NSMutableDictionary* _groupIdToGroups;
	NSArray* _groups;
	SCOperaPlaylistItemGroup* _currentGroup;

}

@property (nonatomic,copy,readonly) NSArray * groups;                              //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) SCOperaPlaylistItemGroup * currentGroup;              //@synthesize currentGroup=_currentGroup - In the implementation block
-(id)groupForId:(id)arg1 ;
-(SCOperaPlaylistItemGroup *)currentGroup;
-(void)setCurrentGroup:(SCOperaPlaylistItemGroup *)arg1 ;
-(id)initWithInitialGroup:(id)arg1 groups:(id)arg2 ;
-(void)updateWithPlaylistGroups:(id)arg1 ;
-(BOOL)insertPlaylistItemGroup:(id)arg1 afterPlaylistItemGroup:(id)arg2 ;
-(id)description;
-(void)removeItem:(id)arg1 ;
-(NSArray *)groups;
-(void)removeGroup:(id)arg1 ;
@end

