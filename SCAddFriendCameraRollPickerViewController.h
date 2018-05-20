/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLeftSwipableViewController.h>
#import <Snapchat/SCHeaderDataSource.h>
#import <Snapchat/SCHeaderDelegate.h>
#import <Snapchat/SCScanResultViewControllerDelegate.h>
#import <Snapchat/SCAddFriendCameraRollPickerViewDelegate.h>

@protocol SCStartChatDelegate, SendSnapNavigationControllerDelegate, NavigationDelegate;
@class SCUserSession, SCGalleryPhotoLibraryFetcher, SCHeader, SCAddFriendCameraRollPickerView, NSString;

@interface SCAddFriendCameraRollPickerViewController : SCLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate, SCScanResultViewControllerDelegate, SCAddFriendCameraRollPickerViewDelegate> {

	id<SCStartChatDelegate> _startChatDelegate;
	id<SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
	id<NavigationDelegate> _navigationDelegate;
	SCUserSession* _userSession;
	SCGalleryPhotoLibraryFetcher* _photoLibraryFetcher;
	BOOL _isPageSourceFromSettings;
	BOOL _shouldScanCell;
	BOOL _friendFeedUsage;
	SCHeader* _header;
	SCAddFriendCameraRollPickerView* _assetListView;
	NSString* _pageViewName;

}

@property (nonatomic,retain) SCHeader * header;                                            //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) SCAddFriendCameraRollPickerView * assetListView;              //@synthesize assetListView=_assetListView - In the implementation block
@property (nonatomic,retain) NSString * pageViewName;                                      //@synthesize pageViewName=_pageViewName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(void)setPageViewName:(NSString *)arg1 ;
-(NSString *)pageViewName;
-(BOOL)addFriendCameraRollPickerViewShouldScan:(id)arg1 ;
-(void)addFriendCameraRollPickerViewDidStartScan:(id)arg1 ;
-(void)addFriendCameraRollPickerViewDidFinishScan:(id)arg1 ;
-(void)addFriendCameraRollPickerView:(id)arg1 didScanImageWithScannedData:(id)arg2 ;
-(void)setAssetListView:(SCAddFriendCameraRollPickerView *)arg1 ;
-(SCAddFriendCameraRollPickerView *)assetListView;
-(void)_setupImageFetch;
-(id)_pagenameForPageView;
-(void)_updateWithPhotoAssets:(id)arg1 ;
-(void)scanResultViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2 ;
-(BOOL)scanResultViewController:(id)arg1 shouldShowCard:(id)arg2 ;
-(void)scanResultViewController:(id)arg1 didPressChatForFriend:(id)arg2 ;
-(void)scanResultViewController:(id)arg1 didPressSnapForFriend:(id)arg2 ;
-(id)scanResultViewController:(id)arg1 cardToReplaceScanCard:(id)arg2 ;
-(id)getPageViewName;
-(id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 navigationDelegate:(id)arg3 userSession:(id)arg4 friendFeedUsage:(BOOL)arg5 ;
-(id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 navigationDelegate:(id)arg3 userSession:(id)arg4 title:(id)arg5 pageViewName:(id)arg6 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SCHeader *)header;
-(void)setHeader:(SCHeader *)arg1 ;
@end
