/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@protocol SCCachingMediaRequest, SCPerforming, SCStickerProtocol;
@class UILabel, UIImageView, UIActivityIndicatorView, UIView, UIImage;

@interface SCStickerPickerStickerCell : UICollectionViewCell {

	UILabel* _label;
	UIImageView* _stickerImageView;
	UIActivityIndicatorView* _stickerImageLoadingView;
	UIView* _activeView;
	id<SCCachingMediaRequest> _thumbnailRequest;
	id<SCPerforming> _performer;
	/*^block*/id _delayShowActivityViewBlock;
	long long _numDisplayed;
	long long _numEndDisplayed;
	double _startTime;
	UIImageView* _backgroundImageView;
	BOOL _canTapToReload;
	id<SCStickerProtocol> _sticker;
	unsigned long long _sourceType;
	UIImage* _previewImage;

}

@property (nonatomic,copy,readonly) id<SCStickerProtocol> sticker;              //@synthesize sticker=_sticker - In the implementation block
@property (nonatomic,copy,readonly) UIImage * stickerImage; 
@property (assign,nonatomic) unsigned long long sourceType;                     //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) BOOL canTapToReload;                             //@synthesize canTapToReload=_canTapToReload - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                            //@synthesize previewImage=_previewImage - In the implementation block
+(BOOL)_isTallAspectRatioGeoFilterImage:(id)arg1 ;
-(void)shrink;
-(void)willDisplay;
-(void)_setEmojiSticker;
-(void)_setImageStickerWithUserSession:(id)arg1 contexts:(id)arg2 ;
-(void)_setEmojiLabel;
-(void)setSticker:(id)arg1 userSession:(id)arg2 contexts:(id)arg3 ;
-(void)didEndDisplay;
-(void)stopAnimatingSticker:(id)arg1 ;
-(BOOL)isStickerReady;
-(BOOL)canTapToReload;
-(void)grow;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(unsigned long long)sourceType;
-(void)setSourceType:(unsigned long long)arg1 ;
-(double)emojiFontSize;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
-(id<SCStickerProtocol>)sticker;
-(UIImage *)stickerImage;
@end

