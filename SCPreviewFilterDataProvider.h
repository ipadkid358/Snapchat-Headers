/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDictionary, SOJUContextFilterMetadata, SCVenueFilterSelector, SCSpeed, SCWeather, SCTimestampMetadata, SCAltitude, NSString, SCUnlockablesContextBasedSelector, SCSnapCommonLoggingParameters, SCPreviewFilterDataProviderContextData;


@protocol SCPreviewFilterDataProvider <NSObject>
@property (assign,nonatomic,__weak) id<SCPreviewFilterDataProviderDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long updateMode; 
@property (nonatomic,copy,readonly) NSArray * visualFilterNames; 
@property (nonatomic,copy,readonly) NSArray * speedMotionFilterConfigs; 
@property (nonatomic,copy,readonly) NSDictionary * reverseMotionFilterConfig; 
@property (nonatomic,copy,readonly) NSArray * geoFilters; 
@property (nonatomic,copy,readonly) NSArray * unlockFilters; 
@property (nonatomic,copy,readonly) NSArray * geoFilterImages; 
@property (nonatomic,copy,readonly) SOJUContextFilterMetadata * contextFilterMetadata; 
@property (nonatomic,copy,readonly) NSDictionary * contextFilterNamesWithImages; 
@property (nonatomic,readonly) SCVenueFilterSelector * venueFilterSelector; 
@property (nonatomic,readonly) SCSpeed * speed; 
@property (nonatomic,readonly) SCWeather * weather; 
@property (nonatomic,readonly) SCTimestampMetadata * timestamp; 
@property (nonatomic,readonly) unsigned long long batteryStatus; 
@property (nonatomic,copy,readonly) NSDictionary * geoFilterAppearanceSettingsDictionary; 
@property (nonatomic,readonly) BOOL hasUserUnlockedFilter; 
@property (nonatomic,readonly) SCAltitude * altitude; 
@property (nonatomic,readonly) long long streakCount; 
@property (nonatomic,copy,readonly) NSString * selectedVisualFilterName; 
@property (nonatomic,copy,readonly) NSString * selectedContextFilterId; 
@property (nonatomic,copy,readonly) NSString * selectedSmartFilterName; 
@property (nonatomic,copy,readonly) NSString * selectedSpeedMotionFilterName; 
@property (nonatomic,copy,readonly) NSString * selectedGeoFilterId; 
@property (nonatomic,readonly) long long selectedGeoFilterMediaSubType; 
@property (nonatomic,copy,readonly) NSString * userUnlockedFilterId; 
@property (nonatomic,readonly) BOOL isReverseMotionFilterSelected; 
@property (nonatomic,readonly) BOOL isVenueFilterSelected; 
@property (nonatomic,readonly) BOOL isStreakFilterSelected; 
@property (nonatomic,retain) SCUnlockablesContextBasedSelector * geofilterContextBasedSelector; 
@property (nonatomic,retain) SCSnapCommonLoggingParameters * commonLoggingParameters; 
@property (nonatomic,retain) SCPreviewFilterDataProviderContextData * filterContextData; 
@required
-(NSArray *)geoFilters;
-(SCWeather *)weather;
-(long long)streakCount;
-(SCSnapCommonLoggingParameters *)commonLoggingParameters;
-(void)startUpdatingFilterData;
-(void)stopUpdatingFilterData;
-(void)setCommonLoggingParameters:(id)arg1;
-(SCVenueFilterSelector *)venueFilterSelector;
-(BOOL)isVenueFilterSelected;
-(NSArray *)visualFilterNames;
-(NSArray *)speedMotionFilterConfigs;
-(NSDictionary *)reverseMotionFilterConfig;
-(unsigned long long)batteryStatus;
-(SOJUContextFilterMetadata *)contextFilterMetadata;
-(void)startPreviewContextImageClassification;
-(BOOL)shouldFilterDataProviderRequestToUseLocation;
-(NSArray *)unlockFilters;
-(NSDictionary *)contextFilterNamesWithImages;
-(NSArray *)geoFilterImages;
-(void)insertFilter:(id)arg1 appearanceSetting:(id)arg2 geofilterImage:(id)arg3;
-(NSDictionary *)geoFilterAppearanceSettingsDictionary;
-(NSString *)userUnlockedFilterId;
-(NSString *)selectedSmartFilterName;
-(void)generateContextFilter;
-(id)skyItemForContextFilterName:(id)arg1;
-(id)portraitItemForContextFilterName:(id)arg1;
-(BOOL)isReverseMotionFilterSelected;
-(NSString *)selectedGeoFilterId;
-(NSString *)selectedVisualFilterName;
-(NSString *)selectedContextFilterId;
-(NSString *)selectedSpeedMotionFilterName;
-(BOOL)isStreakFilterSelected;
-(SCUnlockablesContextBasedSelector *)geofilterContextBasedSelector;
-(SCPreviewFilterDataProviderContextData *)filterContextData;
-(void)updateGeoFilter:(id)arg1;
-(void)updateAltitudeType:(id)arg1;
-(void)updateWeatherViewType:(id)arg1;
-(BOOL)hasUserUnlockedFilter;
-(long long)selectedGeoFilterMediaSubType;
-(void)setGeofilterContextBasedSelector:(id)arg1;
-(void)setFilterContextData:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<SCPreviewFilterDataProviderDelegate>)delegate;
-(SCTimestampMetadata *)timestamp;
-(SCSpeed *)speed;
-(void)clear;
-(SCAltitude *)altitude;
-(unsigned long long)updateMode;

@end

