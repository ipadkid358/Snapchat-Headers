/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSArray, SOJUGeofence, SOJUStickerPackContextualMetadata;

@interface SOJUStickerPackBuilder : NSObject {

	NSString* _packId;
	NSString* _categoryId;
	NSString* _iconUrl;
	NSNumber* _iconVersion;
	NSString* _url;
	NSNumber* _version;
	NSNumber* _active;
	NSString* _type;
	NSArray* _capabilities;
	NSArray* _target;
	NSString* _superCategory;
	SOJUGeofence* _geofence;
	NSString* _unlockablePreviewImgUrl;
	NSString* _title;
	NSNumber* _unlockExpirationTimeInSec;
	SOJUStickerPackContextualMetadata* _contextualPackMetadata;
	NSString* _unlockableId;
	NSNumber* _isExpandable;

}
+(id)withJUStickerPack:(id)arg1 ;
-(id)setVersionValue:(int)arg1 ;
-(id)setTypeEnum:(long long)arg1 ;
-(id)setGeofence:(id)arg1 ;
-(id)setPackId:(id)arg1 ;
-(id)setActiveValue:(BOOL)arg1 ;
-(id)setIconVersionValue:(int)arg1 ;
-(id)setSuperCategoryEnum:(long long)arg1 ;
-(id)setUnlockExpirationTimeInSecValue:(long long)arg1 ;
-(id)setIsExpandableValue:(BOOL)arg1 ;
-(id)setIconUrl:(id)arg1 ;
-(id)setIconVersion:(id)arg1 ;
-(id)setSuperCategory:(id)arg1 ;
-(id)setUnlockablePreviewImgUrl:(id)arg1 ;
-(id)setUnlockExpirationTimeInSec:(id)arg1 ;
-(id)setContextualPackMetadata:(id)arg1 ;
-(id)setUnlockableId:(id)arg1 ;
-(id)setIsExpandable:(id)arg1 ;
-(id)setCategoryId:(id)arg1 ;
-(id)setTitle:(id)arg1 ;
-(id)setType:(id)arg1 ;
-(id)setTarget:(id)arg1 ;
-(id)setActive:(id)arg1 ;
-(id)setUrl:(id)arg1 ;
-(id)setVersion:(id)arg1 ;
-(id)build;
-(id)setCapabilities:(id)arg1 ;
@end

