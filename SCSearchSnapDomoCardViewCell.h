/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchCollectionViewCell.h>
#import <Snapchat/SCSearchActionable.h>
#import <Snapchat/SCSearchEventAnnouncing.h>
#import <Snapchat/SCSearchEventListener.h>

@protocol SCSearchActionHandling, SCSearchItemDownloading;
@class SCSearchNetworkImageView, UILabel, SCSearchActionModel, SCSearchEventListenerAnnouncer, NSString;

@interface SCSearchSnapDomoCardViewCell : SCSearchCollectionViewCell <SCSearchActionable, SCSearchEventAnnouncing, SCSearchEventListener> {

	SCSearchNetworkImageView* _thumbnailImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _taskTypeLabel;
	SCSearchActionModel* _singleTapActionModel;
	SCSearchActionModel* _longTapActionModel;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	id<SCSearchActionHandling> _actionHandler;
	id _viewModel;
	id<SCSearchItemDownloading> _imageDownloader;

}

@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<SCSearchActionHandling> actionHandler;                 //@synthesize actionHandler=_actionHandler - In the implementation block
+(id)announcerIdentifier;
+(CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(void)_layoutWithViewModel;
-(BOOL)hasOverridedTapAction;
-(void)handleTapAction;
-(BOOL)hasOverridedLongPressAction;
-(void)handleLongPressAction;
-(id<SCSearchItemDownloading>)imageDownloader;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setActionHandler:(id<SCSearchActionHandling>)arg1 ;
-(id<SCSearchActionHandling>)actionHandler;
@end

