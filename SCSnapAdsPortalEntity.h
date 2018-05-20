/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, SCSnapAdsPortalMetricData;

@interface SCSnapAdsPortalEntity : NSObject {

	NSString* _entityId;
	NSString* _parentId;
	NSString* _name;
	long long _entityType;
	long long _effectiveStatus;
	long long _entityLoadStatus;
	NSArray* _metricTypes;
	SCSnapAdsPortalMetricData* _metricData;
	unsigned long long _selectedMetricType;
	long long _objective;

}

@property (nonatomic,copy,readonly) NSString * entityId;                          //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentId;                          //@synthesize parentId=_parentId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long entityType;                              //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) long long effectiveStatus;                           //@synthesize effectiveStatus=_effectiveStatus - In the implementation block
@property (assign,nonatomic) long long entityLoadStatus;                          //@synthesize entityLoadStatus=_entityLoadStatus - In the implementation block
@property (nonatomic,retain) NSArray * metricTypes;                               //@synthesize metricTypes=_metricTypes - In the implementation block
@property (nonatomic,retain) SCSnapAdsPortalMetricData * metricData;              //@synthesize metricData=_metricData - In the implementation block
@property (assign,nonatomic) unsigned long long selectedMetricType;               //@synthesize selectedMetricType=_selectedMetricType - In the implementation block
@property (nonatomic,readonly) long long objective;                               //@synthesize objective=_objective - In the implementation block
+(BOOL)_checkEntityId:(id)arg1 entityType:(long long)arg2 ;
-(long long)effectiveStatus;
-(long long)objective;
-(id)initWithId:(id)arg1 parentId:(id)arg2 name:(id)arg3 entityType:(long long)arg4 effectiveStatus:(long long)arg5 objective:(long long)arg6 ;
-(id)getEffectiveStatusString;
-(void)_initMetricTypes;
-(void)updateMetricDataSetsSumOfValues;
-(id)getMetricDataSets;
-(id)initLoadingEntity;
-(void)initMetricDataWithSojuMetricsResponse:(id)arg1 calendarData:(id)arg2 currencyType:(id)arg3 ;
-(BOOL)updateDataSetsWithCalendarMode:(unsigned long long)arg1 metricDataUpdateMode:(unsigned long long)arg2 ;
-(id)getMetricSummaries;
-(id)getFormattedMetricSummaryForSelectedMetricType;
-(BOOL)hasMetricSummaryForSelectedMetricType;
-(id)getMetricSummaryNumberForSpend;
-(id)getLifetimeSpend;
-(id)getMetricDataSetForSelectedMetricType;
-(id)getBreakdownMetricsDict;
-(BOOL)isValidParentId:(id)arg1 ;
-(void)setEffectiveStatus:(long long)arg1 ;
-(long long)entityLoadStatus;
-(void)setEntityLoadStatus:(long long)arg1 ;
-(NSArray *)metricTypes;
-(void)setMetricTypes:(NSArray *)arg1 ;
-(unsigned long long)selectedMetricType;
-(void)setSelectedMetricType:(unsigned long long)arg1 ;
-(NSString *)name;
-(NSString *)parentId;
-(long long)entityType;
-(SCSnapAdsPortalMetricData *)metricData;
-(void)setMetricData:(SCSnapAdsPortalMetricData *)arg1 ;
-(NSString *)entityId;
@end
