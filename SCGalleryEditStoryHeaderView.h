/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <Snapchat/SCGalleryEntryThumbnailGeneratorDelegate.h>

@protocol SCGalleryEntry, SCGalleryEditStoryHeaderViewDelegate;
@class UIView, FLAnimatedImageView, UILabel, SCGalleryEntryThumbnailGenerator, NSString;

@interface SCGalleryEditStoryHeaderView : UICollectionReusableView <SCGalleryEntryThumbnailGeneratorDelegate> {

	id<SCGalleryEntry> _entry;
	UIView* _storyContainer;
	FLAnimatedImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	SCGalleryEntryThumbnailGenerator* _thumbnailGenerator;
	id<SCGalleryEditStoryHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGalleryEditStoryHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)headerSize;
-(void)thumbnailGenerator:(id)arg1 didUpdateSnapThumbnailWithImageGenerating:(id)arg2 snap:(id)arg3 duration:(double)arg4 fromCache:(BOOL)arg5 isFramed:(BOOL)arg6 ;
-(void)thumbnailGenerator:(id)arg1 didUpdateStoryThumbnailWithImage:(id)arg2 snap:(id)arg3 fromCache:(BOOL)arg4 isFramed:(BOOL)arg5 ;
-(void)thumbnailGenerator:(id)arg1 didUpdateStoryThumbnailWithImage:(id)arg2 highlightedImage:(id)arg3 snap:(id)arg4 fromCache:(BOOL)arg5 isFramed:(BOOL)arg6 ;
-(void)thumbnailGenerator:(id)arg1 didLoadMiniThumbnail:(id)arg2 snap:(id)arg3 loadingLatency:(double)arg4 ;
-(void)thumbnailGenerator:(id)arg1 didLoadPosterFrame:(id)arg2 snap:(id)arg3 ;
-(void)thumbnailGenerator:(id)arg1 didLoadThumbnail:(BOOL)arg2 ;
-(void)_animateTap:(BOOL)arg1 ;
-(id)viewForTransition;
-(void)setEntry:(id)arg1 userSession:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SCGalleryEditStoryHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SCGalleryEditStoryHeaderViewDelegate>)delegate;
-(void)_handleLongPressGesture:(id)arg1 ;
@end

