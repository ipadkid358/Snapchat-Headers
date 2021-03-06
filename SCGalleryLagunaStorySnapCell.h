/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGalleryBaseStorySnapCell.h>
#import <Snapchat/SCGalleryLagunaContentListener.h>

@protocol SCGalleryLagunaStorySnapCellListener;
@class SCGalleryLagunaStorySnapCellProgressView, UIImageView, SCGalleryLagunaContentLoader, UIView, CAShapeLayer, SCGalleryLagunaStorySnapCellModel, NSString;

@interface SCGalleryLagunaStorySnapCell : SCGalleryBaseStorySnapCell <SCGalleryLagunaContentListener> {

	SCGalleryLagunaStorySnapCellProgressView* _progressView;
	UIImageView* _greyscaleImageView;
	SCGalleryLagunaContentLoader* _contentLoader;
	id<SCGalleryLagunaStorySnapCellListener> _listener;
	UIImageView* _highlightIcon;
	UIView* _newSnapIndicator;
	CAShapeLayer* _newSnapIndicatorLayer;
	BOOL _shouldShowIndicator;
	UIImageView* _imageOverlay;
	SCGalleryLagunaStorySnapCellModel* _model;
	unsigned long long _selectMode;

}

@property (nonatomic,readonly) SCGalleryLagunaStorySnapCellModel * model;              //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) unsigned long long selectMode;                          //@synthesize selectMode=_selectMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSnap:(id)arg1 storyViewModel:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 selectMode:(unsigned long long)arg4 userSession:(id)arg5 ;
-(void)setSelectedWithMode:(unsigned long long)arg1 selectOverlayImage:(id)arg2 animated:(BOOL)arg3 ;
-(id)sourceViewForOpera;
-(unsigned long long)selectMode;
-(void)updateIcon;
-(void)_didFetchImage:(id)arg1 ;
-(void)didReceiveDataForContentComponent:(unsigned long long)arg1 forContent:(id)arg2 ;
-(void)didFinishDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2 ;
-(void)didPauseForContentComponent:(unsigned long long)arg1 forContent:(id)arg2 ;
-(void)didInterruptDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2 ;
-(void)didCancelDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2 ;
-(void)showNewlyTransferIndicator:(BOOL)arg1 ;
-(void)setSnap:(id)arg1 storyViewModel:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 selectMode:(unsigned long long)arg4 userSession:(id)arg5 shouldShowIndicator:(BOOL)arg6 ;
-(BOOL)_selectionEnabled;
-(id)_convertImageToGrayScale:(id)arg1 ;
-(void)_animateImageView:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateImageViewState;
-(unsigned long long)_defaultAnimationOptions;
-(void)_resetImageViewState;
-(BOOL)_progressUpdateEnabledForContentComponent:(unsigned long long)arg1 ;
-(void)_updateModelWithState:(unsigned long long)arg1 progress:(double)arg2 ;
-(void)_updateModelWithStatePausedForContentComponent:(unsigned long long)arg1 ;
-(void)_updateModelWithState:(unsigned long long)arg1 image:(id)arg2 progress:(double)arg3 ;
-(void)_updateModelWithImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(SCGalleryLagunaStorySnapCellModel *)model;
-(void)setListener:(id)arg1 ;
-(void)updateUI;
-(void)setModel:(SCGalleryLagunaStorySnapCellModel *)arg1 ;
-(BOOL)isTransferring;
@end

