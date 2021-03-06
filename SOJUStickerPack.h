/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUStickerPack.h>
@class NSString, NSNumber, NSArray, SOJUGeofence, SOJUStickerPackContextualMetadata;


@protocol SOJUStickerPack <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * packId; 
@property (nonatomic,copy,readonly) NSString * categoryId; 
@property (nonatomic,copy,readonly) NSString * iconUrl; 
@property (nonatomic,copy,readonly) NSNumber * iconVersion; 
@property (nonatomic,copy,readonly) NSString * url; 
@property (nonatomic,copy,readonly) NSNumber * version; 
@property (nonatomic,copy,readonly) NSNumber * active; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSArray * capabilities; 
@property (nonatomic,copy,readonly) NSArray * target; 
@property (nonatomic,copy,readonly) NSString * superCategory; 
@property (nonatomic,copy,readonly) SOJUGeofence * geofence; 
@property (nonatomic,copy,readonly) NSString * unlockablePreviewImgUrl; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSNumber * unlockExpirationTimeInSec; 
@property (nonatomic,copy,readonly) SOJUStickerPackContextualMetadata * contextualPackMetadata; 
@property (nonatomic,copy,readonly) NSString * unlockableId; 
@property (nonatomic,copy,readonly) NSNumber * isExpandable; 
@required
-(NSString *)categoryId;
-(NSString *)unlockableId;
-(NSString *)packId;
-(SOJUGeofence *)geofence;
-(NSString *)iconUrl;
-(NSNumber *)iconVersion;
-(NSString *)superCategory;
-(NSString *)unlockablePreviewImgUrl;
-(NSNumber *)unlockExpirationTimeInSec;
-(SOJUStickerPackContextualMetadata *)contextualPackMetadata;
-(NSString *)url;
-(NSString *)title;
-(NSString *)type;
-(NSArray *)target;
-(NSNumber *)active;
-(NSNumber *)version;
-(NSNumber *)isExpandable;
-(NSArray *)capabilities;

@end


@class NSString, NSNumber, NSArray, SOJUGeofence, SOJUStickerPackContextualMetadata;

@interface SOJUStickerPack : NSObject <SOJUStickerPack> {

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

@property (nonatomic,copy,readonly) NSString * packId;                                                       //@synthesize packId=_packId - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryId;                                                   //@synthesize categoryId=_categoryId - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconUrl;                                                      //@synthesize iconUrl=_iconUrl - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * iconVersion;                                                  //@synthesize iconVersion=_iconVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * version;                                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * active;                                                       //@synthesize active=_active - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * capabilities;                                                  //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,copy,readonly) NSArray * target;                                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * superCategory;                                                //@synthesize superCategory=_superCategory - In the implementation block
@property (nonatomic,copy,readonly) SOJUGeofence * geofence;                                                 //@synthesize geofence=_geofence - In the implementation block
@property (nonatomic,copy,readonly) NSString * unlockablePreviewImgUrl;                                      //@synthesize unlockablePreviewImgUrl=_unlockablePreviewImgUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * unlockExpirationTimeInSec;                                    //@synthesize unlockExpirationTimeInSec=_unlockExpirationTimeInSec - In the implementation block
@property (nonatomic,copy,readonly) SOJUStickerPackContextualMetadata * contextualPackMetadata;              //@synthesize contextualPackMetadata=_contextualPackMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * unlockableId;                                                 //@synthesize unlockableId=_unlockableId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isExpandable;                                                 //@synthesize isExpandable=_isExpandable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(NSString *)categoryId;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(long long)typeEnum;
-(int)versionValue;
-(NSString *)unlockableId;
-(NSString *)packId;
-(SOJUGeofence *)geofence;
-(NSString *)iconUrl;
-(BOOL)activeValue;
-(int)iconVersionValue;
-(long long)superCategoryEnum;
-(long long)unlockExpirationTimeInSecValue;
-(BOOL)isExpandableValue;
-(NSNumber *)iconVersion;
-(NSString *)superCategory;
-(NSString *)unlockablePreviewImgUrl;
-(NSNumber *)unlockExpirationTimeInSec;
-(SOJUStickerPackContextualMetadata *)contextualPackMetadata;
-(id)initWithPackId:(id)arg1 categoryId:(id)arg2 iconUrl:(id)arg3 iconVersion:(id)arg4 url:(id)arg5 version:(id)arg6 active:(id)arg7 type:(id)arg8 capabilities:(id)arg9 target:(id)arg10 superCategory:(id)arg11 geofence:(id)arg12 unlockablePreviewImgUrl:(id)arg13 title:(id)arg14 unlockExpirationTimeInSec:(id)arg15 contextualPackMetadata:(id)arg16 unlockableId:(id)arg17 isExpandable:(id)arg18 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)url;
-(NSString *)title;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)target;
-(NSNumber *)active;
-(NSNumber *)version;
-(id)toDictionary;
-(NSNumber *)isExpandable;
-(NSArray *)capabilities;
@end

