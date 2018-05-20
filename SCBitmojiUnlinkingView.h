/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SCBitmojiUnlinkingViewDelegate;
@class UITableView, SCAlertViewActionButton, UILabel, SCLoadingIndicatorView, UIImageView, NSString;

@interface SCBitmojiUnlinkingView : UIView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	SCAlertViewActionButton* _unlinkButton;
	UILabel* _unlinkLabel;
	SCLoadingIndicatorView* _loadingIndicator;
	UIImageView* _avatarImageView;
	unsigned long long _numOfRows;
	id<SCBitmojiUnlinkingViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)view:(id)arg1 ;
-(void)updateAvatarImage:(id)arg1 ;
-(void)setUnLinkButtonSelected:(BOOL)arg1 ;
-(id)getChangeOutfitCell;
-(id)getChangeSelfieCell;
-(id)_cellWithIndex:(long long)arg1 ;
-(void)unlinkButtonPressed;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)refreshState;
@end
