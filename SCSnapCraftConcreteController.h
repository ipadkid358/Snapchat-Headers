/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCraftController.h>

@interface SCSnapCraftConcreteController : SCCraftController
-(void)initResourceManager;
-(void)setupViewWithFrame:(CGRect)arg1 ;
-(void)setupPickerCollectionView:(id)arg1 frame:(CGRect)arg2 ;
-(CGRect)pickerFrame:(CGRect)arg1 ;
-(id)collectionView:(id)arg1 craftPickerCellForItemAtIndexPath:(id)arg2 ;
-(void)animateCell:(id)arg1 ;
-(void)showNextTileIfNeeded:(long long)arg1 cell:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 videoProvider:(id)arg3 stylizedImage:(id)arg4 styleId:(id)arg5 userSession:(id)arg6 isPrivate:(BOOL)arg7 mediaOrientation:(long long)arg8 snapSource:(long long)arg9 logger:(id)arg10 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)cellSize;
@end

