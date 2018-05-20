/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCChatSingleMediaThumbnailView.h>

@protocol SCChatFullscreenMediaChatTableCellDelegate;
@class SCBaseMediaThumbnailView, NSString;

@interface SCAdShareMediaThumbnailView : UIView <SCChatSingleMediaThumbnailView> {

	id<SCChatFullscreenMediaChatTableCellDelegate> _delegate;
	SCBaseMediaThumbnailView* _baseMediaThumbnailView;
	NSString* _mediaId;

}

@property (nonatomic,readonly) SCBaseMediaThumbnailView * baseMediaThumbnailView;              //@synthesize baseMediaThumbnailView=_baseMediaThumbnailView - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaId;                                        //@synthesize mediaId=_mediaId - In the implementation block
-(void)resumeVideo;
-(void)resetContents;
-(void)dismissFullScreenView;
-(BOOL)fullScreenIsShown;
-(void)resetWithOriginalSettings;
-(void)rerenderForActionMenuWithBoundingSize:(CGSize)arg1 ;
-(id)initWithParentVC:(id)arg1 delegate:(id)arg2 ;
-(void)setMediaViewModel:(id)arg1 ;
-(void)_initBaseMediaThumbnailViewWithParentVC:(id)arg1 delegate:(id)arg2 ;
-(void)prepareVideoIfNecessary;
-(SCBaseMediaThumbnailView *)baseMediaThumbnailView;
-(void)resetPlayer;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)pauseVideo;
-(NSString *)mediaId;
@end

