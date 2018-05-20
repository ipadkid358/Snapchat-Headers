/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchCollectionViewSectionLayoutProviding.h>

@protocol SCSearchCollectionViewSectionLayoutProvidingDataSource;
@class SCCornerRadii, NSString;

@interface SCSearchCollectionViewStaggeredSectionLayoutCalculator : NSObject <SCSearchCollectionViewSectionLayoutProviding> {

	unsigned long long _numberOfColumns;
	id<SCSearchCollectionViewSectionLayoutProvidingDataSource> _dataSource;
	SCCornerRadii* _cornerRadii;

}

@property (nonatomic,retain) SCCornerRadii * cornerRadii;                                                               //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCSearchCollectionViewSectionLayoutProvidingDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)layoutAttributesForSectionOriginPoint:(CGPoint)arg1 sectionWidth:(double)arg2 minimumInteritemSpacing:(double)arg3 numberOfItems:(unsigned long long)arg4 ;
-(id)initWithSectionColumns:(unsigned long long)arg1 ;
-(void)setDataSource:(id<SCSearchCollectionViewSectionLayoutProvidingDataSource>)arg1 ;
-(id<SCSearchCollectionViewSectionLayoutProvidingDataSource>)dataSource;
-(void)setCornerRadii:(SCCornerRadii *)arg1 ;
-(SCCornerRadii *)cornerRadii;
@end
