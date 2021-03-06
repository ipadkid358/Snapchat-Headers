/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <UIKit/UITableViewDataSource.h>

@class SCUserSession, UIImageView, UIView, UITableView, UILabel, UIButton, SCBitmojiWhyFullAccessView, NSArray, NSString;

@interface SCBitmojiOnboardingInstructionViewController : SCGenericSettingsViewController <UITableViewDataSource> {

	SCUserSession* _userSession;
	UIImageView* _avatarImageView;
	UIView* _tableWrapperView;
	UITableView* _tableView;
	UILabel* _label;
	UIButton* _whyFullAccessButton;
	SCBitmojiWhyFullAccessView* _whyFullAccessView;
	NSArray* _instructions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(id)getTitle;
-(id)stringWithSize:(double)arg1 format:(id)arg2 ;
-(void)didPressWhyFullAccessButton;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
@end

