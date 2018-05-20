/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMapSearchGenericCell.h>

@class SCMapThumbnailTextureFetcher, UIView, UIImageView, SCMapSearchGenericPoiRowCellViewModel;

@interface SCMapSearchGenericPoiRowCell : SCMapSearchGenericCell {

	SCMapThumbnailTextureFetcher* _thumbnailTextureFetcher;
	UIView* _thumbnailImageViewContainer;
	UIImageView* _thumbnailImageView;
	SCMapSearchGenericPoiRowCellViewModel* _poiRowViewModel;

}

@property (nonatomic,retain) SCMapSearchGenericPoiRowCellViewModel * poiRowViewModel;              //@synthesize poiRowViewModel=_poiRowViewModel - In the implementation block
-(void)_fetchImageForThumbnail:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didTapStoryThumbnail;
-(void)setPoiRowViewModel:(SCMapSearchGenericPoiRowCellViewModel *)arg1 ;
-(SCMapSearchGenericPoiRowCellViewModel *)poiRowViewModel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setViewModel:(id)arg1 ;
@end

