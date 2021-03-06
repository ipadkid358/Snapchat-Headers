/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCADirectSnapPreviewBase.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCADirectSnapPreview : SCADirectSnapPreviewBase <MapSerializable, NSCopying> {

	long long lowLightStatus;
	long long lensSource;
	long long filterStreak;
	long long playerVersion;
	long long galleryContextMenuSource;
	long long entryType;
	NSString* filterLensId;
	NSString* lensOptionId;
	NSString* snapSessionId;
	NSString* lensSessionId;
	NSString* snapId;
	NSString* captureSessionId;
	NSString* entryId;
	NSString* externalId;
	NSString* galleryCollectionCategory;

}
-(void)setSnapSessionId:(id)arg1 ;
-(void)setLensSessionId:(id)arg1 ;
-(void)setLensOptionId:(id)arg1 ;
-(void)setSnapId:(id)arg1 ;
-(void)setEntryId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getSnapSessionId;
-(id)getSnapId;
-(id)getLensSessionId;
-(long long)getLensSource;
-(void)setLensSource:(long long)arg1 ;
-(id)getLensOptionId;
-(id)getCaptureSessionId;
-(void)setCaptureSessionId:(id)arg1 ;
-(long long)getGalleryContextMenuSource;
-(void)setGalleryContextMenuSource:(long long)arg1 ;
-(long long)getPlayerVersion;
-(void)setPlayerVersion:(long long)arg1 ;
-(id)getEntryId;
-(long long)getLowLightStatus;
-(void)setLowLightStatus:(long long)arg1 ;
-(id)getFilterLensId;
-(void)setFilterLensId:(id)arg1 ;
-(long long)getEntryType;
-(id)getExternalId;
-(id)getGalleryCollectionCategory;
-(void)setGalleryCollectionCategory:(id)arg1 ;
-(long long)getFilterStreak;
-(void)setFilterStreak:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExternalId:(id)arg1 ;
-(void)setEntryType:(long long)arg1 ;
-(id)asDictionary;
@end

