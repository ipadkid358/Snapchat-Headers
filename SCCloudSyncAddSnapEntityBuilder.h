/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;
@class NSString;

@interface SCCloudSyncAddSnapEntityBuilder : NSObject {

	NSString* _duplicateFromSnapId;
	id<SCGallerySnap> _snap;
	id<SCGallerySnapDetail> _detail;
	id<SCGallerySnapMiniThumbnail> _miniThumbnail;

}
+(id)withCloudSyncAddSnapEntity:(id)arg1 ;
-(id)setMiniThumbnail:(id)arg1 ;
-(id)setDuplicateFromSnapId:(id)arg1 ;
-(id)setDetail:(id)arg1 ;
-(id)build;
-(id)setSnap:(id)arg1 ;
@end

