/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCCheetahStoriesAccessoryLoadingViewDelegate;
@class UILabel, UIImageView;

@interface SCCheetahStoriesAccessoryLoadingView : UIView {

	UILabel* _titleLabel;
	UIImageView* _imageView;
	id<SCCheetahStoriesAccessoryLoadingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCCheetahStoriesAccessoryLoadingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_swipeGestureUp:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCCheetahStoriesAccessoryLoadingViewDelegate>)arg1 ;
-(id<SCCheetahStoriesAccessoryLoadingViewDelegate>)delegate;
-(double)contentWidth;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(void)_tapGesture:(id)arg1 ;
@end

