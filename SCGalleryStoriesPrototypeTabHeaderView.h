/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol SCGalleryStoriesPrototypeTabHeaderViewDelegate;
@class UILabel, UIView, UIImageView, SCLoadingIndicatorView;

@interface SCGalleryStoriesPrototypeTabHeaderView : UICollectionReusableView {

	UILabel* _label;
	UIView* _clusterButton;
	UIImageView* _doneIcon;
	SCLoadingIndicatorView* _loadingIndicator;
	id<SCGalleryStoriesPrototypeTabHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGalleryStoriesPrototypeTabHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_reClusterTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SCGalleryStoriesPrototypeTabHeaderViewDelegate>)arg1 ;
-(id<SCGalleryStoriesPrototypeTabHeaderViewDelegate>)delegate;
-(double)headerHeight;
@end

