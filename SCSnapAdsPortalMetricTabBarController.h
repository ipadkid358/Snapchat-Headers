/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsPortalMetricTabBarDelegate.h>

@class NSArray, SCSnapAdsPortalHierarchyPageController, SCSnapAdsPortalMetricTabBar, NSString;

@interface SCSnapAdsPortalMetricTabBarController : NSObject <SCSnapAdsPortalMetricTabBarDelegate> {

	NSArray* _metricTabs;
	unsigned long long _focusedMetricType;
	SCSnapAdsPortalHierarchyPageController* _parentViewController;
	SCSnapAdsPortalMetricTabBar* _tabBar;

}

@property (nonatomic,readonly) SCSnapAdsPortalMetricTabBar * tabBar;              //@synthesize tabBar=_tabBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithParentViewController:(id)arg1 focusedMetricType:(unsigned long long)arg2 ;
-(void)loadMetricTypes:(id)arg1 summaries:(id)arg2 ;
-(void)didSelectMetricTabAtIndex:(long long)arg1 ;
-(void)_initTabBar;
-(void)_scrollToMetric:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateWithFocusedTypeIndex:(double)arg1 ;
-(void)didSelectMetric:(unsigned long long)arg1 ;
-(unsigned long long)focusedMetric;
-(void)loadView;
-(SCSnapAdsPortalMetricTabBar *)tabBar;
-(void)cleanup;
-(void)viewDidAppear;
@end
