/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UICollectionView, UIView;


@protocol SCSearchTransitioning <NSObject>
@property (assign,nonatomic) double contentViewAlpha; 
@property (nonatomic,readonly) UICollectionView * searchTransitionCollectionView; 
@property (nonatomic,readonly) UIView * containerView; 
@required
-(void)setContentViewAlpha:(double)arg1;
-(id)transitionSectionHeaderForSection:(long long)arg1;
-(double)contentViewAlpha;
-(UICollectionView *)searchTransitionCollectionView;
-(UIView *)containerView;

@end

