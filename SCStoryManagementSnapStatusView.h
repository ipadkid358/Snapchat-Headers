/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol SCStoryManagementSnapStatusViewDelegate;
@class UIView, SCLoadingIndicatorView, UILabel, UIImageView;

@interface SCStoryManagementSnapStatusView : UIView {

	UIView* _uploadingView;
	SCLoadingIndicatorView* _uploadingIndicatorView;
	UILabel* _uploadingTextLabel;
	UILabel* _noViewerTextLabel;
	UIView* _failedToUploadView;
	UIImageView* _failedToUploadIcon;
	UILabel* _failedToUploadLabel;
	id<SCStoryManagementSnapStatusViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCStoryManagementSnapStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_layoutUploadingView;
-(void)_layoutNoViewerView;
-(void)_layoutFailedToUploadView;
-(void)_setUpUploadingViewIfNecessary;
-(void)_setUpNoViewerViewIfNecessary;
-(void)_setUpFailedToUploadViewIfNecessary;
-(void)_handleFailedToUploadViewTap:(id)arg1 ;
-(void)showUploadingView;
-(void)showNoViewerView;
-(void)showFailedToUploadView;
-(void)hideStatusView;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCStoryManagementSnapStatusViewDelegate>)arg1 ;
-(id<SCStoryManagementSnapStatusViewDelegate>)delegate;
@end

