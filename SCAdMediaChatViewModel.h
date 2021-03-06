/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMediaChatViewModel.h>

@protocol SCAdShareMediaThumbnailViewModel;
@class SCBaseMediaThumbnailViewModel;

@interface SCAdMediaChatViewModel : SCMediaChatViewModel {

	BOOL _circularThumbnailViewEnabled;
	SCBaseMediaThumbnailViewModel*<SCAdShareMediaThumbnailViewModel> _thumbnailViewModel;

}

@property (nonatomic,retain) SCBaseMediaThumbnailViewModel*<SCAdShareMediaThumbnailViewModel> thumbnailViewModel;              //@synthesize thumbnailViewModel=_thumbnailViewModel - In the implementation block
@property (assign,nonatomic) BOOL circularThumbnailViewEnabled;                                                                //@synthesize circularThumbnailViewEnabled=_circularThumbnailViewEnabled - In the implementation block
-(id)reusableCellIdentifier;
-(SCBaseMediaThumbnailViewModel*<SCAdShareMediaThumbnailViewModel>)thumbnailViewModel;
-(id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2 ;
-(double)payloadHeight;
-(id)updatedThumbnailViewModel;
-(id)initWithMessage:(id)arg1 metadata:(id)arg2 props:(id)arg3 ;
-(BOOL)circularThumbnailViewEnabled;
-(id)updatedMediaCardViewModel;
-(void)setThumbnailViewModel:(SCBaseMediaThumbnailViewModel*<SCAdShareMediaThumbnailViewModel>)arg1 ;
-(void)setCircularThumbnailViewEnabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

