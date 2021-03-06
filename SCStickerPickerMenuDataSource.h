/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCStickerPickerMenuDataSource <NSObject>
@optional
-(id)stickerPickerMenu:(id)arg1 emptyStateViewForIndexPath:(id)arg2 frame:(CGRect)arg3 sourceType:(unsigned long long)arg4;

@required
-(BOOL)stickerPickerMenuHasSuperCategoryType:(long long)arg1;
-(long long)numberOfSuperCategoriesInStickerPickerMenu:(id)arg1;
-(id)stickerPickerMenu:(id)arg1 stickerSuperCategoryForIndex:(long long)arg2;
-(long long)stickerPickerMenu:(id)arg1 numberOfCategoriesInSuperCategory:(long long)arg2;
-(id)stickerPickerMenu:(id)arg1 stickerCategoryForIndexPath:(id)arg2;
-(BOOL)stickerPickerMenu:(id)arg1 shouldDisplayEmptyStateForIndexPath:(id)arg2 sourceType:(unsigned long long)arg3;
-(void)stickerPickerMenu:(id)arg1 prefetchCategoryForIndexPath:(id)arg2;
-(void)stickerPickerMenuStartPrefetching;
-(void)stickerPickerMenuStopPrefetching;
-(BOOL)stickerPickerMenuHasSuperCategoryType:(long long)arg1 atIndex:(id)arg2;

@end

