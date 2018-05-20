/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCSpectaclesFirmwareVersion;

@interface SCLagunaFirmwareTag : NSObject {

	BOOL _isRequired;
	NSString* _name;
	NSString* _tagDescription;
	NSString* _lastEditDatetime;
	NSString* _lastEditUser;
	SCSpectaclesFirmwareVersion* _latestVersion;
	SCSpectaclesFirmwareVersion* _minimumAcceptedVersion;
	unsigned long long _hardwareMajorNumber;
	long long _category;

}

@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * tagDescription;                                           //@synthesize tagDescription=_tagDescription - In the implementation block
@property (nonatomic,copy) NSString * lastEditDatetime;                                         //@synthesize lastEditDatetime=_lastEditDatetime - In the implementation block
@property (nonatomic,copy) NSString * lastEditUser;                                             //@synthesize lastEditUser=_lastEditUser - In the implementation block
@property (nonatomic,retain) SCSpectaclesFirmwareVersion * latestVersion;                       //@synthesize latestVersion=_latestVersion - In the implementation block
@property (nonatomic,retain) SCSpectaclesFirmwareVersion * minimumAcceptedVersion;              //@synthesize minimumAcceptedVersion=_minimumAcceptedVersion - In the implementation block
@property (assign,nonatomic) unsigned long long hardwareMajorNumber;                            //@synthesize hardwareMajorNumber=_hardwareMajorNumber - In the implementation block
@property (assign,nonatomic) BOOL isRequired;                                                   //@synthesize isRequired=_isRequired - In the implementation block
@property (assign,nonatomic) long long category;                                                //@synthesize category=_category - In the implementation block
+(long long)firmwareTagCategoryForString:(id)arg1 ;
+(id)_firmwareTagCategoriesEnumToString;
+(id)_stringFirmwareTagCategoriesToEnum;
+(id)stringForFirmwareTagCategory:(long long)arg1 ;
-(void)setLatestVersion:(SCSpectaclesFirmwareVersion *)arg1 ;
-(NSString *)tagDescription;
-(NSString *)lastEditDatetime;
-(NSString *)lastEditUser;
-(SCSpectaclesFirmwareVersion *)minimumAcceptedVersion;
-(void)setTagDescription:(NSString *)arg1 ;
-(void)setLastEditDatetime:(NSString *)arg1 ;
-(void)setLastEditUser:(NSString *)arg1 ;
-(void)setMinimumAcceptedVersion:(SCSpectaclesFirmwareVersion *)arg1 ;
-(unsigned long long)hardwareMajorNumber;
-(void)setHardwareMajorNumber:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(long long)arg1 ;
-(long long)category;
-(void)setIsRequired:(BOOL)arg1 ;
-(BOOL)isRequired;
-(SCSpectaclesFirmwareVersion *)latestVersion;
@end
