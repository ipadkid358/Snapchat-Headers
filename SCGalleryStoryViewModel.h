/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCObserving, SCGalleryStoryViewModelDelegate, SCGalleryEntry;
@class SCMergedGalleryDataSource, NSArray;

@interface SCGalleryStoryViewModel : NSObject {

	SCMergedGalleryDataSource* _dataSource;
	id<SCObserving> _observeContext;
	long long _snapsCount;
	NSArray* _highlightedSnapIds;
	NSArray* _snaps;
	id<SCGalleryStoryViewModelDelegate> _delegate;
	id<SCGalleryEntry> _entry;
	long long _page;

}

@property (assign,nonatomic,__weak) id<SCGalleryStoryViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<SCGalleryEntry> entry;                                       //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) NSArray * snaps;                                                //@synthesize snaps=_snaps - In the implementation block
@property (nonatomic,readonly) NSArray * highlightedSnapIds;                                   //@synthesize highlightedSnapIds=_highlightedSnapIds - In the implementation block
@property (nonatomic,readonly) long long snapsCount;                                           //@synthesize snapsCount=_snapsCount - In the implementation block
@property (assign,nonatomic) long long page;                                                   //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) BOOL isExpanded; 
-(NSArray *)snaps;
-(NSArray *)highlightedSnapIds;
-(BOOL)hasMore:(long long)arg1 ;
-(long long)snapsCount;
-(void)_observeEntryChanges;
-(void)_unobserveEntryChanges;
-(BOOL)_snapsDidUpdate:(id)arg1 ;
-(id)initWithEntry:(id)arg1 dataSource:(id)arg2 ;
-(void)toggleExpand;
-(void)updateEntryIfNeeded:(id)arg1 ;
-(void)setDelegate:(id<SCGalleryStoryViewModelDelegate>)arg1 ;
-(void)dealloc;
-(id<SCGalleryStoryViewModelDelegate>)delegate;
-(BOOL)isExpanded;
-(long long)page;
-(void)setPage:(long long)arg1 ;
-(id<SCGalleryEntry>)entry;
@end
