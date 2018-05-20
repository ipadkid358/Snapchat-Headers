/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, UILabel, SCDiscoverFeedDynamicReplayOverlayViewModel;

@interface SCDiscoverFeedDynamicReplayOverlayView : UIView {

	UIView* _maskOverlay;
	UIImageView* _primaryIconImageView;
	UIImageView* _secondaryIconImageView;
	UILabel* _primaryIconSubtitle;
	UILabel* _secondaryIconSubtitle;
	UILabel* _replayOverlayTitle;
	SCDiscoverFeedDynamicReplayOverlayViewModel* _viewModel;

}

@property (nonatomic,copy) SCDiscoverFeedDynamicReplayOverlayViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SCDiscoverFeedDynamicReplayOverlayViewModel *)viewModel;
-(void)setViewModel:(SCDiscoverFeedDynamicReplayOverlayViewModel *)arg1 ;
@end
