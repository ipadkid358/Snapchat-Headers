/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Snapchat/SCStoryManagementUploadedSnapOperaViewDelegate.h>

@protocol SCStoryManagementOperaLayerViewDelegate;
@class SCStoryManagementUploadingIndicatorView, SCStoryManagementFailedToPostButton, SCStoryManagementUploadedSnapOperaView, NSString;

@interface SCStoryManagementOperaLayerView : UIView <SCStoryManagementUploadedSnapOperaViewDelegate> {

	SCStoryManagementUploadingIndicatorView* _uploadingView;
	SCStoryManagementFailedToPostButton* _failedToPostButton;
	SCStoryManagementUploadedSnapOperaView* _uploadedSnapOperaView;
	id<SCStoryManagementOperaLayerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCStoryManagementOperaLayerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layoutUploadingViewIfNecessary;
-(void)_layoutFailedToUploadViewIfNecessary;
-(void)_layoutUploadedViewIfNecessary;
-(void)_updateUploadingViewBasedOnUploadStatus:(long long)arg1 ;
-(void)_updateFailedToUploadViewBasedOnUploadStatus:(long long)arg1 ;
-(void)_updateUploadedViewBasedOnSnapDataModel:(id)arg1 ;
-(void)_didTapFailedToPostButton;
-(void)updateViewBasedOnSnapDataModel:(id)arg1 ;
-(void)storyManagementUploadedSnapOperaViewDidTapViewersTag:(id)arg1 ;
-(void)storyManagementUploadedSnapOperaViewDidTapSaveButton:(id)arg1 ;
-(void)storyManagementUploadedSnapOperaViewDidTapDeleteButton:(id)arg1 ;
-(void)_setUpUploadingViewIfNecessary;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCStoryManagementOperaLayerViewDelegate>)arg1 ;
-(id<SCStoryManagementOperaLayerViewDelegate>)delegate;
@end
