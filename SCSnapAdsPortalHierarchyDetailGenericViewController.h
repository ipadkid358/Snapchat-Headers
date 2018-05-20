/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsPortalGenericTableViewController.h>

@class NSDateFormatter, SCSnapAdsPortalEntity;

@interface SCSnapAdsPortalHierarchyDetailGenericViewController : SCSnapAdsPortalGenericTableViewController {

	NSDateFormatter* _dateFormatter;
	SCSnapAdsPortalEntity* _currentEntity;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;                    //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) SCSnapAdsPortalEntity * currentEntity;              //@synthesize currentEntity=_currentEntity - In the implementation block
-(SCSnapAdsPortalEntity *)currentEntity;
-(id)_titleTextForDetailType:(long long)arg1 ;
-(id)_detailTextForDetailType:(long long)arg1 ;
-(void)setCurrentEntity:(SCSnapAdsPortalEntity *)arg1 ;
-(id)initWithEntity:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
@end
