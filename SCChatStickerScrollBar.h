/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIPanGestureRecognizer, UITapGestureRecognizer, NSMutableArray, UICollectionView, SCChatStickerManager;

@interface SCChatStickerScrollBar : UIView {

	UIView* _track;
	UIView* _slider;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	long long _rowsPerScroll;
	NSMutableArray* _originYs;
	BOOL _isPanning;
	UICollectionView* _collectionView;
	double _drawerHeight;
	SCChatStickerManager* _chatStickerManager;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;               //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) double drawerHeight;                                    //@synthesize drawerHeight=_drawerHeight - In the implementation block
@property (nonatomic,readonly) BOOL isPanning;                                       //@synthesize isPanning=_isPanning - In the implementation block
@property (nonatomic,retain) SCChatStickerManager * chatStickerManager;              //@synthesize chatStickerManager=_chatStickerManager - In the implementation block
+(id)colorForStickerScrollTrack;
+(id)colorForStickerScrollSlider;
-(SCChatStickerManager *)chatStickerManager;
-(void)setChatStickerManager:(SCChatStickerManager *)arg1 ;
-(void)_handlePanning:(id)arg1 ;
-(void)_handleTapping:(id)arg1 ;
-(BOOL)_shouldRecognizeGestureWithLocation:(CGPoint)arg1 ;
-(void)_updateSliderWithLocation:(CGPoint)arg1 sliderStyle:(long long)arg2 ;
-(double)_correspondingOriginYWithCenterY:(double)arg1 ;
-(double)_adjustedCenterYWithOriginY:(double)arg1 ;
-(void)_makeSliderWithCenterY:(double)arg1 sliderStyle:(long long)arg2 ;
-(void)_scrollCollectionViewToOriginY:(double)arg1 ;
-(double)_adjustedOriginYWithOriginY:(double)arg1 ;
-(void)scrollScrollBarToRelativeOffset:(double)arg1 ;
-(void)reGenerateOriginYs;
-(double)drawerHeight;
-(void)setDrawerHeight:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(UICollectionView *)collectionView;
-(BOOL)isPanning;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

