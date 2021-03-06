/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@protocol SCBitmojiUser;
@class UIImageView, SCLoadingIndicatorView, SCBitmojiDratiniManager;

@interface SCBitmojiAvatarPickerCell : UICollectionViewCell {

	id<SCBitmojiUser> _bitmojiUser;
	UIImageView* _imageView;
	SCLoadingIndicatorView* _loadingIndicatorView;
	SCBitmojiDratiniManager* _dratiniManager;

}

@property (nonatomic,retain) SCBitmojiDratiniManager * dratiniManager;              //@synthesize dratiniManager=_dratiniManager - In the implementation block
-(SCBitmojiDratiniManager *)dratiniManager;
-(void)setDratiniManager:(SCBitmojiDratiniManager *)arg1 ;
-(void)setBitmojiUser:(id)arg1 ;
@end

