/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class SCMetricsChart, SCLoadingIndicatorView, UILabel;

@interface SCSnapAdsPortalMetricViewCell : UITableViewCell {

	SCMetricsChart* _chart;
	SCLoadingIndicatorView* _indicator;
	UILabel* _notAvailableLabel;

}

@property (nonatomic,retain) SCLoadingIndicatorView * indicator;              //@synthesize indicator=_indicator - In the implementation block
@property (nonatomic,retain) UILabel * notAvailableLabel;                     //@synthesize notAvailableLabel=_notAvailableLabel - In the implementation block
-(UILabel *)notAvailableLabel;
-(void)showCardLoading:(BOOL)arg1 ;
-(void)showMetricsNotAvailable:(BOOL)arg1 ;
-(void)showMetricsWithChartMode:(unsigned long long)arg1 dataSet:(id)arg2 ;
-(void)updateCardWithSummary:(id)arg1 ;
-(void)setNotAvailableLabel:(UILabel *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setIndicator:(SCLoadingIndicatorView *)arg1 ;
-(SCLoadingIndicatorView *)indicator;
@end

