/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionView, UITextField, UILabel, NSIndexPath, SCSearchSession, NSDictionary, NSArray, NSMutableArray, NSAttributedString, NSString;

@interface SCStickeFriendMojiSearchController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionView* _collectionView;
	UITextField* _searchView;
	UILabel* _infoLabel;
	NSIndexPath* _selectedIndexPath;
	SCSearchSession* _searchSession;
	NSDictionary* _suggestedNameDictionary;
	NSArray* _allFriends;
	NSMutableArray* _selectedFriends;
	NSAttributedString* _searchViewAttributedString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSearchSession:(id)arg1 ;
-(void)_reloadSuggestionSection;
-(id)_friendObjectBasedOnQueryName:(id)arg1 ;
-(void)_hideTextField;
-(void)_displayTextField;
-(id)_friendListBasedOnSearchContent:(id)arg1 ;
-(id)_defaultFriendList;
-(id)_generateNameDictionaryFromFriends:(id)arg1 ;
-(id)_generateNameListFromFriends:(id)arg1 ;
-(id)_validFriends:(id)arg1 ;
-(void)selectLastQuery;
-(BOOL)deleteSelectedQuery;
-(void)updateTextFieldLayout;
-(BOOL)addSuggestedFriendQuery:(id)arg1 ;
-(id)defaultStickerResultForFriendMojiSearchBasedOnAvatarIds:(id)arg1 dataSource:(id)arg2 bitmojiStickerManager:(id)arg3 stickerPickerMenuView:(id)arg4 ;
-(id)currentSelectedFriends;
-(id)selectedFriendsAvatarIds;
-(id)suggestedQueryKeywordsBasedOnSearchText:(id)arg1 ;
-(id)view;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)reset;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)addTextField:(id)arg1 ;
@end

