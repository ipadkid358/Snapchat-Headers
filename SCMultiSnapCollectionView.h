/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionView.h>

@protocol SCMultiSnapCollectionViewContentSizeDelegate;
@interface SCMultiSnapCollectionView : UICollectionView {

	BOOL _landscape;
	BOOL _disableAppearanceAnimation;
	id<SCMultiSnapCollectionViewContentSizeDelegate> _contentWidthDelegate;

}

@property (nonatomic,readonly) double preferredHeight; 
@property (assign,nonatomic) BOOL disableAppearanceAnimation;                                                           //@synthesize disableAppearanceAnimation=_disableAppearanceAnimation - In the implementation block
@property (assign,nonatomic,__weak) id<SCMultiSnapCollectionViewContentSizeDelegate> contentWidthDelegate;              //@synthesize contentWidthDelegate=_contentWidthDelegate - In the implementation block
-(BOOL)disableAppearanceAnimation;
-(void)setDisableAppearanceAnimation:(BOOL)arg1 ;
-(id<SCMultiSnapCollectionViewContentSizeDelegate>)contentWidthDelegate;
-(double)cardsContentLength;
-(double)lastCardCenterOffset;
-(void)changeLayout:(BOOL)arg1 ;
-(double)secondLastCardCenterOffset;
-(void)setContentWidthDelegate:(id<SCMultiSnapCollectionViewContentSizeDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_preferredContentSize;
-(double)preferredHeight;
@end

