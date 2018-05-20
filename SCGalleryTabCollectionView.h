/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionView.h>

@interface SCGalleryTabCollectionView : UICollectionView {

	BOOL _isSelecting;
	double _initialTopInset;

}

@property (assign,nonatomic) BOOL isSelecting;                    //@synthesize isSelecting=_isSelecting - In the implementation block
@property (assign,nonatomic) double initialTopInset;              //@synthesize initialTopInset=_initialTopInset - In the implementation block
-(void)setIsSelecting:(BOOL)arg1 ;
-(double)initialTopInset;
-(void)setInitialTopInset:(double)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(BOOL)isSelecting;
@end

