/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGalleryCellActionMenuDelegate <NSObject>
@optional
-(void)galleryCellActionMenu:(id)arg1 actionIsFromPanGesture:(BOOL)arg2;
-(void)galleryCellActionMenu:(id)arg1 handleEdit:(id)arg2 snap:(id)arg3;
-(void)galleryCellActionMenu:(id)arg1 handleExport:(id)arg2 snap:(id)arg3;
-(void)galleryCellActionMenu:(id)arg1 handleRenameStory:(id)arg2 snap:(id)arg3;
-(void)galleryCellActionMenu:(id)arg1 handleHighlight:(id)arg2 snap:(id)arg3;
-(void)galleryCellActionMenu:(id)arg1 handleTogglePrivate:(id)arg2;
-(void)galleryCellActionMenu:(id)arg1 handleDelete:(id)arg2 snap:(id)arg3;
-(void)galleryCellActionMenu:(id)arg1 handleSend:(id)arg2 snap:(id)arg3;
-(void)galleryCellActionMenu:(id)arg1 handleAddSnaps:(id)arg2;
-(void)galleryCellActionMenu:(id)arg1 handleBackupNow:(id)arg2;
-(void)galleryCellActionMenu:(id)arg1 handleFaceBio:(id)arg2;
-(void)galleryCellActionMenu:(id)arg1 handleRetryBackup:(id)arg2;
-(void)galleryCellActionMenu:(id)arg1 handleGetHD:(id)arg2 snap:(id)arg3;
-(void)galleryCellActionMenu:(id)arg1 handleEditStory:(id)arg2;
-(void)galleryCellActionMenu:(id)arg1 handleSaveToStories:(id)arg2;
-(void)galleryCellActionMenu:(id)arg1 handleHideStory:(id)arg2;

@required
-(id)galleryCellActionMenuShouldUpdateSourceView:(id)arg1;
-(void)galleryCellActionMenuWillDismiss:(id)arg1;
-(void)galleryCellActionMenuDidDismiss:(id)arg1;

@end

