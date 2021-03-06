/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLocationManagerState.h>
@class NSSet;


@protocol SCLocationManagerState <NSObject,NSCoding,NSCopying>
@property (nonatomic,readonly) BOOL updatingLocation; 
@property (nonatomic,readonly) double locationAccuracy; 
@property (nonatomic,readonly) BOOL allowsBackground; 
@property (nonatomic,readonly) BOOL updatingHeading; 
@property (nonatomic,copy,readonly) NSSet * observingBeaconRegions; 
@required
-(NSSet *)observingBeaconRegions;
-(BOOL)updatingLocation;
-(BOOL)allowsBackground;
-(BOOL)updatingHeading;
-(double)locationAccuracy;

@end


@class NSSet, NSString;

@interface SCLocationManagerState : NSObject <SCLocationManagerState> {

	BOOL _updatingLocation;
	BOOL _allowsBackground;
	BOOL _updatingHeading;
	double _locationAccuracy;
	NSSet* _observingBeaconRegions;

}

@property (nonatomic,readonly) BOOL updatingLocation;                            //@synthesize updatingLocation=_updatingLocation - In the implementation block
@property (nonatomic,readonly) double locationAccuracy;                          //@synthesize locationAccuracy=_locationAccuracy - In the implementation block
@property (nonatomic,readonly) BOOL allowsBackground;                            //@synthesize allowsBackground=_allowsBackground - In the implementation block
@property (nonatomic,readonly) BOOL updatingHeading;                             //@synthesize updatingHeading=_updatingHeading - In the implementation block
@property (nonatomic,copy,readonly) NSSet * observingBeaconRegions;              //@synthesize observingBeaconRegions=_observingBeaconRegions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)initWithUpdatingLocation:(BOOL)arg1 locationAccuracy:(double)arg2 allowsBackground:(BOOL)arg3 updatingHeading:(BOOL)arg4 observingBeaconRegions:(id)arg5 ;
-(NSSet *)observingBeaconRegions;
-(BOOL)updatingLocation;
-(BOOL)allowsBackground;
-(BOOL)updatingHeading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)locationAccuracy;
@end

