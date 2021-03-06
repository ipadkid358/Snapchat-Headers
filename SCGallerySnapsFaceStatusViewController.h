/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGallerySnapsViewController.h>
#import <Snapchat/SCProgressOverlayViewDelegate.h>

@class NSMutableOrderedSet, NSMutableDictionary, SCProgressOverlayView, SCGallerySnapsFaceAnalysisOperation, NSString;

@interface SCGallerySnapsFaceStatusViewController : SCGallerySnapsViewController <SCProgressOverlayViewDelegate> {

	NSMutableOrderedSet* _scannedGallerySnapMediaIds;
	NSMutableDictionary* _gallerySnapMediaIdToBoundingBoxes;
	SCProgressOverlayView* _progressOverlayView;
	SCGallerySnapsFaceAnalysisOperation* _faceAnalysisOperation;

}

@property (nonatomic,retain) NSMutableOrderedSet * scannedGallerySnapMediaIds;                                //@synthesize scannedGallerySnapMediaIds=_scannedGallerySnapMediaIds - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * gallerySnapMediaIdToBoundingBoxes;                         //@synthesize gallerySnapMediaIdToBoundingBoxes=_gallerySnapMediaIdToBoundingBoxes - In the implementation block
@property (nonatomic,retain) SCProgressOverlayView * progressOverlayView;                                     //@synthesize progressOverlayView=_progressOverlayView - In the implementation block
@property (assign,nonatomic,__weak) SCGallerySnapsFaceAnalysisOperation * faceAnalysisOperation;              //@synthesize faceAnalysisOperation=_faceAnalysisOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)progressOverlayViewDidCancel:(id)arg1 ;
-(void)registerCellsForCollectionView:(id)arg1 ;
-(id)cellReuseIdentifierForSection:(long long)arg1 ;
-(void)didTapClose:(id)arg1 ;
-(void)didTapClear:(id)arg1 ;
-(void)didTapProcess:(id)arg1 ;
-(void)didTapCluster:(id)arg1 ;
-(void)setScannedGallerySnapMediaIds:(NSMutableOrderedSet *)arg1 ;
-(void)setGallerySnapMediaIdToBoundingBoxes:(NSMutableDictionary *)arg1 ;
-(NSMutableOrderedSet *)scannedGallerySnapMediaIds;
-(NSMutableDictionary *)gallerySnapMediaIdToBoundingBoxes;
-(void)setGallerySnaps:(id)arg1 reloadCollectionView:(BOOL)arg2 ;
-(void)clearFaceDataRequestingConfirmation:(BOOL)arg1 ;
-(void)processAllMemories:(BOOL)arg1 ;
-(SCGallerySnapsFaceAnalysisOperation *)faceAnalysisOperation;
-(SCProgressOverlayView *)progressOverlayView;
-(void)cleanupFaceAnalysisOperation;
-(void)setFaceAnalysisOperation:(SCGallerySnapsFaceAnalysisOperation *)arg1 ;
-(void)setProgressOverlayView:(SCProgressOverlayView *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end

