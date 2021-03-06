/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface SCSearchStoriesTabBarInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _isSelectedIndexInvalidated;
	unsigned long long _selectedItemIndex;
	double _offsetRatio;

}

@property (assign,nonatomic) unsigned long long selectedItemIndex;              //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
@property (assign,nonatomic) double offsetRatio;                                //@synthesize offsetRatio=_offsetRatio - In the implementation block
@property (assign,nonatomic) BOOL isSelectedIndexInvalidated;                   //@synthesize isSelectedIndexInvalidated=_isSelectedIndexInvalidated - In the implementation block
-(void)setIsSelectedIndexInvalidated:(BOOL)arg1 ;
-(void)setOffsetRatio:(double)arg1 ;
-(BOOL)isSelectedIndexInvalidated;
-(double)offsetRatio;
-(unsigned long long)selectedItemIndex;
-(void)setSelectedItemIndex:(unsigned long long)arg1 ;
@end

