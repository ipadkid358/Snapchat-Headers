/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Snapchat/SCGalleryEntryThumbnailGeneratorDelegate.h>
#import <Snapchat/SCProgressReceiving.h>
#import <Snapchat/SCGalleryEntrySyncStatusGeneratorDelegate.h>
#import <Snapchat/SCGalleryFaceManagerListener.h>
#import <Snapchat/SCGalleryEntryViewCellProtocol.h>
#import <Snapchat/SCGalleryViewCellScreenPosition.h>

@protocol SCGalleryEntryViewCellDelegate, SCGalleryEntry;
@class UIView, FLAnimatedImageView, UIImageView, SCSentinel, SCUserSession, NSArray, SCGalleryEntryThumbnailGenerator, SCGalleryEntrySyncStatusGenerator, SCGalleryDebugSyncStatusChecker, SCGalleryDebugSyncStatusView, NSTimer, UIImage, SCLoadingIndicatorView, CAShapeLayer, SCMemoriesStatusIcon, NSDictionary, UILabel, NSString;

@interface SCGalleryEntryViewCell : UICollectionViewCell <SCGalleryEntryThumbnailGeneratorDelegate, SCProgressReceiving, SCGalleryEntrySyncStatusGeneratorDelegate, SCGalleryFaceManagerListener, SCGalleryEntryViewCellProtocol, SCGalleryViewCellScreenPosition> {

	id<SCGalleryEntryViewCellDelegate> _delegate;
	UIView* _contentWrapperView;
	UIView* _imageWrapperView;
	FLAnimatedImageView* _imageView;
	UIImageView* _storyOverlayView;
	UIView* _selectedOverlayView;
	SCSentinel* _sentinel;
	SCUserSession* _userSession;
	id<SCGalleryEntry> _entry;
	NSArray* _snaps;
	CGSize _targetSize;
	SCD_Struct_SC329 _mediaScenePath;
	double _delayOfUpdatingStoryThumbnail;
	BOOL _contentsUnloaded;
	SCGalleryEntryThumbnailGenerator* _thumbnailGenerator;
	SCGalleryEntrySyncStatusGenerator* _syncStatusGenerator;
	SCGalleryDebugSyncStatusChecker* _debugSyncStatusChecker;
	SCGalleryDebugSyncStatusView* _debugSyncStatusView;
	NSTimer* _thumbnailLatency10secTimer;
	UIImage* _posterFrame;
	BOOL _shouldStartGeneratingUpdates;
	unsigned long long _selectMode;
	unsigned long long _selectionMode;
	SCLoadingIndicatorView* _loadingIndicator;
	CAShapeLayer* _roundCornerMaskLayer;
	unsigned long long _cornerToRound;
	BOOL _isEntryClientCompatible;
	SCMemoriesStatusIcon* _incompatibleIcon;
	NSDictionary* _mediaIdToFaces;
	UILabel* _facesLabel;
	BOOL _hasProcessedPreloadLogic;
	BOOL _shouldShowBlackOverlay;

}

@property (assign,nonatomic) BOOL shouldShowBlackOverlay;              //@synthesize shouldShowBlackOverlay=_shouldShowBlackOverlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reporterWithIdentifier:(id)arg1 didReportProgress:(/*^block*/id)arg2 ;
-(void)setEntry:(id)arg1 targetSize:(CGSize)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 delayOfUpdatingStoryThumbnail:(double)arg4 contentsUnloaded:(BOOL)arg5 selectMode:(unsigned long long)arg6 debugSyncStatusChecker:(id)arg7 userSession:(id)arg8 delegate:(id)arg9 ;
-(void)setSelectedWithMode:(unsigned long long)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3 ;
-(void)startGeneratingUpdates;
-(void)setSelectedWithMode:(unsigned long long)arg1 forSnap:(id)arg2 selectOverlayImage:(id)arg3 ;
-(void)enterSelectionMode:(unsigned long long)arg1 ;
-(void)exitSelectionMode;
-(unsigned long long)selectionModeAtTouchLocation:(CGPoint)arg1 ;
-(void)animateLongTapForTouchLocation:(CGPoint)arg1 reverse:(BOOL)arg2 ;
-(unsigned long long)interactionMode;
-(void)setInitialImage:(id)arg1 ;
-(void)stopGeneratingUpdates;
-(void)_startThumbnailLatencyTimers;
-(void)_stopLoading;
-(void)_thumbnailLatencyTimerDidFire:(id)arg1 ;
-(void)thumbnailGenerator:(id)arg1 didUpdateSnapThumbnailWithImageGenerating:(id)arg2 snap:(id)arg3 duration:(double)arg4 fromCache:(BOOL)arg5 isFramed:(BOOL)arg6 ;
-(void)thumbnailGenerator:(id)arg1 didUpdateStoryThumbnailWithImage:(id)arg2 snap:(id)arg3 fromCache:(BOOL)arg4 isFramed:(BOOL)arg5 ;
-(void)thumbnailGenerator:(id)arg1 didUpdateStoryThumbnailWithImage:(id)arg2 highlightedImage:(id)arg3 snap:(id)arg4 fromCache:(BOOL)arg5 isFramed:(BOOL)arg6 ;
-(void)thumbnailGenerator:(id)arg1 didLoadMiniThumbnail:(id)arg2 snap:(id)arg3 loadingLatency:(double)arg4 ;
-(void)thumbnailGenerator:(id)arg1 didLoadPosterFrame:(id)arg2 snap:(id)arg3 ;
-(void)thumbnailGenerator:(id)arg1 didLoadThumbnail:(BOOL)arg2 ;
-(void)entrySyncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2 ;
-(id)posterFrameForMode:(unsigned long long)arg1 ;
-(id)imageForMode:(unsigned long long)arg1 ;
-(id)expandingViewForMode:(unsigned long long)arg1 ;
-(id)itemForMode:(unsigned long long)arg1 ;
-(void)_fetchFacesForCurrentSnapsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateWrapperViewWithGalleryType:(int)arg1 ;
-(void)roundCorner:(unsigned long long)arg1 ;
-(void)_updateFaceInfoWithSnap:(id)arg1 ;
-(void)_setFullImage:(id)arg1 forSnap:(id)arg2 ;
-(void)setShouldShowBlackOverlay:(BOOL)arg1 ;
-(void)_showIncompatibleIcon:(BOOL)arg1 ;
-(void)faceManager:(id)arg1 didFaceScanGallerySnaps:(id)arg2 ;
-(void)toggleDebugSyncStatusView;
-(void)viewIsFullyVisibleOnScreen:(BOOL)arg1 inSelectMode:(BOOL)arg2 ;
-(BOOL)shouldShowBlackOverlay;
-(void)_invalidateTimers;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)prepareForReuse;
-(void)_startLoading;
@end

