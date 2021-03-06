/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchCollectionViewSectionSupplementaryViewProviding.h>
#import <Snapchat/SCSearchCollectionViewSupplementaryViewModelsConfigurable.h>

@protocol SCSearchCollectionViewSectionSupplementaryViewProviderDelegate;
@class SCOurStorySettingsHeaderView, NSDictionary, NSString;

@interface SCOurStorySettingsSupplementaryViewProvider : NSObject <SCSearchCollectionViewSectionSupplementaryViewProviding, SCSearchCollectionViewSupplementaryViewModelsConfigurable> {

	long long _fetchingState;
	SCOurStorySettingsHeaderView* _headerView;
	id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate> _supplementaryViewProviderDelegate;
	NSDictionary* _supplementaryViewModels;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate> supplementaryViewProviderDelegate;              //@synthesize supplementaryViewProviderDelegate=_supplementaryViewProviderDelegate - In the implementation block
@property (nonatomic,readonly) long long sectionHeaderDisplayStrategy; 
@property (nonatomic,copy) NSDictionary * supplementaryViewModels;                                                                                     //@synthesize supplementaryViewModels=_supplementaryViewModels - In the implementation block
-(long long)sectionHeaderDisplayStrategy;
-(id)viewForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 ;
-(CGSize)referenceSizeForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 withWidth:(double)arg3 ;
-(id)viewClassesForSupplementaryViewsByElementKind;
-(void)setSupplementaryViewProviderDelegate:(id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate>)arg1 ;
-(NSDictionary *)supplementaryViewModels;
-(void)setSupplementaryViewModels:(NSDictionary *)arg1 ;
-(id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate>)supplementaryViewProviderDelegate;
-(void)setFetchingState:(long long)arg1 ;
@end

