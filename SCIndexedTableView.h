/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Snapchat/FriendsTableIndexDelegate.h>

@protocol SCIndexedTableViewDelegate, SCIndexedTableViewDataSource;
@class NSString, UITableView, NSDictionary, FriendsTableIndex, NSArray;

@interface SCIndexedTableView : UIView <UITableViewDelegate, UITableViewDataSource, FriendsTableIndexDelegate> {

	NSString* _quickAddString;
	BOOL _shouldMaskHeader;
	BOOL _bounces;
	UITableView* _tableView;
	id<SCIndexedTableViewDelegate> _delegate;
	id<SCIndexedTableViewDataSource> _dataSource;
	NSDictionary* _sectionToViewModelMap;
	long long _headerViewStyle;
	FriendsTableIndex* _tableIndex;
	NSArray* _sectionList;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) FriendsTableIndex * tableIndex;                                  //@synthesize tableIndex=_tableIndex - In the implementation block
@property (nonatomic,retain) NSArray * sectionList;                                           //@synthesize sectionList=_sectionList - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                         //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<SCIndexedTableViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCIndexedTableViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSDictionary * sectionToViewModelMap;                            //@synthesize sectionToViewModelMap=_sectionToViewModelMap - In the implementation block
@property (assign,nonatomic) BOOL shouldMaskHeader;                                           //@synthesize shouldMaskHeader=_shouldMaskHeader - In the implementation block
@property (assign,nonatomic) BOOL bounces;                                                    //@synthesize bounces=_bounces - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                       //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) long long headerViewStyle;                                       //@synthesize headerViewStyle=_headerViewStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 quickAddString:(id)arg2 ;
-(void)setHeaderViewStyle:(long long)arg1 ;
-(void)setTableStyle:(long long)arg1 ;
-(void)setSectionToViewModelMap:(NSDictionary *)arg1 ;
-(void)setIndexStyle:(long long)arg1 ;
-(UIEdgeInsets)getContentInset;
-(void)scrollToIndex:(char)arg1 ;
-(BOOL)_shouldAddIndexView:(long long)arg1 ;
-(NSDictionary *)sectionToViewModelMap;
-(id)viewModelsForSection:(long long)arg1 ;
-(long long)isSectionHidden:(long long)arg1 ;
-(BOOL)shouldMaskHeader;
-(void)headerViewStyle:(long long)arg1 ;
-(long long)getSectionTypeForIndexPath:(id)arg1 ;
-(id)cellForViewModel:(id)arg1 ;
-(BOOL)getBounces;
-(void)setShouldMaskHeader:(BOOL)arg1 ;
-(long long)headerViewStyle;
-(void)setDataSource:(id<SCIndexedTableViewDataSource>)arg1 ;
-(void)setDelegate:(id<SCIndexedTableViewDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<SCIndexedTableViewDataSource>)dataSource;
-(id<SCIndexedTableViewDelegate>)delegate;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setBounces:(BOOL)arg1 ;
-(BOOL)bounces;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(id)cellForIndexPath:(id)arg1 ;
-(void)setTableIndex:(FriendsTableIndex *)arg1 ;
-(FriendsTableIndex *)tableIndex;
-(void)setFooter:(id)arg1 ;
-(NSArray *)sectionList;
-(void)setSectionList:(NSArray *)arg1 ;
@end
