/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCStackedChatViewModel.h>

@class NSMutableArray;

@interface SCStackedStickerChatViewModel : SCStackedChatViewModel {

	NSMutableArray* _stackedViewModels;

}
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(id)reusableCellIdentifier;
-(id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2 ;
-(id)stackedViewModels;
-(double)payloadHeight;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 stackedCollectionCellActionDelegate:(id)arg3 parentVC:(id)arg4 ;
-(UIEdgeInsets)insetsForCollectionView;
-(id)initWithMessage:(id)arg1 metadata:(id)arg2 props:(id)arg3 ;
-(double)bodyContentWidth;
-(BOOL)canStackMessage:(id)arg1 lastDeletedSequenceNumber:(unsigned long long)arg2 ;
-(void)addStackedViewModelFromMessage:(id)arg1 ;
-(double)insetForCollectionViewCell;
-(unsigned long long)maxItemCapacityForCollectionView;
-(id)collectionViewCellReuseIdentifier;
-(Class)collectionViewCellClass;
-(double)_estimatedStickerCellSideLength;
-(BOOL)_isShowingBitmoji;
-(id)_stickerForMessage:(id)arg1 ;
@end

