/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCCloudSyncFeatureSettingsDataProvider <NSObject>
@property (assign,nonatomic) BOOL galleryForcedResyncRequired; 
@property (assign,nonatomic) BOOL gallerySyncRequired; 
@required
-(BOOL)travelModeEnabled;
-(BOOL)galleryBackupOnCellular;
-(id)observeKeys:(id)arg1 queue:(id)arg2 changeHandler:(/*^block*/id)arg3;
-(BOOL)galleryForcedResyncRequired;
-(BOOL)gallerySyncRequired;
-(void)setGalleryForcedResyncRequired:(BOOL)arg1;
-(void)setGallerySyncRequired:(BOOL)arg1;

@end

