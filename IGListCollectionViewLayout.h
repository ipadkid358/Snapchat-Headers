/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface IGListCollectionViewLayout : UICollectionViewLayout {

	vector<IGListSectionEntry, std::__1::allocator<IGListSectionEntry> >* _sectionData;
	NSMutableDictionary* _attributesCache;
	BOOL _cachedLayoutInvalid;
	NSMutableDictionary* _headerAttributesCache;
	BOOL _stickyHeaders;
	BOOL _stretchToEdge;
	long long _scrollDirection;
	double _stickyHeaderYOffset;
	double _topContentInset;

}

@property (nonatomic,readonly) BOOL stickyHeaders;                     //@synthesize stickyHeaders=_stickyHeaders - In the implementation block
@property (nonatomic,readonly) double topContentInset;                 //@synthesize topContentInset=_topContentInset - In the implementation block
@property (nonatomic,readonly) BOOL stretchToEdge;                     //@synthesize stretchToEdge=_stretchToEdge - In the implementation block
@property (nonatomic,readonly) long long scrollDirection;              //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) double stickyHeaderYOffset;               //@synthesize stickyHeaderYOffset=_stickyHeaderYOffset - In the implementation block
+(Class)invalidationContextClass;
-(id)initWithStickyHeaders:(BOOL)arg1 scrollDirection:(long long)arg2 topContentInset:(double)arg3 stretchToEdge:(BOOL)arg4 ;
-(id)initWithStickyHeaders:(BOOL)arg1 topContentInset:(double)arg2 stretchToEdge:(BOOL)arg3 ;
-(NSRange)rangeOfSectionsInRect:(CGRect)arg1 ;
-(BOOL)stickyHeaders;
-(double)stickyHeaderYOffset;
-(void)cacheLayout;
-(BOOL)stretchToEdge;
-(void)setStickyHeaderYOffset:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(long long)scrollDirection;
-(double)topContentInset;
@end
