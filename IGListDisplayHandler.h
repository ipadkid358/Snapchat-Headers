/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMapTable;

@interface IGListDisplayHandler : NSObject {

	NSCountedSet* _visibleListSections;
	NSMapTable* _visibleViewObjectMap;

}

@property (nonatomic,retain) NSCountedSet * visibleListSections;              //@synthesize visibleListSections=_visibleListSections - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleViewObjectMap;               //@synthesize visibleViewObjectMap=_visibleViewObjectMap - In the implementation block
-(NSMapTable *)visibleViewObjectMap;
-(NSCountedSet *)visibleListSections;
-(void)willDisplayReusableView:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 object:(id)arg4 indexPath:(id)arg5 ;
-(id)pluckObjectForView:(id)arg1 ;
-(void)didEndDisplayingReusableView:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 object:(id)arg4 indexPath:(id)arg5 ;
-(void)willDisplaySupplementaryView:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 object:(id)arg4 indexPath:(id)arg5 ;
-(void)didEndDisplayingSupplementaryView:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 indexPath:(id)arg4 ;
-(void)willDisplayCell:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 object:(id)arg4 indexPath:(id)arg5 ;
-(void)didEndDisplayingCell:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 indexPath:(id)arg4 ;
-(void)setVisibleListSections:(NSCountedSet *)arg1 ;
-(void)setVisibleViewObjectMap:(NSMapTable *)arg1 ;
-(id)init;
@end

