/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol SCCaptionStylezCarouselDelegate, SCCaptionStylezCarouselDataProvider;
@class UICollectionView, NSString;

@interface SCCaptionStylezCarousel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _carouselCollectionView;
	id<SCCaptionStylezCarouselDelegate> _delegate;
	id<SCCaptionStylezCarouselDataProvider> _dataProvider;

}

@property (assign,nonatomic,__weak) id<SCCaptionStylezCarouselDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCCaptionStylezCarouselDataProvider> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SCCaptionStylezCarouselDelegate>)arg1 ;
-(id<SCCaptionStylezCarouselDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setDataProvider:(id<SCCaptionStylezCarouselDataProvider>)arg1 ;
-(id<SCCaptionStylezCarouselDataProvider>)dataProvider;
@end

