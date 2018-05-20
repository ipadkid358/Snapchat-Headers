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

@class NSString, NSNumber;

@interface SCRankingFeature : NSObject <NSCopying, NSCoding> {

	NSString* _name_DEPRECATED;
	NSNumber* _value;
	long long _type;
	NSNumber* _signalKey;

}

@property (nonatomic,copy,readonly) NSString * name_DEPRECATED;              //@synthesize name_DEPRECATED=_name_DEPRECATED - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * signalKey;                    //@synthesize signalKey=_signalKey - In the implementation block
-(NSNumber *)signalKey;
-(id)initWithName_DEPRECATED:(id)arg1 value:(id)arg2 type:(long long)arg3 signalKey:(id)arg4 ;
-(NSString *)name_DEPRECATED;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(NSNumber *)value;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

