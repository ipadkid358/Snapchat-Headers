/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCStickerPickerMenuDelegate <NSObject>
@optional
-(void)stickerPickerCategoryCellScrollViewWillBeginDragging:(id)arg1;
-(void)stickerPickerCategoryCellScrollViewDidScroll:(id)arg1;
-(void)stickerPickerCategoryCellScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)didPanDownAtTop:(id)arg1;
-(void)beginCustomStickerMoving;
-(BOOL)moveCustomStickerCellToDelete:(id)arg1;
-(BOOL)isSitkcerInSavedSection;
-(BOOL)endCustomStickerDeletion:(id)arg1 withStickerImage:(id)arg2;
-(void)updateCustomStickerData;
-(void)updateRecentPage;
-(void)closeStickerPickerMenuShouldOpenSnapCut:(BOOL)arg1;
-(void)didUpdatestickerPickerDismissalAlpha:(double)arg1 translation:(double)arg2;

@required
-(void)friendmojiAvatarPickerClosedWithFriendmojiType:(long long)arg1 selectedStickerId:(id)arg2;
-(void)openedStickerPickerMenu;
-(void)closedStickerPickerMenuAtCategory:(id)arg1 sticker:(id)arg2 enterSearchCount:(long long)arg3 pretypeStickerTagSelectCount:(long long)arg4 prefixMatchStickerTagSelectCount:(long long)arg5 isSingleCategoryMode:(BOOL)arg6;
-(void)stickerSelected:(id)arg1 center:(CGPoint)arg2 thumbnail:(id)arg3 stickerIndex:(unsigned long long)arg4 categoryIndex:(unsigned long long)arg5 isFromRecents:(BOOL)arg6 searchTag:(id)arg7;
-(BOOL)avatarPickerRequestedWithBitmojiUsers:(id)arg1 targetView:(id)arg2 delegate:(id)arg3;
-(BOOL)friendmojiHintRequestedWithTargetView:(id)arg1 delegate:(id)arg2;

@end

