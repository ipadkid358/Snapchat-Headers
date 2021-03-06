/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Snapchat/SCGalleryHighlightViewCellProtocol.h>
#import <Snapchat/SCGalleryViewCellSelecting.h>
#import <Snapchat/SCGalleryCellTransitioning.h>
#import <Snapchat/SCGalleryEntrySyncStatusGeneratorDelegate.h>

@protocol SCGallerySnap, SCCachingMediaRequest, SCCanceling, SCGalleryHighlightViewCellDelegate;
@class SCUserSession, UIView, FLAnimatedImageView, UIImageView, SCGalleryEntrySyncStatusGenerator, CAShapeLayer, UIButton, NSString;

@interface SCGalleryHighlightViewCell : UICollectionViewCell <SCGalleryHighlightViewCellProtocol, SCGalleryViewCellSelecting, SCGalleryCellTransitioning, SCGalleryEntrySyncStatusGeneratorDelegate> {

	id<SCGallerySnap> _snap;
	SCUserSession* _userSession;
	id<SCCachingMediaRequest> _mediaRequest;
	id<SCCanceling> _miniThumbnailRequest;
	UIView* _container;
	FLAnimatedImageView* _imageView;
	UIImageView* _lagunaIcon;
	SCGalleryEntrySyncStatusGenerator* _syncStatusGenerator;
	SCD_Struct_SC329 _mediaScenePath;
	BOOL _shouldStartGeneratingUpdates;
	CAShapeLayer* _roundCornerMaskLayer;
	CGSize _targetSize;
	UIButton* _deleteButton;
	unsigned long long _cornerToRound;
	id<SCGalleryHighlightViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGalleryHighlightViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelectedWithMode:(unsigned long long)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3 ;
-(void)startGeneratingUpdates;
-(void)setSelectedWithMode:(unsigned long long)arg1 forSnap:(id)arg2 selectOverlayImage:(id)arg3 ;
-(void)enterSelectionMode:(unsigned long long)arg1 ;
-(void)exitSelectionMode;
-(unsigned long long)selectionModeAtTouchLocation:(CGPoint)arg1 ;
-(void)animateLongTapForTouchLocation:(CGPoint)arg1 reverse:(BOOL)arg2 ;
-(unsigned long long)interactionMode;
-(void)setInitialImage:(id)arg1 ;
-(void)setSnap:(id)arg1 targetSize:(CGSize)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 contentsUnloaded:(BOOL)arg4 userSession:(id)arg5 ;
-(void)stopGeneratingUpdates;
-(void)entrySyncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2 ;
-(id)posterFrameForMode:(unsigned long long)arg1 ;
-(id)imageForMode:(unsigned long long)arg1 ;
-(id)expandingViewForMode:(unsigned long long)arg1 ;
-(id)itemForMode:(unsigned long long)arg1 ;
-(void)_requestThumbnail:(id)arg1 ;
-(void)_requestImage:(id)arg1 ;
-(void)_updateImage:(id)arg1 ;
-(void)roundCorner:(unsigned long long)arg1 ;
-(void)_handleDelete;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCGalleryHighlightViewCellDelegate>)arg1 ;
-(void)dealloc;
-(id<SCGalleryHighlightViewCellDelegate>)delegate;
-(void)prepareForReuse;
@end

