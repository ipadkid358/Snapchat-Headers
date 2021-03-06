/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSmartSwipeFilterView.h>
#import <Snapchat/SCImageProcessColorFilterSessionListener.h>

@class SCFuture, SCMediaFilterView, SCImageProcessColorFilterSession, NSArray, SCImageProcessCommand, UIImage, NSString;

@interface SCSmartImageSwipeFilterView : SCSmartSwipeFilterView <SCImageProcessColorFilterSessionListener> {

	SCFuture* _scaledImage;
	SCMediaFilterView* _imageMediaView;
	SCImageProcessColorFilterSession* _imageProcessPixelSession;
	NSArray* _commands;
	SCImageProcessCommand* _unfilteredCommand;
	BOOL _isDancingGhostAnimating;
	SCImageProcessCommand* _pixelationCommand;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                                                      //@synthesize image=_image - In the implementation block
@property (assign,nonatomic,__weak) id<SCSmartImageSwipeFilterViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_scaleImageFromOriginalImage:(id)arg1 maxPixelSize:(double)arg2 ;
+(CGSize)_scaleSizeFromOriginalImage:(id)arg1 maxPixelSize:(double)arg2 ;
-(void)setViewportTransform:(CGAffineTransform)arg1 ;
-(void)setBackgroundBlackValue:(double)arg1 duration:(double)arg2 ;
-(void)colorFilterSessionDidRenderImage:(id)arg1 ;
-(void)filteredImageWithCroppingAspectRatio:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)takeScreenshotWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startDisplay;
-(void)stopDisplay;
-(void)lensAppliedImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetLayoutWithOrientation:(long long)arg1 ;
-(void)updateColorFilterSessionPostProcessCommandsWithPixelationMaskData:(id)arg1 pixelType:(long long)arg2 maskSize:(CGSize)arg3 ;
-(void)setDancingGhostAnimating:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 filterArranger:(id)arg2 commonLoggingParameters:(id)arg3 geofilterLogger:(id)arg4 isLagunaMedia:(BOOL)arg5 userSession:(id)arg6 ;
-(void)updateLensProcessingCommandWithLens:(id)arg1 recordingMetadata:(id)arg2 lensCommandDelegate:(id)arg3 ;
-(void)filteredImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)filterArrangerDidChangeDataProvider:(id)arg1 ;
-(void)updateMediaFiltersAndCommands;
-(void)_updateCommands;
-(void)updateMediaFilterMaskForItem:(id)arg1 relativeOffset:(double)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(UIImage *)image;
@end

