/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSString;

@interface SendMeSnapsSettingsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate> {

	long long _sendMeSnapsSetting;
	UITableView* _table;

}

@property (assign,nonatomic) long long sendMeSnapsSetting;              //@synthesize sendMeSnapsSetting=_sendMeSnapsSetting - In the implementation block
@property (nonatomic,retain) UITableView * table;                       //@synthesize table=_table - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftSwipePrepare;
-(id)getTitle;
-(void)saveSetting;
-(id)getPageViewName;
-(void)setSendMeSnapsSetting:(long long)arg1 ;
-(long long)sendMeSnapsSetting;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLoad;
-(UITableView *)table;
-(void)setTable:(UITableView *)arg1 ;
@end

