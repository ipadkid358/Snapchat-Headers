/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Snapchat/SCProfileHeaderStoryViewDelegate.h>

@protocol SCProfileHeaderAvatarViewDelegate, SCSearchItemDownloading;
@class SCLazy;

@interface SCProfileHeaderAvatarView : UIView <SCProfileHeaderStoryViewDelegate> {

	SCLazy* _bitmojiAvatarView;
	SCLazy* _profileHeaderStoryView;
	SCLazy* _profileHeaderSharedStoryView;
	id<SCProfileHeaderAvatarViewDelegate> _delegate;
	id<SCSearchItemDownloading> _imageDownloader;

}

@property (assign,nonatomic,__weak) id<SCProfileHeaderAvatarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader;                        //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) unsigned long long displayMode; 
-(id)initWithContexts:(id)arg1 ;
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(id<SCSearchItemDownloading>)imageDownloader;
-(void)_showProfileHeaderStoryView;
-(void)_showProfileHeaderSharedStoryView;
-(id)_friendStoriesForUsername:(id)arg1 ;
-(void)updateWithStoryConfiguration:(id)arg1 ;
-(void)_showBitmojiView;
-(void)_springAnimateViewWithSharedStoryViewHidden:(id)arg1 ;
-(void)didFinishSharedStoryUploadWithPreviousMode:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCProfileHeaderAvatarViewDelegate>)arg1 ;
-(id<SCProfileHeaderAvatarViewDelegate>)delegate;
-(unsigned long long)displayMode;
@end
