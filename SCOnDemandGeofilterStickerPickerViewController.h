/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCStickerPickerMenuDelegate.h>
#import <Snapchat/SCCustomStickerManagerListener.h>
#import <Snapchat/SCChatStickerManagerListener.h>

@protocol SCOnDemandGeofilterSessionProtocol;
@class SCStickerPickerMenuView, SCStickerRankingManager, SCCustomStickerManager, SCStickerDataProvider, NSIndexPath, NSNumber, NSString;

@interface SCOnDemandGeofilterStickerPickerViewController : UIViewController <SCStickerPickerMenuDelegate, SCCustomStickerManagerListener, SCChatStickerManagerListener> {

	id<SCOnDemandGeofilterSessionProtocol> _geofilterSession;
	SCStickerPickerMenuView* _stickerPickerMenu;
	SCStickerRankingManager* _stickerRankingManager;
	SCCustomStickerManager* _customStickerManager;
	SCStickerDataProvider* _stickerDataProvider;
	NSIndexPath* _categoryIndexPath;
	NSNumber* _stickerContentOffsetY;
	/*^block*/id _stickerPickerCompletionBlock;

}

@property (copy) id stickerPickerCompletionBlock;                   //@synthesize stickerPickerCompletionBlock=_stickerPickerCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGeofilterSession:(id)arg1 ;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(void)_updateForStickerItem:(BOOL)arg1 ;
-(void)friendmojiAvatarPickerClosedWithFriendmojiType:(long long)arg1 selectedStickerId:(id)arg2 ;
-(void)stickerPackagesDidChangeWithCategoryType:(long long)arg1 ;
-(void)openedStickerPickerMenu;
-(void)closedStickerPickerMenuAtCategory:(id)arg1 sticker:(id)arg2 enterSearchCount:(long long)arg3 pretypeStickerTagSelectCount:(long long)arg4 prefixMatchStickerTagSelectCount:(long long)arg5 isSingleCategoryMode:(BOOL)arg6 ;
-(void)stickerSelected:(id)arg1 center:(CGPoint)arg2 thumbnail:(id)arg3 stickerIndex:(unsigned long long)arg4 categoryIndex:(unsigned long long)arg5 isFromRecents:(BOOL)arg6 searchTag:(id)arg7 ;
-(BOOL)avatarPickerRequestedWithBitmojiUsers:(id)arg1 targetView:(id)arg2 delegate:(id)arg3 ;
-(BOOL)friendmojiHintRequestedWithTargetView:(id)arg1 delegate:(id)arg2 ;
-(void)closeStickerPickerMenuShouldOpenSnapCut:(BOOL)arg1 ;
-(void)customStickerDataDidChange;
-(void)customStickerAutoSectionDataDidChange;
-(void)setStickerPickerCompletionBlock:(id)arg1 ;
-(id)_updateStickerHometab;
-(id)stickerPickerCompletionBlock;
-(void)donePicking;
-(void)closeStickerMenu;
-(void)dealloc;
-(void)viewDidLoad;
@end
