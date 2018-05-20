/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSession.h>
@class NSString;


@protocol SCSession <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double endTime; 
@property (nonatomic,copy,readonly) NSString * referrer; 
@property (nonatomic,readonly) long long exitEvent; 
@property (nonatomic,copy,readonly) NSString * previousSessionName; 
@property (nonatomic,readonly) double lastGPSOnTime; 
@property (nonatomic,readonly) double totalGPSOnTime; 
@property (nonatomic,readonly) double lastCameraOnTime; 
@property (nonatomic,readonly) double totalCameraOnTime; 
@required
-(long long)exitEvent;
-(NSString *)previousSessionName;
-(double)lastGPSOnTime;
-(double)totalGPSOnTime;
-(double)lastCameraOnTime;
-(double)totalCameraOnTime;
-(NSString *)referrer;
-(NSString *)name;
-(NSString *)type;
-(double)startTime;
-(double)endTime;

@end


@class NSString;

@interface SCSession : NSObject <SCSession> {

	NSString* _type;
	NSString* _name;
	double _startTime;
	double _endTime;
	NSString* _referrer;
	long long _exitEvent;
	NSString* _previousSessionName;
	double _lastGPSOnTime;
	double _totalGPSOnTime;
	double _lastCameraOnTime;
	double _totalCameraOnTime;

}

@property (nonatomic,copy,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                                   //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrer;                         //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,readonly) long long exitEvent;                              //@synthesize exitEvent=_exitEvent - In the implementation block
@property (nonatomic,copy,readonly) NSString * previousSessionName;              //@synthesize previousSessionName=_previousSessionName - In the implementation block
@property (nonatomic,readonly) double lastGPSOnTime;                             //@synthesize lastGPSOnTime=_lastGPSOnTime - In the implementation block
@property (nonatomic,readonly) double totalGPSOnTime;                            //@synthesize totalGPSOnTime=_totalGPSOnTime - In the implementation block
@property (nonatomic,readonly) double lastCameraOnTime;                          //@synthesize lastCameraOnTime=_lastCameraOnTime - In the implementation block
@property (nonatomic,readonly) double totalCameraOnTime;                         //@synthesize totalCameraOnTime=_totalCameraOnTime - In the implementation block
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
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(long long)exitEvent;
-(void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)previousSessionName;
-(double)lastGPSOnTime;
-(double)totalGPSOnTime;
-(double)lastCameraOnTime;
-(double)totalCameraOnTime;
-(id)initWithType:(id)arg1 name:(id)arg2 startTime:(double)arg3 endTime:(double)arg4 referrer:(id)arg5 exitEvent:(long long)arg6 previousSessionName:(id)arg7 lastGPSOnTime:(double)arg8 totalGPSOnTime:(double)arg9 lastCameraOnTime:(double)arg10 totalCameraOnTime:(double)arg11 ;
-(NSString *)referrer;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(double)endTime;
@end

