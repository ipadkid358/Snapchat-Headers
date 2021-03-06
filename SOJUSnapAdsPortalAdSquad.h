/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUSnapAdsPortalAdSquad.h>
@class NSString, NSNumber;


@protocol SOJUSnapAdsPortalAdSquad <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * campaignId; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * effectiveStatus; 
@property (nonatomic,copy,readonly) NSNumber * startTimestampInMillis; 
@property (nonatomic,copy,readonly) NSNumber * endTimestampInMillis; 
@property (nonatomic,copy,readonly) NSNumber * dailyBudget; 
@property (nonatomic,copy,readonly) NSNumber * bid; 
@property (nonatomic,copy,readonly) NSString * optimizationGoal; 
@required
-(NSString *)idValue;
-(NSNumber *)startTimestampInMillis;
-(NSNumber *)endTimestampInMillis;
-(NSString *)optimizationGoal;
-(NSString *)effectiveStatus;
-(NSNumber *)dailyBudget;
-(NSNumber *)bid;
-(NSString *)name;
-(NSString *)campaignId;

@end


@class NSString, NSNumber;

@interface SOJUSnapAdsPortalAdSquad : NSObject <SOJUSnapAdsPortalAdSquad> {

	NSString* _idValue;
	NSString* _campaignId;
	NSString* _name;
	NSString* _effectiveStatus;
	NSNumber* _startTimestampInMillis;
	NSNumber* _endTimestampInMillis;
	NSNumber* _dailyBudget;
	NSNumber* _bid;
	NSString* _optimizationGoal;

}

@property (nonatomic,copy,readonly) NSString * idValue;                             //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * campaignId;                          //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * effectiveStatus;                     //@synthesize effectiveStatus=_effectiveStatus - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * startTimestampInMillis;              //@synthesize startTimestampInMillis=_startTimestampInMillis - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * endTimestampInMillis;                //@synthesize endTimestampInMillis=_endTimestampInMillis - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * dailyBudget;                         //@synthesize dailyBudget=_dailyBudget - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bid;                                 //@synthesize bid=_bid - In the implementation block
@property (nonatomic,copy,readonly) NSString * optimizationGoal;                    //@synthesize optimizationGoal=_optimizationGoal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(NSString *)idValue;
-(long long)startTimestampInMillisValue;
-(long long)endTimestampInMillisValue;
-(long long)optimizationGoalEnum;
-(long long)effectiveStatusEnum;
-(NSNumber *)startTimestampInMillis;
-(NSNumber *)endTimestampInMillis;
-(NSString *)optimizationGoal;
-(NSString *)effectiveStatus;
-(double)dailyBudgetValue;
-(double)bidValue;
-(NSNumber *)dailyBudget;
-(NSNumber *)bid;
-(id)initWithIdValue:(id)arg1 campaignId:(id)arg2 name:(id)arg3 effectiveStatus:(id)arg4 startTimestampInMillis:(id)arg5 endTimestampInMillis:(id)arg6 dailyBudget:(id)arg7 bid:(id)arg8 optimizationGoal:(id)arg9 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSString *)campaignId;
@end

