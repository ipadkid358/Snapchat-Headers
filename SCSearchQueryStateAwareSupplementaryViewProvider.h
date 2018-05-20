/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchSectionHeaderViewDelegate.h>
#import <Snapchat/SCSearchCollectionViewSectionSupplementaryViewProviding.h>
#import <Snapchat/SCSearchCollectionViewSupplementaryViewModelsConfigurable.h>

@protocol SCSearchCollectionViewSectionSupplementaryViewProviderDelegate, SCSearchQueryStateAwareSupplementaryViewProviderDelegate;
@class NSDictionary, SCSearchSectionHeaderModel, NSString;

@interface SCSearchQueryStateAwareSupplementaryViewProvider : NSObject <SCSearchSectionHeaderViewDelegate, SCSearchCollectionViewSectionSupplementaryViewProviding, SCSearchCollectionViewSupplementaryViewModelsConfigurable> {

	long long _queryResultState;
	BOOL _canReloadFreshData;
	NSDictionary* _supplementaryViewModels;
	id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate> _supplementaryViewProviderDelegate;
	id<SCSearchQueryStateAwareSupplementaryViewProviderDelegate> _delegate;
	SCSearchSectionHeaderModel* _sectionHeaderModel;

}

@property (assign,nonatomic,__weak) id<SCSearchQueryStateAwareSupplementaryViewProviderDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) SCSearchSectionHeaderModel * sectionHeaderModel;                                                                            //@synthesize sectionHeaderModel=_sectionHeaderModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate> supplementaryViewProviderDelegate;              //@synthesize supplementaryViewProviderDelegate=_supplementaryViewProviderDelegate - In the implementation block
@property (nonatomic,readonly) long long sectionHeaderDisplayStrategy; 
@property (nonatomic,copy) NSDictionary * supplementaryViewModels;                                                                                     //@synthesize supplementaryViewModels=_supplementaryViewModels - In the implementation block
-(void)sectionHeaderViewDidTapReload:(id)arg1 ;
-(long long)sectionHeaderDisplayStrategy;
-(id)viewForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 ;
-(CGSize)referenceSizeForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 withWidth:(double)arg3 ;
-(id)viewClassesForSupplementaryViewsByElementKind;
-(void)setSupplementaryViewProviderDelegate:(id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate>)arg1 ;
-(NSDictionary *)supplementaryViewModels;
-(SCSearchSectionHeaderModel *)sectionHeaderModel;
-(void)setSupplementaryViewModels:(NSDictionary *)arg1 ;
-(void)updateWithQueryResultState:(long long)arg1 canReloadFreshData:(BOOL)arg2 ;
-(void)_updateSectionHeaderViewIfNeeded;
-(void)setSectionHeaderModel:(SCSearchSectionHeaderModel *)arg1 ;
-(void)_updateSectionHeaderView:(id)arg1 ;
-(id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate>)supplementaryViewProviderDelegate;
-(void)setDelegate:(id<SCSearchQueryStateAwareSupplementaryViewProviderDelegate>)arg1 ;
-(id<SCSearchQueryStateAwareSupplementaryViewProviderDelegate>)delegate;
@end

