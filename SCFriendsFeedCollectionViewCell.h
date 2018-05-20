/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Snapchat/SCFriendsFeedComponentViewActionDelegate.h>
#import <Snapchat/SCSearchViewModelConfigurable.h>
#import <Snapchat/SCSearchActionable.h>

@protocol SCSearchActionHandling;
@class SCFriendsFeedComponentView, NSString;

@interface SCFriendsFeedCollectionViewCell : UICollectionViewCell <SCFriendsFeedComponentViewActionDelegate, SCSearchViewModelConfigurable, SCSearchActionable> {

	id _viewModel;
	id<SCSearchActionHandling> _actionHandler;
	SCFriendsFeedComponentView* _componentView;

}

@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader; 
@property (nonatomic,readonly) SCFriendsFeedComponentView * componentView;              //@synthesize componentView=_componentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id viewModel;                                              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) id<SCSearchActionHandling> actionHandler;                  //@synthesize actionHandler=_actionHandler - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(id<SCSearchItemDownloading>)imageDownloader;
-(void)friendsFeedComponentView:(id)arg1 didTriggerAction:(id)arg2 withGesture:(id)arg3 fromSourceView:(id)arg4 ;
-(SCFriendsFeedComponentView *)componentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
-(void)setActionHandler:(id<SCSearchActionHandling>)arg1 ;
-(id<SCSearchActionHandling>)actionHandler;
@end
