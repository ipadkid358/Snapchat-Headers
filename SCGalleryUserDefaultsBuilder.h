/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface SCGalleryUserDefaultsBuilder : NSObject {

	NSString* _objectID;
	BOOL _completedImportFromCameraRoll;
	BOOL _didInitialCloudSync;
	BOOL _dismissedImportButtonBelowSnaps;
	BOOL _displayedCameraRollTabIntroPopup;
	BOOL _displayedInitialCreateStoryPopup;
	BOOL _displayedInitialNeedsPhotoAccessPopup;
	BOOL _displayedPostLongVideoToStoryPopup;
	BOOL _displayedSaveOptionPrompt;
	NSDate* _latestAckedBackupErrorTime;
	NSString* _readFeaturedStoryIds;
	NSString* _viewedFeaturedStoryIds;

}
+(id)withGalleryUserDefaults:(id)arg1 ;
-(id)setCompletedImportFromCameraRoll:(BOOL)arg1 ;
-(id)setDidInitialCloudSync:(BOOL)arg1 ;
-(id)setDismissedImportButtonBelowSnaps:(BOOL)arg1 ;
-(id)setDisplayedCameraRollTabIntroPopup:(BOOL)arg1 ;
-(id)setDisplayedInitialCreateStoryPopup:(BOOL)arg1 ;
-(id)setDisplayedInitialNeedsPhotoAccessPopup:(BOOL)arg1 ;
-(id)setDisplayedPostLongVideoToStoryPopup:(BOOL)arg1 ;
-(id)setDisplayedSaveOptionPrompt:(BOOL)arg1 ;
-(id)setLatestAckedBackupErrorTime:(id)arg1 ;
-(id)setReadFeaturedStoryIds:(id)arg1 ;
-(id)setViewedFeaturedStoryIds:(id)arg1 ;
-(id)build;
-(id)setObjectID:(id)arg1 ;
@end

