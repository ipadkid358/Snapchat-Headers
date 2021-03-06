/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface SCCheetahFeedAstSignal : NSObject <NSCopying, NSCoding> {

	float _value;
	NSString* _name;
	NSString* _signalDescription;
	long long _signalType;
	NSString* _version;

}

@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * signalDescription;              //@synthesize signalDescription=_signalDescription - In the implementation block
@property (nonatomic,readonly) long long signalType;                           //@synthesize signalType=_signalType - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) float value;                                    //@synthesize value=_value - In the implementation block
-(id)initWithName:(id)arg1 signalDescription:(id)arg2 signalType:(long long)arg3 version:(id)arg4 value:(float)arg5 ;
-(NSString *)signalDescription;
-(long long)signalType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(float)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)version;
@end

