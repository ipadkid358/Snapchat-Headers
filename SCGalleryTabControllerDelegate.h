/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGalleryTabControllerDelegate <NSObject>
@required
-(void)tabControllerDidEndDecelerating:(id)arg1;
-(void)tabControllerDidFinishLoading:(id)arg1;
-(void)tabControllerDidBeginEditing:(id)arg1;
-(void)tabControllerDidEndEditing:(id)arg1;
-(void)tabControllerDidChangeScrollContentOffset:(id)arg1;
-(/*function pointer*/void**)mediaScenePathForTabController:(id)arg1 withMediaScenePathComponent:(unsigned long long)arg2;
-(void)tabControllerWillBeginDragging:(id)arg1;
-(void)tabControllerDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(BOOL)tabController:(id)arg1 shouldDeselectGalleryItem:(id)arg2;
-(void)tabController:(id)arg1 didChangeSelectionMode:(unsigned long long)arg2 forGalleryItem:(id)arg3;
-(void)tabController:(id)arg1 browseSelected:(long long)arg2 selectionMode:(unsigned long long)arg3 items:(id)arg4 fromView:(id)arg5;
-(void)tabController:(id)arg1 editSelected:(long long)arg2 selectionMode:(unsigned long long)arg3 items:(id)arg4 fromView:(id)arg5 longPress:(id)arg6;
-(BOOL)tabControllerCollectionViewIsFullyVisible:(id)arg1;
-(void)tabController:(id)arg1 didChangeDisplayedContent:(unsigned long long)arg2;
-(void)tabController:(id)arg1 didPopViewController:(id)arg2;
-(void)tabController:(id)arg1 didPushViewController:(id)arg2;
-(void)tabController:(id)arg1 presentActionMenu:(long long)arg2 items:(id)arg3 fromView:(id)arg4;
-(void)tabController:(id)arg1 didSaveFeaturedStory:(id)arg2;
-(void)tabControllerDidPressLagunaImportButton:(id)arg1;
-(void)cameraRollTabControllerRequestsUpdateDisplay:(id)arg1;
-(id)tabControllerViewControllerToPresentFrom;
-(double)tabControllerTopInset:(id)arg1;
-(void)tabControllerDidPresentOpera:(id)arg1;
-(void)tabControllerDidDismissOpera:(id)arg1;
-(void)tabController:(id)arg1 didChangeSelectionMode:(unsigned long long)arg2 forGallerySnap:(id)arg3;
-(void)tabController:(id)arg1 presentEditForItem:(id)arg2 lens:(id)arg3 editedImage:(id)arg4 fromView:(id)arg5;
-(void)tabController:(id)arg1 requestsSelectMode:(unsigned long long)arg2;

@end

