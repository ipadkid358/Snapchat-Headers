/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol SCSearchItemDownloading;
@class SCSearchCarouselContainerCollectionViewCell;

@interface SCSearchFormsCoverPickerTableViewCell : UITableViewCell {

	id<SCSearchItemDownloading> _imageDownloader;
	SCSearchCarouselContainerCollectionViewCell* _coverPickerCarousel;

}

@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader;                                      //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) SCSearchCarouselContainerCollectionViewCell * coverPickerCarousel;              //@synthesize coverPickerCarousel=_coverPickerCarousel - In the implementation block
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(id<SCSearchItemDownloading>)imageDownloader;
-(SCSearchCarouselContainerCollectionViewCell *)coverPickerCarousel;
-(id)init;
-(void)layoutSubviews;
@end
