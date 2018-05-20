/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDownSwipableViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCHeaderDelegate.h>
#import <Snapchat/SCHeaderDataSource.h>
#import <Snapchat/SCSearchMetricsViewCellDelegate.h>

@protocol SCPerforming, SCSearchStoryMetricsViewControllerDelegate;
@class SCHeader, UITableView, SCSearchLoadingView, SCCheetahStory, SCUserSession, NSMutableArray, NSArray, BibEngagementResponse, NSString;

@interface SCSearchStoryMetricsViewController : SCDownSwipableViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, SCHeaderDelegate, SCHeaderDataSource, SCSearchMetricsViewCellDelegate> {

	SCHeader* _header;
	UITableView* _metricsView;
	SCSearchLoadingView* _loadingView;
	SCCheetahStory* _story;
	id<SCPerforming> _performer;
	SCUserSession* _userSession;
	NSMutableArray* _valuesArray;
	NSMutableArray* _imageArray;
	NSArray* _metricOrderArray;
	BibEngagementResponse* _metrics;
	long long _currentMetric;
	BOOL _hasLoaded;
	id<SCSearchStoryMetricsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSearchStoryMetricsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(void)_showLoadingIndicator;
-(void)downSwipeSucceed;
-(id)_formatNumber:(unsigned long long)arg1 ;
-(void)didSelectParameter:(long long)arg1 ;
-(void)_requestStoryMetricsData;
-(id)_textForDemographicCell;
-(id)_pointsForLineChart;
-(id)_ageData;
-(id)_genderData;
-(long long)_metric:(long long)arg1 fromEngmt:(id)arg2 ;
-(id)_stringForAge:(int)arg1 ;
-(id)_stringForGender:(int)arg1 ;
-(double)_getClickRate:(id)arg1 ;
-(void)_handleDebugResponseForData:(id)arg1 success:(BOOL)arg2 response:(id)arg3 ;
-(void)_populateValues:(id)arg1 ;
-(void)_showResponseFailureAlert:(id)arg1 ;
-(id)initWithStory:(id)arg1 userSession:(id)arg2 ;
-(void)setDelegate:(id<SCSearchStoryMetricsViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<SCSearchStoryMetricsViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)dismiss;
-(void)_hideLoadingIndicator;
-(void)startLoading;
@end
