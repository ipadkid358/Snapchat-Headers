/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSelectRecipientsBaseView.h>
#import <Snapchat/FriendsTableIndexDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCTimeProfilable.h>

@protocol SCAddToGroupViewDelegate;
@class SCSelectRecipientsConfiguration, UILabel, NSArray, UITableView, FriendsTableIndex, NSString;

@interface SCAddToGroupView : SCSelectRecipientsBaseView <FriendsTableIndexDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, SCTimeProfilable> {

	SCSelectRecipientsConfiguration* _configuration;
	unsigned long long _creationType;
	UILabel* _noSearchResultsLabel;
	NSArray* _sectionTypes;
	UITableView* _tableView;
	BOOL _searchable;
	long long _recentsShown;
	long long _relatedGroupsShown;
	long long _groupsShown;
	FriendsTableIndex* _tableIndex;
	id<SCAddToGroupViewDelegate> _addToGroupViewDelegate;

}

@property (assign,nonatomic) BOOL searchable;                                                         //@synthesize searchable=_searchable - In the implementation block
@property (assign,nonatomic) BOOL bounces; 
@property (assign,nonatomic) long long recentsShown;                                                  //@synthesize recentsShown=_recentsShown - In the implementation block
@property (assign,nonatomic) long long relatedGroupsShown;                                            //@synthesize relatedGroupsShown=_relatedGroupsShown - In the implementation block
@property (assign,nonatomic) long long groupsShown;                                                   //@synthesize groupsShown=_groupsShown - In the implementation block
@property (nonatomic,readonly) FriendsTableIndex * tableIndex;                                        //@synthesize tableIndex=_tableIndex - In the implementation block
@property (assign,nonatomic,__weak) id<SCAddToGroupViewDelegate> addToGroupViewDelegate;              //@synthesize addToGroupViewDelegate=_addToGroupViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(BOOL)searchable;
-(id)getPageViewName;
-(void)_presentMiniProfile:(id)arg1 ;
-(void)recipientBarHeightDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 creationType:(unsigned long long)arg3 ;
-(void)setAddToGroupViewDelegate:(id<SCAddToGroupViewDelegate>)arg1 ;
-(void)setRelatedGroupsShown:(long long)arg1 ;
-(void)setIndexHidden:(BOOL)arg1 ;
-(void)setRecentsShown:(long long)arg1 ;
-(long long)relatedGroupsShown;
-(long long)groupsShown;
-(void)setGroupsShown:(long long)arg1 ;
-(void)scrollTableViewToTop;
-(void)updateNoSearchResultsLabel;
-(void)_initGesture;
-(unsigned long long)sectionTypeOfSection:(unsigned long long)arg1 ;
-(unsigned long long)friendsSectionStartIndex;
-(id)viewMoreRecentsCell;
-(id)viewMoreGroupsCell;
-(BOOL)_isGroupSectionForIndexPath:(id)arg1 ;
-(id)getMischiefAtIndexPath:(id)arg1 ;
-(void)populateCellDisplayTextForGroup:(id)arg1 cell:(id)arg2 ;
-(BOOL)_isFriendOrNamedGroupSectionForIndexPath:(id)arg1 ;
-(id)_getFriendOrNamedGroupAtIndexPath:(id)arg1 ;
-(void)populateCellDisplayTextForFriend:(id)arg1 selectContactCell:(id)arg2 sectionType:(unsigned long long)arg3 ;
-(id)getFriendAtIndexPath:(id)arg1 ;
-(double)_heightForCellWithGroup:(id)arg1 ;
-(void)didSelectCellAtIndexPath:(id)arg1 ;
-(void)_didSelectGroup:(id)arg1 ;
-(void)removeFriendFromGroupSend:(id)arg1 ;
-(void)addFriendToGroupSend:(id)arg1 ;
-(void)_presentBlockedExceptionAlertView:(id)arg1 ;
-(void)updateWithSearchingSectionTypes;
-(void)updateWithNonSearchingSectionTypes;
-(id)_friendAndNamedGroupsSectionStringForSection:(id)arg1 ;
-(id)_assertionLogForIndexOutOfBoundsForFriendsAndNamedGroups:(id)arg1 indexPath:(id)arg2 ;
-(id)noSearchResultsLabel;
-(id)viewMoreCell:(id)arg1 ;
-(id<SCAddToGroupViewDelegate>)addToGroupViewDelegate;
-(void)_presentEditGroupOptions:(id)arg1 ;
-(void)scrollToIndex:(char)arg1 ;
-(long long)recentsShown;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setBounces:(BOOL)arg1 ;
-(BOOL)bounces;
-(void)showKeyboard:(BOOL)arg1 ;
-(void)setSearchable:(BOOL)arg1 ;
-(void)reloadTableView;
-(void)_longPress:(id)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(FriendsTableIndex *)tableIndex;
@end

