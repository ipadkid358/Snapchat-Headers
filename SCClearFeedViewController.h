/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <Snapchat/SCClearFeedTableViewDelegate.h>

@class SCClearFeedTableView, UIView, NSString;

@interface SCClearFeedViewController : SCGenericSettingsViewController <SCClearFeedTableViewDelegate> {

	SCClearFeedTableView* _feedTableView;
	UIView* _clearingLoadingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(double)preferredRightButtonWidth;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(id)getTitle;
-(id)getPageViewName;
-(void)updateViewVisibilities;
-(id)clearingLoadingView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLoad;
-(void)clearAll;
-(void)setupTableView;
@end

