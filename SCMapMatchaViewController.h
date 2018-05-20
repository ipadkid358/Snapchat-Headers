/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SendSnapNavigationControllerDelegate.h>
#import <Snapchat/SCMapMatchaViewDelegate.h>
#import <Snapchat/SCSendViewControllerSendingDelegate.h>
#import <Snapchat/SCPreviewToolBarDelegate.h>
#import <Snapchat/SCPreviewDrawingToolBarButtonItemDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCPreviewCaptionToolBarButtonItemDelegate.h>
#import <Snapchat/SCCaptionManagerDelegate.h>
#import <Snapchat/SCStickerPickerMenuDelegate.h>

@protocol SCTouchControllable, SCMapMatchaViewControllerDelegate;
@class SCMapMatchaView, NSSet, SCCaptionManager, SCStickerPickerMenuView, SCStickerDataProvider, SCXRenderLayer, MGLMapView, SCUserSession, NSString;

@interface SCMapMatchaViewController : UIViewController <SendSnapNavigationControllerDelegate, SCMapMatchaViewDelegate, SCSendViewControllerSendingDelegate, SCPreviewToolBarDelegate, SCPreviewDrawingToolBarButtonItemDelegate, UIGestureRecognizerDelegate, SCPreviewCaptionToolBarButtonItemDelegate, SCCaptionManagerDelegate, SCStickerPickerMenuDelegate> {

	SCMapMatchaView* _matchaView;
	NSSet* _sprites;
	id<SCTouchControllable> _currentTouchTarget;
	long long _numberOfGesturesOnCurrentTouchTarget;
	SCCaptionManager* _captionManager;
	SCStickerPickerMenuView* _stickerPickerMenu;
	SCStickerDataProvider* _stickerDataProvider;
	SCXRenderLayer* _renderLayer;
	MGLMapView* _mapView;
	SCUserSession* _userSession;
	id<SCMapMatchaViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCMapMatchaViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captionToolBarButtonItem:(id)arg1 didChangeColor:(id)arg2 ;
-(void)_updateForStickerItem:(BOOL)arg1 ;
-(void)previewToolBar:(id)arg1 itemDidChangeSelectedState:(id)arg2 ;
-(id)_screenshot;
-(void)didSendSnaps:(id)arg1 ;
-(void)didCancelFromPreview:(id)arg1 ;
-(void)didComeFromCameraWithoutSendingSnap;
-(void)didSendDiscoverSharedMessageWithParameters:(id)arg1 ;
-(void)didSendChatMessage;
-(void)didSendToGallery;
-(void)didPostStory;
-(id)captionManager;
-(void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 invitedRecipients:(id)arg3 postToMyStory:(BOOL)arg4 myStoryPrivacyOverride:(id)arg5 officialStories:(id)arg6 sharedStories:(id)arg7 businessIds:(id)arg8 mobStories:(id)arg9 newMobStories:(id)arg10 mischiefs:(id)arg11 businessProfiles:(id)arg12 gallery:(BOOL)arg13 inviteRecipientShown:(long long)arg14 additionalText:(id)arg15 ;
-(void)friendmojiAvatarPickerClosedWithFriendmojiType:(long long)arg1 selectedStickerId:(id)arg2 ;
-(void)openedStickerPickerMenu;
-(void)closedStickerPickerMenuAtCategory:(id)arg1 sticker:(id)arg2 enterSearchCount:(long long)arg3 pretypeStickerTagSelectCount:(long long)arg4 prefixMatchStickerTagSelectCount:(long long)arg5 isSingleCategoryMode:(BOOL)arg6 ;
-(void)stickerSelected:(id)arg1 center:(CGPoint)arg2 thumbnail:(id)arg3 stickerIndex:(unsigned long long)arg4 categoryIndex:(unsigned long long)arg5 isFromRecents:(BOOL)arg6 searchTag:(id)arg7 ;
-(BOOL)avatarPickerRequestedWithBitmojiUsers:(id)arg1 targetView:(id)arg2 delegate:(id)arg3 ;
-(BOOL)friendmojiHintRequestedWithTargetView:(id)arg1 delegate:(id)arg2 ;
-(void)closeStickerPickerMenuShouldOpenSnapCut:(BOOL)arg1 ;
-(void)didAlterDrawing;
-(void)didStartDrawing;
-(void)didEndDrawingWithStrokeSize:(double)arg1 isResized:(BOOL)arg2 ;
-(void)didPinchBrush;
-(void)matchaViewDidPressClose:(id)arg1 ;
-(void)matchaViewDidPressSend:(id)arg1 ;
-(void)_handleTouchControlGesture:(id)arg1 ;
-(id)_imageFromCurrentDoodle;
-(BOOL)_currentDoodleExists;
-(void)_dismissWithDoodle:(id)arg1 ;
-(void)_panPinchOrRotateWithGestureRecognizer:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_touchControlGestureBegan:(id)arg1 ;
-(void)_touchControlGestureChanged:(id)arg1 ;
-(void)_touchControlGestureEnded:(id)arg1 ;
-(void)_deletableViewGestureBegan:(id)arg1 ;
-(id)_deletableViewOfTouchTarget:(id)arg1 ;
-(void)_updateTrashCanForGesture:(id)arg1 deletableView:(id)arg2 ;
-(void)_deletableViewGestureEnded:(id)arg1 view:(id)arg2 ;
-(BOOL)trashContains:(CGPoint)arg1 ;
-(void)resetCaptionViews;
-(BOOL)_shouldHideSendButton;
-(void)previewToolBar:(id)arg1 didLongPressItem:(id)arg2 gesture:(id)arg3 ;
-(void)drawingMovedToPoint:(CGPoint)arg1 ;
-(void)drawingToolBarButtonItemDidPressReset:(id)arg1 ;
-(void)drawingToolBarButtonItemDidPressDrawer:(id)arg1 enabled:(BOOL)arg2 ;
-(void)drawingToolBarButtonItemDidPressPixelation:(id)arg1 withPixelType:(long long)arg2 ;
-(void)displayedEmojiBrushAnimation;
-(void)didStartDrawingPixelation;
-(void)didEndDrawingPixelation;
-(void)captionToolBarButtonItemDidChangeCaptionStyle:(id)arg1 ;
-(BOOL)canStartEditingCaption;
-(void)stoppedEditingCaptionWithCaptionAdded:(BOOL)arg1 ;
-(id)initWithSprites:(id)arg1 renderLayer:(id)arg2 userSession:(id)arg3 ;
-(void)setDelegate:(id<SCMapMatchaViewControllerDelegate>)arg1 ;
-(id<SCMapMatchaViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)tap:(id)arg1 ;
@end

