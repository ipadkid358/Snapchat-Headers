/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandInventoryRestriction.h>
@class NSString, SOJUUnlockablesOndemandSchedule, SOJUUnlockablesOndemandGeofence, SOJUUnlockablesOndemandRestriction;


@protocol SOJUUnlockablesOndemandInventoryRestriction <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandSchedule * schedule; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandGeofence * geofence; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandRestriction * restriction; 
@required
-(NSString *)idValue;
-(SOJUUnlockablesOndemandGeofence *)geofence;
-(SOJUUnlockablesOndemandSchedule *)schedule;
-(SOJUUnlockablesOndemandRestriction *)restriction;

@end


@class NSString, SOJUUnlockablesOndemandSchedule, SOJUUnlockablesOndemandGeofence, SOJUUnlockablesOndemandRestriction;

@interface SOJUUnlockablesOndemandInventoryRestriction : NSObject <SOJUUnlockablesOndemandInventoryRestriction> {

	NSString* _idValue;
	SOJUUnlockablesOndemandSchedule* _schedule;
	SOJUUnlockablesOndemandGeofence* _geofence;
	SOJUUnlockablesOndemandRestriction* _restriction;

}

@property (nonatomic,copy,readonly) NSString * idValue;                                            //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandSchedule * schedule;                    //@synthesize schedule=_schedule - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandGeofence * geofence;                    //@synthesize geofence=_geofence - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandRestriction * restriction;              //@synthesize restriction=_restriction - In the implementation block
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
-(SOJUUnlockablesOndemandGeofence *)geofence;
-(id)initWithIdValue:(id)arg1 schedule:(id)arg2 geofence:(id)arg3 restriction:(id)arg4 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SOJUUnlockablesOndemandSchedule *)schedule;
-(id)toDictionary;
-(SOJUUnlockablesOndemandRestriction *)restriction;
@end

