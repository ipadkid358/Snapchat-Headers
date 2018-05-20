/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGalleryEntry;
@class SCUserSession, NSArray, UIViewController, SCCloudSyncTriggerUserContext;

@interface SCGalleryAddItemsToStoryOperation : NSObject {

	SCUserSession* _userSession;
	id<SCGalleryEntry> _galleryStoryEntry;
	NSArray* _selectionItems;
	UIViewController* _containerViewController;
	SCCloudSyncTriggerUserContext* _context;
	NSArray* _selectedSnaps;

}
-(void)runWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithGalleryStoryEntry:(id)arg1 selectionItems:(id)arg2 selectedSnaps:(id)arg3 containerViewController:(id)arg4 context:(id)arg5 userSession:(id)arg6 ;
@end

