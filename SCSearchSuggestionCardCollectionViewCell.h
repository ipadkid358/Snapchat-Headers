/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchCollectionViewCell.h>
#import <Snapchat/SCSearchActionable.h>

@protocol SCSearchItemDownloaderHandling, SCSearchActionHandling;
@class UILabel, UIImageView, CAShapeLayer, SCSearchActionModel, SCSearchImageDownloader, NSString;

@interface SCSearchSuggestionCardCollectionViewCell : SCSearchCollectionViewCell <SCSearchActionable> {

	UILabel* _displayLabel;
	UIImageView* _image;
	CAShapeLayer* _borderMask;
	CGRect _previousBounds;
	id<SCSearchItemDownloaderHandling> _imageLoaderHandler;
	SCSearchActionModel* _singleTapActionModel;
	id _viewModel;
	id<SCSearchActionHandling> _actionHandler;
	SCSearchImageDownloader* _imageDownloader;

}

@property (nonatomic,retain) SCSearchImageDownloader * imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<SCSearchActionHandling> actionHandler;               //@synthesize actionHandler=_actionHandler - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(double)backgroundShapeViewShadowOpacity;
-(void)setImageDownloader:(SCSearchImageDownloader *)arg1 ;
-(BOOL)hasOverridedTapAction;
-(void)handleTapAction;
-(SCSearchImageDownloader *)imageDownloader;
-(void)_updateImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
-(void)setActionHandler:(id<SCSearchActionHandling>)arg1 ;
-(id<SCSearchActionHandling>)actionHandler;
@end
