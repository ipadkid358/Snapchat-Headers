/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SelectFriendsViewController.h>
#import <Snapchat/SelectFriendsViewControllerDataSource.h>

@protocol CustomStoryViewersViewControllerDelegate;
@class NSString;

@interface CustomStoryViewersViewController : SelectFriendsViewController <SelectFriendsViewControllerDataSource> {

	BOOL _modifiedSettings;
	id<CustomStoryViewersViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CustomStoryViewersViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL modifiedSettings;                                                     //@synthesize modifiedSettings=_modifiedSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)getTitle;
-(void)setModifiedSettings:(BOOL)arg1 ;
-(void)didSelectCell:(id)arg1 ;
-(void)selectFriends:(id)arg1 ;
-(BOOL)modifiedSettings;
-(id)friendsToNotInclude;
-(id)reloadSectionFriends;
-(id)reloadSectionFriendKeys;
-(void)setDelegate:(id<CustomStoryViewersViewControllerDelegate>)arg1 ;
-(id<CustomStoryViewersViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

